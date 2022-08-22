#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  sym_comment = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  sym_op_negate = 4,
  anon_sym_COMMA = 5,
  anon_sym_COLON_DASH = 6,
  anon_sym_AMP = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_BANG = 10,
  sym_constant = 11,
  aux_sym_variable_token1 = 12,
  anon_sym_DQUOTE = 13,
  sym_code = 14,
  sym_literal = 15,
  sym_literal_args = 16,
  sym_rule = 17,
  sym_rule_body = 18,
  sym__argument = 19,
  sym__term = 20,
  sym_list_literal = 21,
  sym_list_bang = 22,
  sym_compound = 23,
  sym_compound_args = 24,
  sym_variable = 25,
  aux_sym_code_repeat1 = 26,
  aux_sym_literal_args_repeat1 = 27,
  aux_sym_rule_body_repeat1 = 28,
  aux_sym_list_bang_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_op_negate] = "op_negate",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_AMP] = "&",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BANG] = "!",
  [sym_constant] = "constant",
  [aux_sym_variable_token1] = "variable_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym_code] = "code",
  [sym_literal] = "literal",
  [sym_literal_args] = "literal_args",
  [sym_rule] = "rule",
  [sym_rule_body] = "rule_body",
  [sym__argument] = "_argument",
  [sym__term] = "_term",
  [sym_list_literal] = "list_literal",
  [sym_list_bang] = "list_bang",
  [sym_compound] = "compound",
  [sym_compound_args] = "compound_args",
  [sym_variable] = "variable",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_literal_args_repeat1] = "literal_args_repeat1",
  [aux_sym_rule_body_repeat1] = "rule_body_repeat1",
  [aux_sym_list_bang_repeat1] = "list_bang_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_op_negate] = sym_op_negate,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_constant] = sym_constant,
  [aux_sym_variable_token1] = aux_sym_variable_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_code] = sym_code,
  [sym_literal] = sym_literal,
  [sym_literal_args] = sym_literal_args,
  [sym_rule] = sym_rule,
  [sym_rule_body] = sym_rule_body,
  [sym__argument] = sym__argument,
  [sym__term] = sym__term,
  [sym_list_literal] = sym_list_literal,
  [sym_list_bang] = sym_list_bang,
  [sym_compound] = sym_compound,
  [sym_compound_args] = sym_compound_args,
  [sym_variable] = sym_variable,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_literal_args_repeat1] = aux_sym_literal_args_repeat1,
  [aux_sym_rule_body_repeat1] = aux_sym_rule_body_repeat1,
  [aux_sym_list_bang_repeat1] = aux_sym_list_bang_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_op_negate] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_variable_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_literal_args] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_body] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym__term] = {
    .visible = false,
    .named = true,
  },
  [sym_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_list_bang] = {
    .visible = true,
    .named = true,
  },
  [sym_compound] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_args] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_literal_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_bang_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_body = 2,
  field_constructor = 3,
  field_head = 4,
  field_predicate = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_body] = "body",
  [field_constructor] = "constructor",
  [field_head] = "head",
  [field_predicate] = "predicate",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_predicate, 0},
  [1] =
    {field_predicate, 1},
  [2] =
    {field_body, 2},
    {field_head, 0},
  [4] =
    {field_args, 2},
    {field_predicate, 0},
  [6] =
    {field_args, 3},
    {field_predicate, 1},
  [8] =
    {field_args, 2},
    {field_constructor, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(5);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == '~') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_op_negate);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_constant);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(15);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_constant);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_op_negate] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_code] = STATE(45),
    [sym_literal] = STATE(26),
    [sym_rule] = STATE(9),
    [aux_sym_code_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_op_negate] = ACTIONS(7),
    [sym_constant] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_constant,
    ACTIONS(17), 1,
      aux_sym_variable_token1,
    STATE(44), 1,
      sym_literal_args,
    STATE(22), 6,
      sym__argument,
      sym__term,
      sym_list_literal,
      sym_list_bang,
      sym_compound,
      sym_variable,
  [24] = 6,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_constant,
    ACTIONS(17), 1,
      aux_sym_variable_token1,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym_literal_args,
    STATE(22), 6,
      sym__argument,
      sym__term,
      sym_list_literal,
      sym_list_bang,
      sym_compound,
      sym_variable,
  [48] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_constant,
    ACTIONS(17), 1,
      aux_sym_variable_token1,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
    STATE(24), 6,
      sym__argument,
      sym__term,
      sym_list_literal,
      sym_list_bang,
      sym_compound,
      sym_variable,
  [69] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_constant,
    ACTIONS(17), 1,
      aux_sym_variable_token1,
    STATE(43), 1,
      sym_compound_args,
    STATE(23), 6,
      sym__argument,
      sym__term,
      sym_list_literal,
      sym_list_bang,
      sym_compound,
      sym_variable,
  [90] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_constant,
    ACTIONS(17), 1,
      aux_sym_variable_token1,
    STATE(20), 6,
      sym__argument,
      sym__term,
      sym_list_literal,
      sym_list_bang,
      sym_compound,
      sym_variable,
  [108] = 4,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      sym_constant,
    ACTIONS(17), 1,
      aux_sym_variable_token1,
    STATE(21), 6,
      sym__argument,
      sym__term,
      sym_list_literal,
      sym_list_bang,
      sym_compound,
      sym_variable,
  [126] = 2,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [138] = 6,
    ACTIONS(7), 1,
      sym_op_negate,
    ACTIONS(9), 1,
      sym_constant,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_comment,
    STATE(26), 1,
      sym_literal,
    STATE(11), 2,
      sym_rule,
      aux_sym_code_repeat1,
  [158] = 2,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [170] = 6,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_op_negate,
    ACTIONS(43), 1,
      sym_constant,
    STATE(26), 1,
      sym_literal,
    STATE(11), 2,
      sym_rule,
      aux_sym_code_repeat1,
  [190] = 1,
    ACTIONS(46), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [199] = 1,
    ACTIONS(48), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [208] = 3,
    ACTIONS(52), 1,
      anon_sym_AMP,
    STATE(16), 1,
      aux_sym_rule_body_repeat1,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      sym_constant,
  [221] = 1,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [230] = 3,
    ACTIONS(52), 1,
      anon_sym_AMP,
    STATE(17), 1,
      aux_sym_rule_body_repeat1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      sym_constant,
  [243] = 3,
    ACTIONS(60), 1,
      anon_sym_AMP,
    STATE(17), 1,
      aux_sym_rule_body_repeat1,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      sym_constant,
  [256] = 1,
    ACTIONS(63), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [265] = 2,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BANG,
  [275] = 2,
    STATE(28), 1,
      aux_sym_list_bang_repeat1,
    ACTIONS(69), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BANG,
  [285] = 3,
    ACTIONS(73), 1,
      anon_sym_BANG,
    STATE(28), 1,
      aux_sym_list_bang_repeat1,
    ACTIONS(71), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [297] = 5,
    ACTIONS(73), 1,
      anon_sym_BANG,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_list_bang_repeat1,
    STATE(38), 1,
      aux_sym_literal_args_repeat1,
  [313] = 5,
    ACTIONS(73), 1,
      anon_sym_BANG,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_list_bang_repeat1,
    STATE(40), 1,
      aux_sym_literal_args_repeat1,
  [329] = 5,
    ACTIONS(73), 1,
      anon_sym_BANG,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_list_bang_repeat1,
    STATE(39), 1,
      aux_sym_literal_args_repeat1,
  [345] = 3,
    ACTIONS(83), 1,
      anon_sym_BANG,
    STATE(25), 1,
      aux_sym_list_bang_repeat1,
    ACTIONS(69), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [357] = 2,
    ACTIONS(88), 1,
      anon_sym_COLON_DASH,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      sym_constant,
  [367] = 1,
    ACTIONS(58), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_AMP,
      sym_constant,
  [375] = 3,
    ACTIONS(73), 1,
      anon_sym_BANG,
    STATE(25), 1,
      aux_sym_list_bang_repeat1,
    ACTIONS(90), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [387] = 1,
    ACTIONS(92), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BANG,
  [394] = 1,
    ACTIONS(94), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BANG,
  [401] = 1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      sym_constant,
  [408] = 3,
    ACTIONS(98), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_literal_args_repeat1,
    ACTIONS(71), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [419] = 1,
    ACTIONS(101), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BANG,
  [426] = 4,
    ACTIONS(7), 1,
      sym_op_negate,
    ACTIONS(9), 1,
      sym_constant,
    STATE(14), 1,
      sym_literal,
    STATE(31), 1,
      sym_rule_body,
  [439] = 1,
    ACTIONS(103), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BANG,
  [446] = 1,
    ACTIONS(105), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_BANG,
  [453] = 3,
    ACTIONS(7), 1,
      sym_op_negate,
    ACTIONS(9), 1,
      sym_constant,
    STATE(27), 1,
      sym_literal,
  [463] = 3,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_literal_args_repeat1,
  [473] = 3,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      aux_sym_literal_args_repeat1,
  [483] = 3,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_literal_args_repeat1,
  [493] = 1,
    ACTIONS(113), 1,
      sym_constant,
  [497] = 1,
    ACTIONS(115), 1,
      anon_sym_RPAREN,
  [501] = 1,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
  [505] = 1,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
  [509] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 138,
  [SMALL_STATE(10)] = 158,
  [SMALL_STATE(11)] = 170,
  [SMALL_STATE(12)] = 190,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 221,
  [SMALL_STATE(16)] = 230,
  [SMALL_STATE(17)] = 243,
  [SMALL_STATE(18)] = 256,
  [SMALL_STATE(19)] = 265,
  [SMALL_STATE(20)] = 275,
  [SMALL_STATE(21)] = 285,
  [SMALL_STATE(22)] = 297,
  [SMALL_STATE(23)] = 313,
  [SMALL_STATE(24)] = 329,
  [SMALL_STATE(25)] = 345,
  [SMALL_STATE(26)] = 357,
  [SMALL_STATE(27)] = 367,
  [SMALL_STATE(28)] = 375,
  [SMALL_STATE(29)] = 387,
  [SMALL_STATE(30)] = 394,
  [SMALL_STATE(31)] = 401,
  [SMALL_STATE(32)] = 408,
  [SMALL_STATE(33)] = 419,
  [SMALL_STATE(34)] = 426,
  [SMALL_STATE(35)] = 439,
  [SMALL_STATE(36)] = 446,
  [SMALL_STATE(37)] = 453,
  [SMALL_STATE(38)] = 463,
  [SMALL_STATE(39)] = 473,
  [SMALL_STATE(40)] = 483,
  [SMALL_STATE(41)] = 493,
  [SMALL_STATE(42)] = 497,
  [SMALL_STATE(43)] = 501,
  [SMALL_STATE(44)] = 505,
  [SMALL_STATE(45)] = 509,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2, .production_id = 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(11),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(41),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 5, .production_id = 5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 4, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(37),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 4, .production_id = 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_bang_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_args_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_args, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_args, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_bang_repeat1, 2), SHIFT_REPEAT(6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_bang, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 3),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_args_repeat1, 2), SHIFT_REPEAT(7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound, 4, .production_id = 6),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_args, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_args, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_epilog(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
