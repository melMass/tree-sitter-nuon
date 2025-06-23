/**
 * @file NUON grammar for tree-sitter
 * @author Mel Massadian <melmassadian@gmail.com>
 * @license MIT
 */

const J = require("tree-sitter-json/grammar");

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

console.log(J);
module.exports = grammar(J, {
  name: "nuon",

  extras: ($, original) => [...original, $.comment],

  rules: {
    document: ($) => repeat(choice($._value, $.table_declaration)),

    table_header: ($) => prec(1, seq("[", commaSep1($.valid_var), "]", ";")),

    table_values: ($) => seq("[", commaSep($._value), "]"),

    table_declaration: ($) =>
      seq(
        "[",
        field("head", $.table_header),
        repeat(seq($.table_values, optional(","))),
        "]",
      ),
    // prettier-ignore
    duration_unit: (_$) => token(choice(
      "ns", "µs", "us", "ms", "sec", "min", "hr", "day", "wk"
    )),
    // prettier-ignore
    filesize_unit: (_$) => choice(
      "b", "B",

      "kb", "kB", "Kb", "KB",
      "mb", "mB", "Mb", "MB",
      "gb", "gB", "Gb", "GB",
      "tb", "tB", "Tb", "TB",
      "pb", "pB", "Pb", "PB",
      "eb", "eB", "Eb", "EB",

      "kib", "kiB", "kIB", "kIb", "Kib", "KIb", "KIB",
      "mib", "miB", "mIB", "mIb", "Mib", "MIb", "MIB",
      "gib", "giB", "gIB", "gIb", "Gib", "GIb", "GIB",
      "tib", "tiB", "tIB", "tIb", "Tib", "TIb", "TIB",
      "pib", "piB", "pIB", "pIb", "Pib", "PIb", "PIB",
      "eib", "eiB", "eIB", "eIb", "Eib", "EIb", "EIB",
    ),

    filesize: ($) =>
      seq(field("value", $.number), field("unit", $.filesize_unit)),

    date: (_$) =>
      token(
        choice(
          /[0-9]{4}-[0-9]{2}-[0-9]{2}/i,
          /[0-9]{4}-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}(\.[0-9]+)?([Zz]|([\+-])([01]\d|2[0-3]):?([0-5]\d)?)?/,
        ),
      ),
    _nuon_value: ($) => choice($.filesize, $.date),

    _value: ($, original) =>
      choice(prec(1, $._nuon_value), original, $.valid_var),

    comment: (_$) =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),

    valid_var: (_) => field("variable", /[A-Za-z_\.\-]+[A-Za-z0-9_\.\-]*/),
  },
});

function commaSep1(rule) {
  return seq(rule, optional(" "), repeat(seq(",", rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
