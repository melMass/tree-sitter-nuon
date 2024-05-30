#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_COLON = 2,
  anon_sym_LBRACK = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACK = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_string_content_token1 = 7,
  sym_escape_sequence = 8,
  sym_number = 9,
  sym_true = 10,
  sym_false = 11,
  sym_null = 12,
  sym_comment = 13,
  anon_sym_SEMI = 14,
  sym_duration_unit = 15,
  anon_sym_b = 16,
  anon_sym_B = 17,
  anon_sym_kb = 18,
  anon_sym_kB = 19,
  anon_sym_Kb = 20,
  anon_sym_KB = 21,
  anon_sym_mb = 22,
  anon_sym_mB = 23,
  anon_sym_Mb = 24,
  anon_sym_MB = 25,
  anon_sym_gb = 26,
  anon_sym_gB = 27,
  anon_sym_Gb = 28,
  anon_sym_GB = 29,
  anon_sym_tb = 30,
  anon_sym_tB = 31,
  anon_sym_Tb = 32,
  anon_sym_TB = 33,
  anon_sym_pb = 34,
  anon_sym_pB = 35,
  anon_sym_Pb = 36,
  anon_sym_PB = 37,
  anon_sym_eb = 38,
  anon_sym_eB = 39,
  anon_sym_Eb = 40,
  anon_sym_EB = 41,
  anon_sym_kib = 42,
  anon_sym_kiB = 43,
  anon_sym_kIB = 44,
  anon_sym_kIb = 45,
  anon_sym_Kib = 46,
  anon_sym_KIb = 47,
  anon_sym_KIB = 48,
  anon_sym_mib = 49,
  anon_sym_miB = 50,
  anon_sym_mIB = 51,
  anon_sym_mIb = 52,
  anon_sym_Mib = 53,
  anon_sym_MIb = 54,
  anon_sym_MIB = 55,
  anon_sym_gib = 56,
  anon_sym_giB = 57,
  anon_sym_gIB = 58,
  anon_sym_gIb = 59,
  anon_sym_Gib = 60,
  anon_sym_GIb = 61,
  anon_sym_GIB = 62,
  anon_sym_tib = 63,
  anon_sym_tiB = 64,
  anon_sym_tIB = 65,
  anon_sym_tIb = 66,
  anon_sym_Tib = 67,
  anon_sym_TIb = 68,
  anon_sym_TIB = 69,
  anon_sym_pib = 70,
  anon_sym_piB = 71,
  anon_sym_pIB = 72,
  anon_sym_pIb = 73,
  anon_sym_Pib = 74,
  anon_sym_PIb = 75,
  anon_sym_PIB = 76,
  anon_sym_eib = 77,
  anon_sym_eiB = 78,
  anon_sym_eIB = 79,
  anon_sym_eIb = 80,
  anon_sym_Eib = 81,
  anon_sym_EIb = 82,
  anon_sym_EIB = 83,
  sym_date = 84,
  anon_sym_LBRACE = 85,
  anon_sym_RBRACE = 86,
  sym_document = 87,
  sym__value = 88,
  sym_pair = 89,
  sym_string = 90,
  sym_string_content = 91,
  sym_table_header = 92,
  sym_table_values = 93,
  sym_table = 94,
  sym_filesize_unit = 95,
  sym_filesize = 96,
  sym_duration = 97,
  sym__nuon_value = 98,
  sym_list = 99,
  sym_record = 100,
  aux_sym_document_repeat1 = 101,
  aux_sym_array_repeat1 = 102,
  aux_sym_string_content_repeat1 = 103,
  aux_sym_table_header_repeat1 = 104,
  aux_sym_table_repeat1 = 105,
  aux_sym_record_repeat1 = 106,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_comment] = "comment",
  [anon_sym_SEMI] = ";",
  [sym_duration_unit] = "duration_unit",
  [anon_sym_b] = "b",
  [anon_sym_B] = "B",
  [anon_sym_kb] = "kb",
  [anon_sym_kB] = "kB",
  [anon_sym_Kb] = "Kb",
  [anon_sym_KB] = "KB",
  [anon_sym_mb] = "mb",
  [anon_sym_mB] = "mB",
  [anon_sym_Mb] = "Mb",
  [anon_sym_MB] = "MB",
  [anon_sym_gb] = "gb",
  [anon_sym_gB] = "gB",
  [anon_sym_Gb] = "Gb",
  [anon_sym_GB] = "GB",
  [anon_sym_tb] = "tb",
  [anon_sym_tB] = "tB",
  [anon_sym_Tb] = "Tb",
  [anon_sym_TB] = "TB",
  [anon_sym_pb] = "pb",
  [anon_sym_pB] = "pB",
  [anon_sym_Pb] = "Pb",
  [anon_sym_PB] = "PB",
  [anon_sym_eb] = "eb",
  [anon_sym_eB] = "eB",
  [anon_sym_Eb] = "Eb",
  [anon_sym_EB] = "EB",
  [anon_sym_kib] = "kib",
  [anon_sym_kiB] = "kiB",
  [anon_sym_kIB] = "kIB",
  [anon_sym_kIb] = "kIb",
  [anon_sym_Kib] = "Kib",
  [anon_sym_KIb] = "KIb",
  [anon_sym_KIB] = "KIB",
  [anon_sym_mib] = "mib",
  [anon_sym_miB] = "miB",
  [anon_sym_mIB] = "mIB",
  [anon_sym_mIb] = "mIb",
  [anon_sym_Mib] = "Mib",
  [anon_sym_MIb] = "MIb",
  [anon_sym_MIB] = "MIB",
  [anon_sym_gib] = "gib",
  [anon_sym_giB] = "giB",
  [anon_sym_gIB] = "gIB",
  [anon_sym_gIb] = "gIb",
  [anon_sym_Gib] = "Gib",
  [anon_sym_GIb] = "GIb",
  [anon_sym_GIB] = "GIB",
  [anon_sym_tib] = "tib",
  [anon_sym_tiB] = "tiB",
  [anon_sym_tIB] = "tIB",
  [anon_sym_tIb] = "tIb",
  [anon_sym_Tib] = "Tib",
  [anon_sym_TIb] = "TIb",
  [anon_sym_TIB] = "TIB",
  [anon_sym_pib] = "pib",
  [anon_sym_piB] = "piB",
  [anon_sym_pIB] = "pIB",
  [anon_sym_pIb] = "pIb",
  [anon_sym_Pib] = "Pib",
  [anon_sym_PIb] = "PIb",
  [anon_sym_PIB] = "PIB",
  [anon_sym_eib] = "eib",
  [anon_sym_eiB] = "eiB",
  [anon_sym_eIB] = "eIB",
  [anon_sym_eIb] = "eIb",
  [anon_sym_Eib] = "Eib",
  [anon_sym_EIb] = "EIb",
  [anon_sym_EIB] = "EIB",
  [sym_date] = "date",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_pair] = "pair",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_table_header] = "table_header",
  [sym_table_values] = "table_values",
  [sym_table] = "table",
  [sym_filesize_unit] = "filesize_unit",
  [sym_filesize] = "filesize",
  [sym_duration] = "duration",
  [sym__nuon_value] = "_nuon_value",
  [sym_list] = "list",
  [sym_record] = "record",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_content_repeat1] = "string_content_repeat1",
  [aux_sym_table_header_repeat1] = "table_header_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_record_repeat1] = "record_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_comment] = sym_comment,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_duration_unit] = sym_duration_unit,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_B] = anon_sym_B,
  [anon_sym_kb] = anon_sym_kb,
  [anon_sym_kB] = anon_sym_kB,
  [anon_sym_Kb] = anon_sym_Kb,
  [anon_sym_KB] = anon_sym_KB,
  [anon_sym_mb] = anon_sym_mb,
  [anon_sym_mB] = anon_sym_mB,
  [anon_sym_Mb] = anon_sym_Mb,
  [anon_sym_MB] = anon_sym_MB,
  [anon_sym_gb] = anon_sym_gb,
  [anon_sym_gB] = anon_sym_gB,
  [anon_sym_Gb] = anon_sym_Gb,
  [anon_sym_GB] = anon_sym_GB,
  [anon_sym_tb] = anon_sym_tb,
  [anon_sym_tB] = anon_sym_tB,
  [anon_sym_Tb] = anon_sym_Tb,
  [anon_sym_TB] = anon_sym_TB,
  [anon_sym_pb] = anon_sym_pb,
  [anon_sym_pB] = anon_sym_pB,
  [anon_sym_Pb] = anon_sym_Pb,
  [anon_sym_PB] = anon_sym_PB,
  [anon_sym_eb] = anon_sym_eb,
  [anon_sym_eB] = anon_sym_eB,
  [anon_sym_Eb] = anon_sym_Eb,
  [anon_sym_EB] = anon_sym_EB,
  [anon_sym_kib] = anon_sym_kib,
  [anon_sym_kiB] = anon_sym_kiB,
  [anon_sym_kIB] = anon_sym_kIB,
  [anon_sym_kIb] = anon_sym_kIb,
  [anon_sym_Kib] = anon_sym_Kib,
  [anon_sym_KIb] = anon_sym_KIb,
  [anon_sym_KIB] = anon_sym_KIB,
  [anon_sym_mib] = anon_sym_mib,
  [anon_sym_miB] = anon_sym_miB,
  [anon_sym_mIB] = anon_sym_mIB,
  [anon_sym_mIb] = anon_sym_mIb,
  [anon_sym_Mib] = anon_sym_Mib,
  [anon_sym_MIb] = anon_sym_MIb,
  [anon_sym_MIB] = anon_sym_MIB,
  [anon_sym_gib] = anon_sym_gib,
  [anon_sym_giB] = anon_sym_giB,
  [anon_sym_gIB] = anon_sym_gIB,
  [anon_sym_gIb] = anon_sym_gIb,
  [anon_sym_Gib] = anon_sym_Gib,
  [anon_sym_GIb] = anon_sym_GIb,
  [anon_sym_GIB] = anon_sym_GIB,
  [anon_sym_tib] = anon_sym_tib,
  [anon_sym_tiB] = anon_sym_tiB,
  [anon_sym_tIB] = anon_sym_tIB,
  [anon_sym_tIb] = anon_sym_tIb,
  [anon_sym_Tib] = anon_sym_Tib,
  [anon_sym_TIb] = anon_sym_TIb,
  [anon_sym_TIB] = anon_sym_TIB,
  [anon_sym_pib] = anon_sym_pib,
  [anon_sym_piB] = anon_sym_piB,
  [anon_sym_pIB] = anon_sym_pIB,
  [anon_sym_pIb] = anon_sym_pIb,
  [anon_sym_Pib] = anon_sym_Pib,
  [anon_sym_PIb] = anon_sym_PIb,
  [anon_sym_PIB] = anon_sym_PIB,
  [anon_sym_eib] = anon_sym_eib,
  [anon_sym_eiB] = anon_sym_eiB,
  [anon_sym_eIB] = anon_sym_eIB,
  [anon_sym_eIb] = anon_sym_eIb,
  [anon_sym_Eib] = anon_sym_Eib,
  [anon_sym_EIb] = anon_sym_EIb,
  [anon_sym_EIB] = anon_sym_EIB,
  [sym_date] = sym_date,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_pair] = sym_pair,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_table_header] = sym_table_header,
  [sym_table_values] = sym_table_values,
  [sym_table] = sym_table,
  [sym_filesize_unit] = sym_filesize_unit,
  [sym_filesize] = sym_filesize,
  [sym_duration] = sym_duration,
  [sym__nuon_value] = sym__nuon_value,
  [sym_list] = sym_list,
  [sym_record] = sym_record,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_content_repeat1] = aux_sym_string_content_repeat1,
  [aux_sym_table_header_repeat1] = aux_sym_table_header_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_record_repeat1] = aux_sym_record_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_duration_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Kb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Gb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Eb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kIb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Kib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KIb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_KIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_miB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mIb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Mib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MIb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_giB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gIb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Gib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GIb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tIb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Tib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_piB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pIb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eiB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eIB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eIb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Eib] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EIb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EIB] = {
    .visible = true,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_table_header] = {
    .visible = true,
    .named = true,
  },
  [sym_table_values] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_filesize_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_filesize] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym__nuon_value] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_record] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_head = 1,
  field_key = 2,
  field_unit = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_head] = "head",
  [field_key] = "key",
  [field_unit] = "unit",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_unit, 1},
    {field_value, 0},
  [2] =
    {field_head, 1},
  [3] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      ADVANCE_MAP(
        '"', 79,
        '#', 95,
        ',', 77,
        '-', 242,
        '0', 84,
        ':', 75,
        ';', 96,
        'B', 102,
        'E', 243,
        'G', 244,
        'K', 245,
        'M', 246,
        'P', 247,
        'T', 248,
        '[', 76,
        '\\', 55,
        ']', 78,
        'b', 100,
        'd', 273,
        'e', 249,
        'g', 250,
        'h', 283,
        'k', 251,
        'm', 252,
        'n', 284,
        'p', 253,
        's', 281,
        't', 254,
        'u', 284,
        'w', 282,
        '{', 289,
        '}', 290,
        0xb5, 52,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '}') ADVANCE(290);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(79);
      if (lookahead == '#') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '#', 95,
        ',', 77,
        'B', 101,
        'E', 11,
        'G', 12,
        'K', 13,
        'M', 14,
        'P', 15,
        'T', 16,
        ']', 78,
        'b', 99,
        'd', 41,
        'e', 17,
        'g', 18,
        'h', 51,
        'k', 19,
        'm', 20,
        'n', 52,
        'p', 21,
        's', 49,
        't', 22,
        'u', 52,
        'w', 50,
        '}', 290,
        0xb5, 52,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(54);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 11:
      if (lookahead == 'B') ADVANCE(149);
      if (lookahead == 'I') ADVANCE(23);
      if (lookahead == 'b') ADVANCE(147);
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'B') ADVANCE(125);
      if (lookahead == 'I') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'I') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(117);
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'B') ADVANCE(141);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 16:
      if (lookahead == 'B') ADVANCE(133);
      if (lookahead == 'I') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(131);
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(145);
      if (lookahead == 'I') ADVANCE(29);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(121);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'b') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'I') ADVANCE(33);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(113);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'b') ADVANCE(111);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(137);
      if (lookahead == 'I') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(129);
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'B') ADVANCE(233);
      if (lookahead == 'b') ADVANCE(231);
      END_STATE();
    case 24:
      if (lookahead == 'B') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(189);
      END_STATE();
    case 25:
      if (lookahead == 'B') ADVANCE(163);
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 26:
      if (lookahead == 'B') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(175);
      END_STATE();
    case 27:
      if (lookahead == 'B') ADVANCE(219);
      if (lookahead == 'b') ADVANCE(217);
      END_STATE();
    case 28:
      if (lookahead == 'B') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(203);
      END_STATE();
    case 29:
      if (lookahead == 'B') ADVANCE(225);
      if (lookahead == 'b') ADVANCE(227);
      END_STATE();
    case 30:
      if (lookahead == 'B') ADVANCE(223);
      if (lookahead == 'b') ADVANCE(221);
      END_STATE();
    case 31:
      if (lookahead == 'B') ADVANCE(183);
      if (lookahead == 'b') ADVANCE(185);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(181);
      if (lookahead == 'b') ADVANCE(179);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(155);
      if (lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 35:
      if (lookahead == 'B') ADVANCE(169);
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 36:
      if (lookahead == 'B') ADVANCE(167);
      if (lookahead == 'b') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 37:
      if (lookahead == 'B') ADVANCE(211);
      if (lookahead == 'b') ADVANCE(213);
      END_STATE();
    case 38:
      if (lookahead == 'B') ADVANCE(209);
      if (lookahead == 'b') ADVANCE(207);
      END_STATE();
    case 39:
      if (lookahead == 'B') ADVANCE(197);
      if (lookahead == 'b') ADVANCE(199);
      END_STATE();
    case 40:
      if (lookahead == 'B') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(193);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'b') ADVANCE(229);
      END_STATE();
    case 43:
      if (lookahead == 'b') ADVANCE(187);
      END_STATE();
    case 44:
      if (lookahead == 'b') ADVANCE(159);
      END_STATE();
    case 45:
      if (lookahead == 'b') ADVANCE(173);
      END_STATE();
    case 46:
      if (lookahead == 'b') ADVANCE(215);
      END_STATE();
    case 47:
      if (lookahead == 'b') ADVANCE(201);
      END_STATE();
    case 48:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 'k') ADVANCE(97);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(237);
      END_STATE();
    case 55:
      ADVANCE_MAP(
        '"', 82,
        '/', 82,
        '\\', 82,
        'b', 82,
        'f', 82,
        'n', 82,
        'r', 82,
        't', 82,
        'u', 82,
      );
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(237);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      ADVANCE_MAP(
        '"', 79,
        '#', 95,
        ',', 77,
        '-', 242,
        '0', 84,
        ':', 75,
        ';', 96,
        'B', 102,
        'E', 243,
        'G', 244,
        'K', 245,
        'M', 246,
        'P', 247,
        'T', 248,
        '[', 76,
        ']', 78,
        'b', 100,
        'd', 273,
        'e', 249,
        'g', 250,
        'h', 283,
        'k', 251,
        'm', 252,
        'n', 284,
        'p', 253,
        's', 281,
        't', 254,
        'u', 284,
        'w', 282,
        '{', 289,
        '}', 290,
        0xb5, 52,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      ADVANCE_MAP(
        '"', 79,
        '#', 95,
        ',', 77,
        '-', 242,
        '0', 84,
        ':', 75,
        '[', 76,
        ']', 78,
        '{', 289,
        '}', 290,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '#') ADVANCE(81);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(92);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_duration_unit);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_duration_unit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_b);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_B);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_kb);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_kb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_kB);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_kB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_Kb);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_Kb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_KB);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_KB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_mb);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_mb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_mB);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_mB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_Mb);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_Mb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_MB);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_MB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_gb);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_gb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_gB);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_gB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Gb);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_Gb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_GB);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_GB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_tb);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_tb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_tB);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_tB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_Tb);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Tb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_TB);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_TB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_pb);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_pb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_pB);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_pB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_Pb);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_Pb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PB);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_eb);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_eb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_eB);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_eB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_Eb);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_Eb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_EB);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_EB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_kib);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_kib);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_kiB);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_kiB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_kIB);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_kIB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_kIb);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_kIb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_Kib);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_Kib);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_KIb);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_KIb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_KIB);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_KIB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_mib);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_mib);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_miB);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_miB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_mIB);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_mIB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_mIb);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_mIb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_Mib);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_Mib);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_MIb);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_MIb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_MIB);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_MIB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_gib);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_gib);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_giB);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_giB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_gIB);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_gIB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_gIb);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_gIb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_Gib);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_Gib);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_GIb);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_GIb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_GIB);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_GIB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_tib);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_tib);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_tiB);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_tiB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_tIB);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_tIB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_tIb);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_tIb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_Tib);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_Tib);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_TIb);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_TIb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_TIB);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_TIB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_pib);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_pib);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_piB);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_piB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_pIB);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_pIB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_pIb);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_pIb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_Pib);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_Pib);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_PIb);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_PIb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_PIB);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_PIB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_eib);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_eib);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_eiB);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_eiB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_eIB);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_eIB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_eIb);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_eIb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_Eib);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_Eib);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_EIb);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_EIb);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_EIB);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_EIB);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '.') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == ':') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_date);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(61);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0') ADVANCE(90);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'I') ADVANCE(255);
      if (lookahead == 'b') ADVANCE(148);
      if (lookahead == 'i') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(126);
      if (lookahead == 'I') ADVANCE(256);
      if (lookahead == 'b') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(110);
      if (lookahead == 'I') ADVANCE(257);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'I') ADVANCE(258);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(142);
      if (lookahead == 'I') ADVANCE(259);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(260);
      if (lookahead == 'b') ADVANCE(132);
      if (lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(146);
      if (lookahead == 'I') ADVANCE(261);
      if (lookahead == 'b') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(122);
      if (lookahead == 'I') ADVANCE(263);
      if (lookahead == 'b') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(106);
      if (lookahead == 'I') ADVANCE(265);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(267);
      if (lookahead == 'b') ADVANCE(112);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == 's') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(138);
      if (lookahead == 'I') ADVANCE(269);
      if (lookahead == 'b') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(130);
      if (lookahead == 'I') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(192);
      if (lookahead == 'b') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(164);
      if (lookahead == 'b') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(178);
      if (lookahead == 'b') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(220);
      if (lookahead == 'b') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(206);
      if (lookahead == 'b') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(226);
      if (lookahead == 'b') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(224);
      if (lookahead == 'b') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(182);
      if (lookahead == 'b') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(156);
      if (lookahead == 'b') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'b') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(170);
      if (lookahead == 'b') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(168);
      if (lookahead == 'b') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(212);
      if (lookahead == 'b') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(210);
      if (lookahead == 'b') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'n') ADVANCE(2);
      if (lookahead == 't') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'u') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 73},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 73},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 73},
  [7] = {.lex_state = 73},
  [8] = {.lex_state = 73},
  [9] = {.lex_state = 73},
  [10] = {.lex_state = 73},
  [11] = {.lex_state = 73},
  [12] = {.lex_state = 73},
  [13] = {.lex_state = 73},
  [14] = {.lex_state = 73},
  [15] = {.lex_state = 73},
  [16] = {.lex_state = 73},
  [17] = {.lex_state = 73},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 73},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 73},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 73},
  [24] = {.lex_state = 73},
  [25] = {.lex_state = 73},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_duration_unit] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [anon_sym_kb] = ACTIONS(1),
    [anon_sym_kB] = ACTIONS(1),
    [anon_sym_Kb] = ACTIONS(1),
    [anon_sym_KB] = ACTIONS(1),
    [anon_sym_mb] = ACTIONS(1),
    [anon_sym_mB] = ACTIONS(1),
    [anon_sym_Mb] = ACTIONS(1),
    [anon_sym_MB] = ACTIONS(1),
    [anon_sym_gb] = ACTIONS(1),
    [anon_sym_gB] = ACTIONS(1),
    [anon_sym_Gb] = ACTIONS(1),
    [anon_sym_GB] = ACTIONS(1),
    [anon_sym_tb] = ACTIONS(1),
    [anon_sym_tB] = ACTIONS(1),
    [anon_sym_Tb] = ACTIONS(1),
    [anon_sym_TB] = ACTIONS(1),
    [anon_sym_pb] = ACTIONS(1),
    [anon_sym_pB] = ACTIONS(1),
    [anon_sym_Pb] = ACTIONS(1),
    [anon_sym_PB] = ACTIONS(1),
    [anon_sym_eb] = ACTIONS(1),
    [anon_sym_eB] = ACTIONS(1),
    [anon_sym_Eb] = ACTIONS(1),
    [anon_sym_EB] = ACTIONS(1),
    [anon_sym_kib] = ACTIONS(1),
    [anon_sym_kiB] = ACTIONS(1),
    [anon_sym_kIB] = ACTIONS(1),
    [anon_sym_kIb] = ACTIONS(1),
    [anon_sym_Kib] = ACTIONS(1),
    [anon_sym_KIb] = ACTIONS(1),
    [anon_sym_KIB] = ACTIONS(1),
    [anon_sym_mib] = ACTIONS(1),
    [anon_sym_miB] = ACTIONS(1),
    [anon_sym_mIB] = ACTIONS(1),
    [anon_sym_mIb] = ACTIONS(1),
    [anon_sym_Mib] = ACTIONS(1),
    [anon_sym_MIb] = ACTIONS(1),
    [anon_sym_MIB] = ACTIONS(1),
    [anon_sym_gib] = ACTIONS(1),
    [anon_sym_giB] = ACTIONS(1),
    [anon_sym_gIB] = ACTIONS(1),
    [anon_sym_gIb] = ACTIONS(1),
    [anon_sym_Gib] = ACTIONS(1),
    [anon_sym_GIb] = ACTIONS(1),
    [anon_sym_GIB] = ACTIONS(1),
    [anon_sym_tib] = ACTIONS(1),
    [anon_sym_tiB] = ACTIONS(1),
    [anon_sym_tIB] = ACTIONS(1),
    [anon_sym_tIb] = ACTIONS(1),
    [anon_sym_Tib] = ACTIONS(1),
    [anon_sym_TIb] = ACTIONS(1),
    [anon_sym_TIB] = ACTIONS(1),
    [anon_sym_pib] = ACTIONS(1),
    [anon_sym_piB] = ACTIONS(1),
    [anon_sym_pIB] = ACTIONS(1),
    [anon_sym_pIb] = ACTIONS(1),
    [anon_sym_Pib] = ACTIONS(1),
    [anon_sym_PIb] = ACTIONS(1),
    [anon_sym_PIB] = ACTIONS(1),
    [anon_sym_eib] = ACTIONS(1),
    [anon_sym_eiB] = ACTIONS(1),
    [anon_sym_eIB] = ACTIONS(1),
    [anon_sym_eIb] = ACTIONS(1),
    [anon_sym_Eib] = ACTIONS(1),
    [anon_sym_EIb] = ACTIONS(1),
    [anon_sym_EIB] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(57),
    [sym__value] = STATE(5),
    [sym_string] = STATE(25),
    [sym_table] = STATE(25),
    [sym_filesize] = STATE(25),
    [sym_duration] = STATE(25),
    [sym__nuon_value] = STATE(25),
    [sym_list] = STATE(25),
    [sym_record] = STATE(25),
    [aux_sym_document_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_date] = ACTIONS(17),
    [anon_sym_LBRACE] = ACTIONS(19),
  },
  [2] = {
    [sym_filesize_unit] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [sym_false] = ACTIONS(23),
    [sym_null] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [sym_duration_unit] = ACTIONS(25),
    [anon_sym_b] = ACTIONS(27),
    [anon_sym_B] = ACTIONS(27),
    [anon_sym_kb] = ACTIONS(27),
    [anon_sym_kB] = ACTIONS(27),
    [anon_sym_Kb] = ACTIONS(27),
    [anon_sym_KB] = ACTIONS(27),
    [anon_sym_mb] = ACTIONS(27),
    [anon_sym_mB] = ACTIONS(27),
    [anon_sym_Mb] = ACTIONS(27),
    [anon_sym_MB] = ACTIONS(27),
    [anon_sym_gb] = ACTIONS(27),
    [anon_sym_gB] = ACTIONS(27),
    [anon_sym_Gb] = ACTIONS(27),
    [anon_sym_GB] = ACTIONS(27),
    [anon_sym_tb] = ACTIONS(27),
    [anon_sym_tB] = ACTIONS(27),
    [anon_sym_Tb] = ACTIONS(27),
    [anon_sym_TB] = ACTIONS(27),
    [anon_sym_pb] = ACTIONS(27),
    [anon_sym_pB] = ACTIONS(27),
    [anon_sym_Pb] = ACTIONS(27),
    [anon_sym_PB] = ACTIONS(27),
    [anon_sym_eb] = ACTIONS(27),
    [anon_sym_eB] = ACTIONS(27),
    [anon_sym_Eb] = ACTIONS(27),
    [anon_sym_EB] = ACTIONS(27),
    [anon_sym_kib] = ACTIONS(27),
    [anon_sym_kiB] = ACTIONS(27),
    [anon_sym_kIB] = ACTIONS(27),
    [anon_sym_kIb] = ACTIONS(27),
    [anon_sym_Kib] = ACTIONS(27),
    [anon_sym_KIb] = ACTIONS(27),
    [anon_sym_KIB] = ACTIONS(27),
    [anon_sym_mib] = ACTIONS(27),
    [anon_sym_miB] = ACTIONS(27),
    [anon_sym_mIB] = ACTIONS(27),
    [anon_sym_mIb] = ACTIONS(27),
    [anon_sym_Mib] = ACTIONS(27),
    [anon_sym_MIb] = ACTIONS(27),
    [anon_sym_MIB] = ACTIONS(27),
    [anon_sym_gib] = ACTIONS(27),
    [anon_sym_giB] = ACTIONS(27),
    [anon_sym_gIB] = ACTIONS(27),
    [anon_sym_gIb] = ACTIONS(27),
    [anon_sym_Gib] = ACTIONS(27),
    [anon_sym_GIb] = ACTIONS(27),
    [anon_sym_GIB] = ACTIONS(27),
    [anon_sym_tib] = ACTIONS(27),
    [anon_sym_tiB] = ACTIONS(27),
    [anon_sym_tIB] = ACTIONS(27),
    [anon_sym_tIb] = ACTIONS(27),
    [anon_sym_Tib] = ACTIONS(27),
    [anon_sym_TIb] = ACTIONS(27),
    [anon_sym_TIB] = ACTIONS(27),
    [anon_sym_pib] = ACTIONS(27),
    [anon_sym_piB] = ACTIONS(27),
    [anon_sym_pIB] = ACTIONS(27),
    [anon_sym_pIb] = ACTIONS(27),
    [anon_sym_Pib] = ACTIONS(27),
    [anon_sym_PIb] = ACTIONS(27),
    [anon_sym_PIB] = ACTIONS(27),
    [anon_sym_eib] = ACTIONS(27),
    [anon_sym_eiB] = ACTIONS(27),
    [anon_sym_eIB] = ACTIONS(27),
    [anon_sym_eIb] = ACTIONS(27),
    [anon_sym_Eib] = ACTIONS(27),
    [anon_sym_EIb] = ACTIONS(27),
    [anon_sym_EIB] = ACTIONS(27),
    [sym_date] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
  },
  [3] = {
    [sym_filesize_unit] = STATE(18),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
    [sym_duration_unit] = ACTIONS(29),
    [anon_sym_b] = ACTIONS(31),
    [anon_sym_B] = ACTIONS(31),
    [anon_sym_kb] = ACTIONS(31),
    [anon_sym_kB] = ACTIONS(31),
    [anon_sym_Kb] = ACTIONS(31),
    [anon_sym_KB] = ACTIONS(31),
    [anon_sym_mb] = ACTIONS(31),
    [anon_sym_mB] = ACTIONS(31),
    [anon_sym_Mb] = ACTIONS(31),
    [anon_sym_MB] = ACTIONS(31),
    [anon_sym_gb] = ACTIONS(31),
    [anon_sym_gB] = ACTIONS(31),
    [anon_sym_Gb] = ACTIONS(31),
    [anon_sym_GB] = ACTIONS(31),
    [anon_sym_tb] = ACTIONS(31),
    [anon_sym_tB] = ACTIONS(31),
    [anon_sym_Tb] = ACTIONS(31),
    [anon_sym_TB] = ACTIONS(31),
    [anon_sym_pb] = ACTIONS(31),
    [anon_sym_pB] = ACTIONS(31),
    [anon_sym_Pb] = ACTIONS(31),
    [anon_sym_PB] = ACTIONS(31),
    [anon_sym_eb] = ACTIONS(31),
    [anon_sym_eB] = ACTIONS(31),
    [anon_sym_Eb] = ACTIONS(31),
    [anon_sym_EB] = ACTIONS(31),
    [anon_sym_kib] = ACTIONS(31),
    [anon_sym_kiB] = ACTIONS(31),
    [anon_sym_kIB] = ACTIONS(31),
    [anon_sym_kIb] = ACTIONS(31),
    [anon_sym_Kib] = ACTIONS(31),
    [anon_sym_KIb] = ACTIONS(31),
    [anon_sym_KIB] = ACTIONS(31),
    [anon_sym_mib] = ACTIONS(31),
    [anon_sym_miB] = ACTIONS(31),
    [anon_sym_mIB] = ACTIONS(31),
    [anon_sym_mIb] = ACTIONS(31),
    [anon_sym_Mib] = ACTIONS(31),
    [anon_sym_MIb] = ACTIONS(31),
    [anon_sym_MIB] = ACTIONS(31),
    [anon_sym_gib] = ACTIONS(31),
    [anon_sym_giB] = ACTIONS(31),
    [anon_sym_gIB] = ACTIONS(31),
    [anon_sym_gIb] = ACTIONS(31),
    [anon_sym_Gib] = ACTIONS(31),
    [anon_sym_GIb] = ACTIONS(31),
    [anon_sym_GIB] = ACTIONS(31),
    [anon_sym_tib] = ACTIONS(31),
    [anon_sym_tiB] = ACTIONS(31),
    [anon_sym_tIB] = ACTIONS(31),
    [anon_sym_tIb] = ACTIONS(31),
    [anon_sym_Tib] = ACTIONS(31),
    [anon_sym_TIb] = ACTIONS(31),
    [anon_sym_TIB] = ACTIONS(31),
    [anon_sym_pib] = ACTIONS(31),
    [anon_sym_piB] = ACTIONS(31),
    [anon_sym_pIB] = ACTIONS(31),
    [anon_sym_pIb] = ACTIONS(31),
    [anon_sym_Pib] = ACTIONS(31),
    [anon_sym_PIb] = ACTIONS(31),
    [anon_sym_PIB] = ACTIONS(31),
    [anon_sym_eib] = ACTIONS(31),
    [anon_sym_eiB] = ACTIONS(31),
    [anon_sym_eIB] = ACTIONS(31),
    [anon_sym_eIb] = ACTIONS(31),
    [anon_sym_Eib] = ACTIONS(31),
    [anon_sym_EIb] = ACTIONS(31),
    [anon_sym_EIB] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_date,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(37), 1,
      sym_number,
    STATE(30), 1,
      sym_table_header,
    STATE(38), 1,
      sym__value,
    ACTIONS(15), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(25), 7,
      sym_string,
      sym_table,
      sym_filesize,
      sym_duration,
      sym__nuon_value,
      sym_list,
      sym_record,
  [45] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_number,
    ACTIONS(17), 1,
      sym_date,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym__value,
      aux_sym_document_repeat1,
    ACTIONS(15), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(25), 7,
      sym_string,
      sym_table,
      sym_filesize,
      sym_duration,
      sym__nuon_value,
      sym_list,
      sym_record,
  [88] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_date,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(30), 1,
      sym_table_header,
    STATE(38), 1,
      sym__value,
    ACTIONS(15), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(25), 7,
      sym_string,
      sym_table,
      sym_filesize,
      sym_duration,
      sym__nuon_value,
      sym_list,
      sym_record,
  [133] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(48), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      sym_number,
    ACTIONS(60), 1,
      sym_date,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    STATE(7), 2,
      sym__value,
      aux_sym_document_repeat1,
    ACTIONS(57), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(25), 7,
      sym_string,
      sym_table,
      sym_filesize,
      sym_duration,
      sym__nuon_value,
      sym_list,
      sym_record,
  [176] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_date,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym__value,
    ACTIONS(15), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(25), 7,
      sym_string,
      sym_table,
      sym_filesize,
      sym_duration,
      sym__nuon_value,
      sym_list,
      sym_record,
  [218] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_date,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_number,
    STATE(55), 1,
      sym__value,
    ACTIONS(15), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(25), 7,
      sym_string,
      sym_table,
      sym_filesize,
      sym_duration,
      sym__nuon_value,
      sym_list,
      sym_record,
  [257] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_date,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      sym_number,
    STATE(51), 1,
      sym__value,
    ACTIONS(15), 3,
      sym_true,
      sym_false,
      sym_null,
    STATE(25), 7,
      sym_string,
      sym_table,
      sym_filesize,
      sym_duration,
      sym__nuon_value,
      sym_list,
      sym_record,
  [296] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(68), 9,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(72), 9,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(76), 9,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(84), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(88), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [446] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(96), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [467] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(100), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [488] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(104), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [509] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(112), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_identifier,
    ACTIONS(21), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      sym_date,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [614] = 5,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_string_content_repeat1,
    STATE(59), 1,
      sym_string_content,
    ACTIONS(126), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [631] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      sym_identifier,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(37), 1,
      sym_pair,
    STATE(60), 1,
      sym_string,
  [650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_table_repeat1,
    STATE(48), 1,
      sym_table_values,
  [666] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(130), 1,
      sym_identifier,
    STATE(50), 1,
      sym_pair,
    STATE(60), 1,
      sym_string,
  [682] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_table_repeat1,
    STATE(48), 1,
      sym_table_values,
  [698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_table_repeat1,
    STATE(48), 1,
      sym_table_values,
  [714] = 4,
    ACTIONS(128), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(147), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [728] = 4,
    ACTIONS(128), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_string_content_repeat1,
    ACTIONS(151), 2,
      aux_sym_string_content_token1,
      sym_escape_sequence,
  [742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      aux_sym_array_repeat1,
  [755] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_array_repeat1,
  [768] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_record_repeat1,
  [781] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
    STATE(36), 1,
      aux_sym_record_repeat1,
  [794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      aux_sym_array_repeat1,
  [807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [816] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_table_header_repeat1,
  [829] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_array_repeat1,
  [842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      aux_sym_table_header_repeat1,
  [855] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_array_repeat1,
  [868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      aux_sym_table_header_repeat1,
  [899] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      aux_sym_record_repeat1,
  [912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(197), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym_identifier,
  [986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
  [993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_SEMI,
  [1000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
  [1007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [1014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 45,
  [SMALL_STATE(6)] = 88,
  [SMALL_STATE(7)] = 133,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 257,
  [SMALL_STATE(11)] = 296,
  [SMALL_STATE(12)] = 318,
  [SMALL_STATE(13)] = 340,
  [SMALL_STATE(14)] = 362,
  [SMALL_STATE(15)] = 383,
  [SMALL_STATE(16)] = 404,
  [SMALL_STATE(17)] = 425,
  [SMALL_STATE(18)] = 446,
  [SMALL_STATE(19)] = 467,
  [SMALL_STATE(20)] = 488,
  [SMALL_STATE(21)] = 509,
  [SMALL_STATE(22)] = 530,
  [SMALL_STATE(23)] = 551,
  [SMALL_STATE(24)] = 572,
  [SMALL_STATE(25)] = 593,
  [SMALL_STATE(26)] = 614,
  [SMALL_STATE(27)] = 631,
  [SMALL_STATE(28)] = 650,
  [SMALL_STATE(29)] = 666,
  [SMALL_STATE(30)] = 682,
  [SMALL_STATE(31)] = 698,
  [SMALL_STATE(32)] = 714,
  [SMALL_STATE(33)] = 728,
  [SMALL_STATE(34)] = 742,
  [SMALL_STATE(35)] = 755,
  [SMALL_STATE(36)] = 768,
  [SMALL_STATE(37)] = 781,
  [SMALL_STATE(38)] = 794,
  [SMALL_STATE(39)] = 807,
  [SMALL_STATE(40)] = 816,
  [SMALL_STATE(41)] = 829,
  [SMALL_STATE(42)] = 842,
  [SMALL_STATE(43)] = 855,
  [SMALL_STATE(44)] = 868,
  [SMALL_STATE(45)] = 877,
  [SMALL_STATE(46)] = 886,
  [SMALL_STATE(47)] = 899,
  [SMALL_STATE(48)] = 912,
  [SMALL_STATE(49)] = 923,
  [SMALL_STATE(50)] = 931,
  [SMALL_STATE(51)] = 939,
  [SMALL_STATE(52)] = 947,
  [SMALL_STATE(53)] = 955,
  [SMALL_STATE(54)] = 963,
  [SMALL_STATE(55)] = 971,
  [SMALL_STATE(56)] = 979,
  [SMALL_STATE(57)] = 986,
  [SMALL_STATE(58)] = 993,
  [SMALL_STATE(59)] = 1000,
  [SMALL_STATE(60)] = 1007,
  [SMALL_STATE(61)] = 1014,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 3, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 2, 0, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_duration, 2, 0, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filesize_unit, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filesize_unit, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filesize, 2, 0, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filesize, 2, 0, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, 0, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, 0, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, 0, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 3, 0, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_values, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_values, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_values, 3, 0, 0),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_header_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_header_repeat1, 2, 0, 0),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_header, 4, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_header, 5, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [209] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_nuon(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
