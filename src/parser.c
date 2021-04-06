#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 1
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 10

enum {
  sym_identifier = 1,
  aux_sym_source_file_token1 = 2,
  aux_sym_source_file_token2 = 3,
  aux_sym_source_file_token3 = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_SEMI = 7,
  aux_sym_subgraph_token1 = 8,
  aux_sym_attr_stmt_token1 = 9,
  aux_sym_attr_stmt_token2 = 10,
  anon_sym_COLON = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_COMMA = 14,
  anon_sym_EQ = 15,
  anon_sym_PLUS = 16,
  sym_number_literal = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_literal_token1 = 19,
  anon_sym_LT = 20,
  aux_sym__html_string_token1 = 21,
  anon_sym_GT = 22,
  anon_sym_DASH_GT = 23,
  anon_sym_DASH_DASH = 24,
  sym_comment = 25,
  anon_sym_POUND = 26,
  aux_sym_preproc_token1 = 27,
  sym_source_file = 28,
  sym_block = 29,
  sym_stmt_list = 30,
  sym__stmt = 31,
  sym_subgraph = 32,
  sym_node_stmt = 33,
  sym_edge_stmt = 34,
  sym_attr_stmt = 35,
  sym_node_id = 36,
  sym_port = 37,
  sym_attr_list = 38,
  aux_sym__a_list = 39,
  sym_attribute = 40,
  sym_id = 41,
  sym_string_literal = 42,
  sym__html_string = 43,
  sym_edgeop = 44,
  sym_preproc = 45,
  aux_sym_stmt_list_repeat1 = 46,
  aux_sym_edge_stmt_repeat1 = 47,
  aux_sym_attr_list_repeat1 = 48,
  aux_sym_id_repeat1 = 49,
  aux_sym__html_string_repeat1 = 50,
  alias_sym_html_string = 51,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_source_file_token1] = "keyword",
  [aux_sym_source_file_token2] = "keyword",
  [aux_sym_source_file_token3] = "keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [aux_sym_subgraph_token1] = "keyword",
  [aux_sym_attr_stmt_token1] = "keyword",
  [aux_sym_attr_stmt_token2] = "keyword",
  [anon_sym_COLON] = "operator",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "operator",
  [anon_sym_PLUS] = "operator",
  [sym_number_literal] = "number_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [anon_sym_LT] = "<",
  [aux_sym__html_string_token1] = "_html_string_token1",
  [anon_sym_GT] = ">",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DASH_DASH] = "--",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "#",
  [aux_sym_preproc_token1] = "preproc_token1",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_stmt_list] = "stmt_list",
  [sym__stmt] = "_stmt",
  [sym_subgraph] = "subgraph",
  [sym_node_stmt] = "node_stmt",
  [sym_edge_stmt] = "edge_stmt",
  [sym_attr_stmt] = "attr_stmt",
  [sym_node_id] = "node_id",
  [sym_port] = "port",
  [sym_attr_list] = "attr_list",
  [aux_sym__a_list] = "_a_list",
  [sym_attribute] = "attribute",
  [sym_id] = "id",
  [sym_string_literal] = "string_literal",
  [sym__html_string] = "_html_string",
  [sym_edgeop] = "edgeop",
  [sym_preproc] = "preproc",
  [aux_sym_stmt_list_repeat1] = "stmt_list_repeat1",
  [aux_sym_edge_stmt_repeat1] = "edge_stmt_repeat1",
  [aux_sym_attr_list_repeat1] = "attr_list_repeat1",
  [aux_sym_id_repeat1] = "id_repeat1",
  [aux_sym__html_string_repeat1] = "_html_string_repeat1",
  [alias_sym_html_string] = "html_string",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [aux_sym_source_file_token2] = aux_sym_source_file_token1,
  [aux_sym_source_file_token3] = aux_sym_source_file_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_subgraph_token1] = aux_sym_source_file_token1,
  [aux_sym_attr_stmt_token1] = aux_sym_source_file_token1,
  [aux_sym_attr_stmt_token2] = aux_sym_source_file_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_COLON,
  [anon_sym_PLUS] = anon_sym_COLON,
  [sym_number_literal] = sym_number_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym__html_string_token1] = aux_sym__html_string_token1,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [sym_comment] = sym_comment,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_preproc_token1] = aux_sym_preproc_token1,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_stmt_list] = sym_stmt_list,
  [sym__stmt] = sym__stmt,
  [sym_subgraph] = sym_subgraph,
  [sym_node_stmt] = sym_node_stmt,
  [sym_edge_stmt] = sym_edge_stmt,
  [sym_attr_stmt] = sym_attr_stmt,
  [sym_node_id] = sym_node_id,
  [sym_port] = sym_port,
  [sym_attr_list] = sym_attr_list,
  [aux_sym__a_list] = aux_sym__a_list,
  [sym_attribute] = sym_attribute,
  [sym_id] = sym_id,
  [sym_string_literal] = sym_string_literal,
  [sym__html_string] = sym__html_string,
  [sym_edgeop] = sym_edgeop,
  [sym_preproc] = sym_preproc,
  [aux_sym_stmt_list_repeat1] = aux_sym_stmt_list_repeat1,
  [aux_sym_edge_stmt_repeat1] = aux_sym_edge_stmt_repeat1,
  [aux_sym_attr_list_repeat1] = aux_sym_attr_list_repeat1,
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
  [aux_sym__html_string_repeat1] = aux_sym__html_string_repeat1,
  [alias_sym_html_string] = alias_sym_html_string,
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
  [aux_sym_source_file_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_token3] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_subgraph_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attr_stmt_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attr_stmt_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__html_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preproc_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_list] = {
    .visible = true,
    .named = true,
  },
  [sym__stmt] = {
    .visible = false,
    .named = true,
  },
  [sym_subgraph] = {
    .visible = true,
    .named = true,
  },
  [sym_node_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_edge_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_stmt] = {
    .visible = true,
    .named = true,
  },
  [sym_node_id] = {
    .visible = true,
    .named = true,
  },
  [sym_port] = {
    .visible = true,
    .named = true,
  },
  [sym_attr_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__a_list] = {
    .visible = false,
    .named = false,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__html_string] = {
    .visible = false,
    .named = true,
  },
  [sym_edgeop] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stmt_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_edge_stmt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attr_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__html_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_html_string] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_block = 1,
  field_id = 2,
  field_name = 3,
  field_type = 4,
  field_value = 5,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_block] = "block",
  [field_id] = "id",
  [field_name] = "name",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 3},
  [6] = {.index = 8, .length = 3},
  [7] = {.index = 11, .length = 1},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_block, 1},
    {field_type, 0},
  [2] =
    {field_block, 2},
    {field_type, 1},
  [4] =
    {field_block, 0},
  [5] =
    {field_block, 2},
    {field_id, 1},
    {field_type, 0},
  [8] =
    {field_block, 3},
    {field_id, 2},
    {field_type, 1},
  [11] =
    {field_block, 1},
  [12] =
    {field_block, 2},
    {field_id, 1},
  [14] =
    {field_name, 0},
    {field_value, 2},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_html_string,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__html_string, 2,
    sym__html_string,
    alias_sym_html_string,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '+') ADVANCE(23);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '>') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (128 <= lookahead && lookahead <= 255)) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number_literal);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__html_string_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(44);
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym__html_string_token1);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__html_string_token1);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(8);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__html_string_token1);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(8);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__html_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '/') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__html_string_token1);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(46);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(37);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_preproc_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_preproc_token1);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_preproc_token1);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_preproc_token1);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_preproc_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(3);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(5);
      END_STATE();
    case 1:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(10);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_attr_stmt_token2);
      END_STATE();
    case 20:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_attr_stmt_token1);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_source_file_token2);
      END_STATE();
    case 26:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 30:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_source_file_token3);
      END_STATE();
    case 32:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_subgraph_token1);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
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
  [53] = {.lex_state = 10},
  [54] = {.lex_state = 10},
  [55] = {.lex_state = 10},
  [56] = {.lex_state = 10},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 10},
  [62] = {.lex_state = 10},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 53},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_preproc] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [aux_sym_source_file_token2] = ACTIONS(1),
    [aux_sym_source_file_token3] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_subgraph_token1] = ACTIONS(1),
    [aux_sym_attr_stmt_token1] = ACTIONS(1),
    [aux_sym_attr_stmt_token2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_number_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym_preproc] = STATE(1),
    [aux_sym_source_file_token1] = ACTIONS(7),
    [aux_sym_source_file_token2] = ACTIONS(9),
    [aux_sym_source_file_token3] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [2] = {
    [sym_block] = STATE(24),
    [sym_stmt_list] = STATE(78),
    [sym__stmt] = STATE(39),
    [sym_subgraph] = STATE(20),
    [sym_node_stmt] = STATE(38),
    [sym_edge_stmt] = STATE(38),
    [sym_attr_stmt] = STATE(38),
    [sym_node_id] = STATE(12),
    [sym_attribute] = STATE(38),
    [sym_id] = STATE(17),
    [sym_string_literal] = STATE(7),
    [sym__html_string] = STATE(16),
    [sym_preproc] = STATE(2),
    [aux_sym_stmt_list_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(11),
    [aux_sym_source_file_token2] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(17),
    [aux_sym_subgraph_token1] = ACTIONS(19),
    [aux_sym_attr_stmt_token1] = ACTIONS(13),
    [aux_sym_attr_stmt_token2] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [3] = {
    [sym_block] = STATE(24),
    [sym_stmt_list] = STATE(79),
    [sym__stmt] = STATE(39),
    [sym_subgraph] = STATE(20),
    [sym_node_stmt] = STATE(38),
    [sym_edge_stmt] = STATE(38),
    [sym_attr_stmt] = STATE(38),
    [sym_node_id] = STATE(12),
    [sym_attribute] = STATE(38),
    [sym_id] = STATE(17),
    [sym_string_literal] = STATE(7),
    [sym__html_string] = STATE(16),
    [sym_preproc] = STATE(3),
    [aux_sym_stmt_list_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(11),
    [aux_sym_source_file_token2] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(27),
    [aux_sym_subgraph_token1] = ACTIONS(19),
    [aux_sym_attr_stmt_token1] = ACTIONS(13),
    [aux_sym_attr_stmt_token2] = ACTIONS(13),
    [sym_number_literal] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_LT] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      aux_sym_subgraph_token1,
    ACTIONS(21), 1,
      sym_number_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_preproc,
    STATE(5), 1,
      aux_sym_stmt_list_repeat1,
    STATE(7), 1,
      sym_string_literal,
    STATE(12), 1,
      sym_node_id,
    STATE(16), 1,
      sym__html_string,
    STATE(17), 1,
      sym_id,
    STATE(20), 1,
      sym_subgraph,
    STATE(24), 1,
      sym_block,
    STATE(39), 1,
      sym__stmt,
    ACTIONS(13), 3,
      aux_sym_source_file_token2,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
    STATE(38), 4,
      sym_node_stmt,
      sym_edge_stmt,
      sym_attr_stmt,
      sym_attribute,
  [66] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    ACTIONS(42), 1,
      aux_sym_subgraph_token1,
    ACTIONS(45), 1,
      sym_number_literal,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_LT,
    STATE(7), 1,
      sym_string_literal,
    STATE(12), 1,
      sym_node_id,
    STATE(16), 1,
      sym__html_string,
    STATE(17), 1,
      sym_id,
    STATE(20), 1,
      sym_subgraph,
    STATE(24), 1,
      sym_block,
    STATE(39), 1,
      sym__stmt,
    STATE(5), 2,
      sym_preproc,
      aux_sym_stmt_list_repeat1,
    ACTIONS(34), 3,
      aux_sym_source_file_token2,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
    STATE(38), 4,
      sym_node_stmt,
      sym_edge_stmt,
      sym_attr_stmt,
      sym_attribute,
  [130] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      anon_sym_PLUS,
    STATE(6), 1,
      sym_preproc,
    STATE(8), 1,
      aux_sym_id_repeat1,
    ACTIONS(54), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(56), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [168] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(58), 1,
      anon_sym_PLUS,
    STATE(6), 1,
      aux_sym_id_repeat1,
    STATE(7), 1,
      sym_preproc,
    ACTIONS(60), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(62), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [206] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(68), 1,
      anon_sym_PLUS,
    STATE(8), 2,
      sym_preproc,
      aux_sym_id_repeat1,
    ACTIONS(64), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(66), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [242] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(9), 1,
      sym_preproc,
    ACTIONS(71), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(73), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [275] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_preproc,
    ACTIONS(64), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(66), 14,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_PLUS,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [308] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_preproc,
    ACTIONS(75), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(77), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [340] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_preproc,
    STATE(15), 1,
      aux_sym_edge_stmt_repeat1,
    STATE(32), 1,
      aux_sym_attr_list_repeat1,
    STATE(33), 1,
      sym_edgeop,
    STATE(40), 1,
      sym_attr_list,
    ACTIONS(85), 2,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
    ACTIONS(79), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(81), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [384] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_preproc,
    ACTIONS(60), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(62), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [416] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_preproc,
    ACTIONS(87), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(89), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [448] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      sym_preproc,
    STATE(18), 1,
      aux_sym_edge_stmt_repeat1,
    STATE(32), 1,
      aux_sym_attr_list_repeat1,
    STATE(33), 1,
      sym_edgeop,
    STATE(36), 1,
      sym_attr_list,
    ACTIONS(85), 2,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
    ACTIONS(91), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(93), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [492] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_preproc,
    ACTIONS(95), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(97), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [524] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_COLON,
    ACTIONS(105), 1,
      anon_sym_EQ,
    STATE(17), 1,
      sym_preproc,
    STATE(23), 1,
      sym_port,
    ACTIONS(99), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(101), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [561] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(33), 1,
      sym_edgeop,
    ACTIONS(111), 2,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
    STATE(18), 2,
      sym_preproc,
      aux_sym_edge_stmt_repeat1,
    ACTIONS(107), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(109), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [595] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_COLON,
    STATE(19), 1,
      sym_preproc,
    STATE(23), 1,
      sym_port,
    ACTIONS(99), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(101), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [629] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(15), 1,
      aux_sym_edge_stmt_repeat1,
    STATE(20), 1,
      sym_preproc,
    STATE(33), 1,
      sym_edgeop,
    ACTIONS(85), 2,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
    ACTIONS(114), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(116), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [664] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(122), 1,
      anon_sym_COLON,
    STATE(21), 1,
      sym_preproc,
    ACTIONS(118), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(120), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [695] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_preproc,
    ACTIONS(124), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(126), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [723] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_preproc,
    ACTIONS(128), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(130), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [751] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_preproc,
    ACTIONS(132), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(134), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_preproc,
    ACTIONS(136), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(138), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [807] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_preproc,
    ACTIONS(140), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(142), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [835] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(27), 1,
      sym_preproc,
    ACTIONS(107), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(109), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(28), 1,
      sym_preproc,
    ACTIONS(144), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(146), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [891] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(29), 1,
      sym_preproc,
    ACTIONS(148), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(150), 9,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
      anon_sym_DASH_GT,
      anon_sym_DASH_DASH,
  [919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(30), 2,
      sym_preproc,
      aux_sym_attr_list_repeat1,
    ACTIONS(152), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(154), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [948] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(31), 1,
      sym_preproc,
    ACTIONS(159), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(161), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [975] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      aux_sym_attr_list_repeat1,
    STATE(32), 1,
      sym_preproc,
    ACTIONS(163), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(165), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [1006] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      aux_sym_subgraph_token1,
    ACTIONS(21), 1,
      sym_number_literal,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(7), 1,
      sym_string_literal,
    STATE(16), 1,
      sym__html_string,
    STATE(19), 1,
      sym_id,
    STATE(24), 1,
      sym_block,
    STATE(33), 1,
      sym_preproc,
    STATE(27), 2,
      sym_subgraph,
      sym_node_id,
  [1050] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_preproc,
    ACTIONS(152), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(154), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [1076] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_preproc,
    ACTIONS(167), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(169), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [1102] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_preproc,
    ACTIONS(171), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(173), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [1127] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_preproc,
    ACTIONS(175), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(177), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [1152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_preproc,
    ACTIONS(114), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(116), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [1177] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(183), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_preproc,
    ACTIONS(179), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(181), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [1204] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_preproc,
    ACTIONS(185), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
    ACTIONS(187), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [1229] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym_string_literal,
    STATE(16), 1,
      sym__html_string,
    STATE(41), 1,
      sym_preproc,
    STATE(44), 1,
      aux_sym__a_list,
    STATE(48), 1,
      sym_attribute,
    STATE(77), 1,
      sym_id,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number_literal,
  [1267] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    ACTIONS(196), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      anon_sym_LT,
    STATE(7), 1,
      sym_string_literal,
    STATE(16), 1,
      sym__html_string,
    STATE(48), 1,
      sym_attribute,
    STATE(77), 1,
      sym_id,
    ACTIONS(191), 2,
      sym_identifier,
      sym_number_literal,
    STATE(42), 2,
      aux_sym__a_list,
      sym_preproc,
  [1303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_preproc,
    ACTIONS(40), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
    ACTIONS(202), 5,
      aux_sym_source_file_token2,
      aux_sym_subgraph_token1,
      aux_sym_attr_stmt_token1,
      aux_sym_attr_stmt_token2,
      sym_identifier,
  [1327] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym_string_literal,
    STATE(16), 1,
      sym__html_string,
    STATE(42), 1,
      aux_sym__a_list,
    STATE(44), 1,
      sym_preproc,
    STATE(48), 1,
      sym_attribute,
    STATE(77), 1,
      sym_id,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number_literal,
  [1365] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_string_literal,
    STATE(16), 1,
      sym__html_string,
    STATE(45), 1,
      sym_preproc,
    STATE(66), 1,
      sym_id,
    STATE(76), 1,
      sym_block,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number_literal,
  [1400] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_string_literal,
    STATE(16), 1,
      sym__html_string,
    STATE(46), 1,
      sym_preproc,
    STATE(64), 1,
      sym_id,
    STATE(68), 1,
      sym_block,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number_literal,
  [1435] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(7), 1,
      sym_string_literal,
    STATE(16), 1,
      sym__html_string,
    STATE(26), 1,
      sym_block,
    STATE(47), 1,
      sym_preproc,
    STATE(67), 1,
      sym_id,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number_literal,
  [1470] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_preproc,
    ACTIONS(210), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(208), 5,
      anon_sym_RBRACK,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [1491] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(7), 1,
      sym_string_literal,
    STATE(16), 1,
      sym__html_string,
    STATE(28), 1,
      sym_id,
    STATE(49), 1,
      sym_preproc,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number_literal,
  [1520] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(7), 1,
      sym_string_literal,
    STATE(16), 1,
      sym__html_string,
    STATE(21), 1,
      sym_id,
    STATE(50), 1,
      sym_preproc,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number_literal,
  [1549] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(7), 1,
      sym_string_literal,
    STATE(16), 1,
      sym__html_string,
    STATE(31), 1,
      sym_id,
    STATE(51), 1,
      sym_preproc,
    ACTIONS(21), 2,
      sym_identifier,
      sym_number_literal,
  [1578] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(52), 1,
      sym_preproc,
    ACTIONS(212), 2,
      aux_sym_subgraph_token1,
      sym_identifier,
    ACTIONS(214), 4,
      anon_sym_LBRACE,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [1598] = 8,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      aux_sym__html_string_token1,
    ACTIONS(220), 1,
      anon_sym_GT,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_POUND,
    STATE(53), 1,
      sym_preproc,
    STATE(55), 1,
      aux_sym__html_string_repeat1,
    STATE(60), 1,
      sym__html_string,
  [1623] = 8,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      aux_sym__html_string_token1,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_GT,
    STATE(53), 1,
      aux_sym__html_string_repeat1,
    STATE(54), 1,
      sym_preproc,
    STATE(60), 1,
      sym__html_string,
  [1648] = 7,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_POUND,
    ACTIONS(228), 1,
      anon_sym_LT,
    ACTIONS(231), 1,
      aux_sym__html_string_token1,
    ACTIONS(234), 1,
      anon_sym_GT,
    STATE(60), 1,
      sym__html_string,
    STATE(55), 2,
      sym_preproc,
      aux_sym__html_string_repeat1,
  [1671] = 8,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      aux_sym__html_string_token1,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_POUND,
    ACTIONS(236), 1,
      anon_sym_GT,
    STATE(56), 1,
      sym_preproc,
    STATE(57), 1,
      aux_sym__html_string_repeat1,
    STATE(60), 1,
      sym__html_string,
  [1696] = 8,
    ACTIONS(216), 1,
      anon_sym_LT,
    ACTIONS(218), 1,
      aux_sym__html_string_token1,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_POUND,
    ACTIONS(238), 1,
      anon_sym_GT,
    STATE(55), 1,
      aux_sym__html_string_repeat1,
    STATE(57), 1,
      sym_preproc,
    STATE(60), 1,
      sym__html_string,
  [1721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(58), 1,
      sym_preproc,
    ACTIONS(194), 5,
      anon_sym_RBRACK,
      sym_identifier,
      sym_number_literal,
      anon_sym_DQUOTE,
      anon_sym_LT,
  [1738] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      aux_sym_attr_list_repeat1,
    STATE(37), 1,
      sym_attr_list,
    STATE(59), 1,
      sym_preproc,
  [1757] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_POUND,
    STATE(60), 1,
      sym_preproc,
    ACTIONS(240), 3,
      anon_sym_LT,
      aux_sym__html_string_token1,
      anon_sym_GT,
  [1772] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_POUND,
    STATE(61), 1,
      sym_preproc,
    ACTIONS(75), 3,
      anon_sym_LT,
      aux_sym__html_string_token1,
      anon_sym_GT,
  [1787] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_POUND,
    STATE(62), 1,
      sym_preproc,
    ACTIONS(87), 3,
      anon_sym_LT,
      aux_sym__html_string_token1,
      anon_sym_GT,
  [1802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_string_literal,
    STATE(63), 1,
      sym_preproc,
  [1818] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_preproc,
    STATE(70), 1,
      sym_block,
  [1834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    STATE(65), 1,
      sym_preproc,
    ACTIONS(242), 2,
      aux_sym_source_file_token2,
      aux_sym_source_file_token3,
  [1848] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_preproc,
    STATE(71), 1,
      sym_block,
  [1864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
    STATE(67), 1,
      sym_preproc,
  [1880] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    STATE(68), 1,
      sym_preproc,
  [1893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
    STATE(69), 1,
      sym_preproc,
  [1906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym_preproc,
  [1919] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_preproc,
  [1932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_preproc,
  [1945] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_POUND,
    ACTIONS(252), 1,
      aux_sym_preproc_token1,
    STATE(73), 1,
      sym_preproc,
  [1958] = 4,
    ACTIONS(222), 1,
      sym_comment,
    ACTIONS(224), 1,
      anon_sym_POUND,
    ACTIONS(254), 1,
      aux_sym_string_literal_token1,
    STATE(74), 1,
      sym_preproc,
  [1971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_preproc,
  [1984] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_preproc,
  [1997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_EQ,
    STATE(77), 1,
      sym_preproc,
  [2010] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_preproc,
  [2023] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_preproc,
  [2036] = 1,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 130,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 242,
  [SMALL_STATE(10)] = 275,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 384,
  [SMALL_STATE(14)] = 416,
  [SMALL_STATE(15)] = 448,
  [SMALL_STATE(16)] = 492,
  [SMALL_STATE(17)] = 524,
  [SMALL_STATE(18)] = 561,
  [SMALL_STATE(19)] = 595,
  [SMALL_STATE(20)] = 629,
  [SMALL_STATE(21)] = 664,
  [SMALL_STATE(22)] = 695,
  [SMALL_STATE(23)] = 723,
  [SMALL_STATE(24)] = 751,
  [SMALL_STATE(25)] = 779,
  [SMALL_STATE(26)] = 807,
  [SMALL_STATE(27)] = 835,
  [SMALL_STATE(28)] = 863,
  [SMALL_STATE(29)] = 891,
  [SMALL_STATE(30)] = 919,
  [SMALL_STATE(31)] = 948,
  [SMALL_STATE(32)] = 975,
  [SMALL_STATE(33)] = 1006,
  [SMALL_STATE(34)] = 1050,
  [SMALL_STATE(35)] = 1076,
  [SMALL_STATE(36)] = 1102,
  [SMALL_STATE(37)] = 1127,
  [SMALL_STATE(38)] = 1152,
  [SMALL_STATE(39)] = 1177,
  [SMALL_STATE(40)] = 1204,
  [SMALL_STATE(41)] = 1229,
  [SMALL_STATE(42)] = 1267,
  [SMALL_STATE(43)] = 1303,
  [SMALL_STATE(44)] = 1327,
  [SMALL_STATE(45)] = 1365,
  [SMALL_STATE(46)] = 1400,
  [SMALL_STATE(47)] = 1435,
  [SMALL_STATE(48)] = 1470,
  [SMALL_STATE(49)] = 1491,
  [SMALL_STATE(50)] = 1520,
  [SMALL_STATE(51)] = 1549,
  [SMALL_STATE(52)] = 1578,
  [SMALL_STATE(53)] = 1598,
  [SMALL_STATE(54)] = 1623,
  [SMALL_STATE(55)] = 1648,
  [SMALL_STATE(56)] = 1671,
  [SMALL_STATE(57)] = 1696,
  [SMALL_STATE(58)] = 1721,
  [SMALL_STATE(59)] = 1738,
  [SMALL_STATE(60)] = 1757,
  [SMALL_STATE(61)] = 1772,
  [SMALL_STATE(62)] = 1787,
  [SMALL_STATE(63)] = 1802,
  [SMALL_STATE(64)] = 1818,
  [SMALL_STATE(65)] = 1834,
  [SMALL_STATE(66)] = 1848,
  [SMALL_STATE(67)] = 1864,
  [SMALL_STATE(68)] = 1880,
  [SMALL_STATE(69)] = 1893,
  [SMALL_STATE(70)] = 1906,
  [SMALL_STATE(71)] = 1919,
  [SMALL_STATE(72)] = 1932,
  [SMALL_STATE(73)] = 1945,
  [SMALL_STATE(74)] = 1958,
  [SMALL_STATE(75)] = 1971,
  [SMALL_STATE(76)] = 1984,
  [SMALL_STATE(77)] = 1997,
  [SMALL_STATE(78)] = 2010,
  [SMALL_STATE(79)] = 2023,
  [SMALL_STATE(80)] = 2036,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_list, 1),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_list_repeat1, 2), SHIFT_REPEAT(13),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_list_repeat1, 2), SHIFT_REPEAT(59),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_list_repeat1, 2), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_list_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stmt_list_repeat1, 2), SHIFT_REPEAT(47),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_list_repeat1, 2), SHIFT_REPEAT(13),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_list_repeat1, 2), SHIFT_REPEAT(74),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_list_repeat1, 2), SHIFT_REPEAT(56),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_id_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2), SHIFT_REPEAT(63),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_string, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_string, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_stmt, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_stmt, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__html_string, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__html_string, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_edge_stmt, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_stmt, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_id, 1, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_id, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_id, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_edge_stmt_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_edge_stmt_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_edge_stmt_repeat1, 2), SHIFT_REPEAT(52),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stmt, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stmt, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_id, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_id, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subgraph, 1, .production_id = 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgraph, 1, .production_id = 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subgraph, 3, .production_id = 8),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgraph, 3, .production_id = 8),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subgraph, 2, .production_id = 7),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subgraph, 2, .production_id = 7),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_port, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_port, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_list_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_list_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attr_list_repeat1, 2), SHIFT_REPEAT(41),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 3, .production_id = 9),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 9),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_list, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_list, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_attr_list_repeat1, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attr_list_repeat1, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_edge_stmt, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edge_stmt, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attr_stmt, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attr_stmt, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stmt_list_repeat1, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_list_repeat1, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_stmt, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_stmt, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__a_list, 2), SHIFT_REPEAT(13),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__a_list, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__a_list, 2), SHIFT_REPEAT(74),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__a_list, 2), SHIFT_REPEAT(56),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stmt_list_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__a_list, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_edgeop, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_edgeop, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_string_repeat1, 2), SHIFT_REPEAT(54),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__html_string_repeat1, 2), SHIFT_REPEAT(60),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_string_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__html_string_repeat1, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, .production_id = 6),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 5),
  [250] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dot(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
