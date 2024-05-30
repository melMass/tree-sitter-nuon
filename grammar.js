/**
 * @file NUON grammar for tree-sitter
 * @author Mel Massadian <melmassadian@gmail.com>
 * @license MIT
 */

const J = require("tree-sitter-json/grammar");

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// there is probably a better way
// maybe alias?
delete J.grammar.rules.object;

module.exports = grammar(J, {
  name: "nuon",

  extras: ($, original) => [...original, /\s/, $.comment],
  word: ($) => $.identifier,

  rules: {
    document: ($) => repeat(choice($._value)),

    table_header: ($) => prec(2, seq("[", commaSep1($.identifier), "]", ";")),

    table_values: ($) => seq("[", commaSep($._value), "]"),

    table: ($) =>
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

    duration: ($) =>
      seq(field("value", $.number), field("unit", $.duration_unit)),

    date: (_$) =>
      token(
        choice(
          /[0-9]{4}-[0-9]{2}-[0-9]{2}/i,
          /[0-9]{4}-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}(\.[0-9]+)?([Zz]|([\+-])([01]\d|2[0-3]):?([0-5]\d)?)?/,
        ),
      ),

    _nuon_value: ($) =>
      choice($.filesize, $.record, $.table, $.duration, $.date),

    comment: (_$) => token(seq("#", /.*/)),

    identifier: (_) =>
      token(field("variable", /[A-Za-z_\.\-]+[A-Za-z0-9_\.\-]*/)),

    string: ($, original) => choice(original, prec(1, $.identifier)),
    _value: ($) =>
      choice(
        $.list,
        $.number,
        $.string,
        $.true,
        $.false,
        $.null,
        $._nuon_value,
      ),

    list: ($) => seq("[", commaSep($._value), "]"),

    // object definition from json
    record: ($) => seq("{", commaSep($.pair), "}"),
  },
});

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
