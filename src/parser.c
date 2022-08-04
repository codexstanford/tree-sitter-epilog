#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
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
  sym_constant = 8,
  aux_sym_variable_token1 = 9,
  anon_sym_DQUOTE = 10,
  sym_code = 11,
  sym_literal = 12,
  sym_literal_args = 13,
  sym_rule = 14,
  sym_rule_body = 15,
  sym__argument = 16,
  sym__term = 17,
  sym_compound = 18,
  sym_compound_args = 19,
  sym_variable = 20,
  aux_sym_code_repeat1 = 21,
  aux_sym_literal_args_repeat1 = 22,
  aux_sym_rule_body_repeat1 = 23,
  aux_sym_compound_args_repeat1 = 24,
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
  [sym_compound] = "compound",
  [sym_compound_args] = "compound_args",
  [sym_variable] = "variable",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_literal_args_repeat1] = "literal_args_repeat1",
  [aux_sym_rule_body_repeat1] = "rule_body_repeat1",
  [aux_sym_compound_args_repeat1] = "compound_args_repeat1",
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
  [sym_compound] = sym_compound,
  [sym_compound_args] = sym_compound_args,
  [sym_variable] = sym_variable,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_literal_args_repeat1] = aux_sym_literal_args_repeat1,
  [aux_sym_rule_body_repeat1] = aux_sym_rule_body_repeat1,
  [aux_sym_compound_args_repeat1] = aux_sym_compound_args_repeat1,
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
  [aux_sym_compound_args_repeat1] = {
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
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(5);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '~') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(11);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
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
      ACCEPT_TOKEN(sym_constant);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
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
    [sym_constant] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_code] = STATE(38),
    [sym_literal] = STATE(18),
    [sym_rule] = STATE(5),
    [aux_sym_code_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_op_negate] = ACTIONS(7),
    [sym_constant] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 1,
      sym_constant,
    ACTIONS(15), 1,
      aux_sym_variable_token1,
    STATE(36), 1,
      sym_literal_args,
    STATE(24), 4,
      sym__argument,
      sym__term,
      sym_compound,
      sym_variable,
  [19] = 5,
    ACTIONS(13), 1,
      sym_constant,
    ACTIONS(15), 1,
      aux_sym_variable_token1,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_literal_args,
    STATE(24), 4,
      sym__argument,
      sym__term,
      sym_compound,
      sym_variable,
  [38] = 2,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [50] = 6,
    ACTIONS(7), 1,
      sym_op_negate,
    ACTIONS(9), 1,
      sym_constant,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_comment,
    STATE(18), 1,
      sym_literal,
    STATE(7), 2,
      sym_rule,
      aux_sym_code_repeat1,
  [70] = 2,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [82] = 6,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym_op_negate,
    ACTIONS(39), 1,
      sym_constant,
    STATE(18), 1,
      sym_literal,
    STATE(7), 2,
      sym_rule,
      aux_sym_code_repeat1,
  [102] = 1,
    ACTIONS(42), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [111] = 3,
    ACTIONS(46), 1,
      anon_sym_AMP,
    STATE(9), 1,
      aux_sym_rule_body_repeat1,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      sym_constant,
  [124] = 1,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [133] = 1,
    ACTIONS(51), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [142] = 3,
    ACTIONS(55), 1,
      anon_sym_AMP,
    STATE(9), 1,
      aux_sym_rule_body_repeat1,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      sym_constant,
  [155] = 3,
    ACTIONS(13), 1,
      sym_constant,
    ACTIONS(15), 1,
      aux_sym_variable_token1,
    STATE(30), 4,
      sym__argument,
      sym__term,
      sym_compound,
      sym_variable,
  [168] = 3,
    ACTIONS(55), 1,
      anon_sym_AMP,
    STATE(12), 1,
      aux_sym_rule_body_repeat1,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      sym_constant,
  [181] = 1,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [190] = 4,
    ACTIONS(13), 1,
      sym_constant,
    ACTIONS(15), 1,
      aux_sym_variable_token1,
    STATE(37), 1,
      sym_compound_args,
    STATE(25), 3,
      sym__term,
      sym_compound,
      sym_variable,
  [205] = 3,
    ACTIONS(13), 1,
      sym_constant,
    ACTIONS(15), 1,
      aux_sym_variable_token1,
    STATE(33), 3,
      sym__term,
      sym_compound,
      sym_variable,
  [217] = 2,
    ACTIONS(63), 1,
      anon_sym_COLON_DASH,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      sym_constant,
  [227] = 1,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      anon_sym_AMP,
      sym_constant,
  [235] = 4,
    ACTIONS(7), 1,
      sym_op_negate,
    ACTIONS(9), 1,
      sym_constant,
    STATE(14), 1,
      sym_literal,
    STATE(21), 1,
      sym_rule_body,
  [248] = 1,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      sym_comment,
      sym_op_negate,
      sym_constant,
  [255] = 3,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_literal_args_repeat1,
  [265] = 3,
    ACTIONS(7), 1,
      sym_op_negate,
    ACTIONS(9), 1,
      sym_constant,
    STATE(19), 1,
      sym_literal,
  [275] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_literal_args_repeat1,
  [285] = 3,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_compound_args_repeat1,
  [295] = 3,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_literal_args_repeat1,
  [305] = 2,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [313] = 3,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_compound_args_repeat1,
  [323] = 3,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_compound_args_repeat1,
  [333] = 1,
    ACTIONS(77), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [338] = 1,
    ACTIONS(93), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [343] = 1,
    ACTIONS(95), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [348] = 1,
    ACTIONS(88), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [353] = 1,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
  [357] = 1,
    ACTIONS(99), 1,
      sym_constant,
  [361] = 1,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
  [365] = 1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
  [369] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 50,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 124,
  [SMALL_STATE(11)] = 133,
  [SMALL_STATE(12)] = 142,
  [SMALL_STATE(13)] = 155,
  [SMALL_STATE(14)] = 168,
  [SMALL_STATE(15)] = 181,
  [SMALL_STATE(16)] = 190,
  [SMALL_STATE(17)] = 205,
  [SMALL_STATE(18)] = 217,
  [SMALL_STATE(19)] = 227,
  [SMALL_STATE(20)] = 235,
  [SMALL_STATE(21)] = 248,
  [SMALL_STATE(22)] = 255,
  [SMALL_STATE(23)] = 265,
  [SMALL_STATE(24)] = 275,
  [SMALL_STATE(25)] = 285,
  [SMALL_STATE(26)] = 295,
  [SMALL_STATE(27)] = 305,
  [SMALL_STATE(28)] = 313,
  [SMALL_STATE(29)] = 323,
  [SMALL_STATE(30)] = 333,
  [SMALL_STATE(31)] = 338,
  [SMALL_STATE(32)] = 343,
  [SMALL_STATE(33)] = 348,
  [SMALL_STATE(34)] = 353,
  [SMALL_STATE(35)] = 357,
  [SMALL_STATE(36)] = 361,
  [SMALL_STATE(37)] = 365,
  [SMALL_STATE(38)] = 369,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(35),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 4, .production_id = 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(23),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 5, .production_id = 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 4, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_args, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_args, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_args, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_args_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_args_repeat1, 2), SHIFT_REPEAT(13),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_args, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_args_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_args_repeat1, 2), SHIFT_REPEAT(17),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound, 4, .production_id = 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
