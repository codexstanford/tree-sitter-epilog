#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_TILDE = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_COLON_DASH = 5,
  anon_sym_AMP = 6,
  sym_constant = 7,
  aux_sym_variable_token1 = 8,
  anon_sym_DQUOTE = 9,
  sym_code = 10,
  sym_literal = 11,
  sym_literal_args = 12,
  sym_rule = 13,
  sym_rule_body = 14,
  sym__argument = 15,
  sym__term = 16,
  sym_compound_expr = 17,
  sym_variable = 18,
  aux_sym_code_repeat1 = 19,
  aux_sym_literal_args_repeat1 = 20,
  aux_sym_rule_body_repeat1 = 21,
  aux_sym_compound_expr_repeat1 = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_TILDE] = "~",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [sym_compound_expr] = "compound_expr",
  [sym_variable] = "variable",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_literal_args_repeat1] = "literal_args_repeat1",
  [aux_sym_rule_body_repeat1] = "rule_body_repeat1",
  [aux_sym_compound_expr_repeat1] = "compound_expr_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
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
  [sym_compound_expr] = sym_compound_expr,
  [sym_variable] = sym_variable,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_literal_args_repeat1] = aux_sym_literal_args_repeat1,
  [aux_sym_rule_body_repeat1] = aux_sym_rule_body_repeat1,
  [aux_sym_compound_expr_repeat1] = aux_sym_compound_expr_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
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
  [sym_compound_expr] = {
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
  [aux_sym_compound_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_head = 1,
  field_predicate = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_head] = "head",
  [field_predicate] = "predicate",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_predicate, 0},
  [1] =
    {field_predicate, 1},
  [2] =
    {field_head, 0},
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
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '&') ADVANCE(8);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(5);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '~') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(10);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_constant);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
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
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [aux_sym_variable_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_code] = STATE(36),
    [sym_literal] = STATE(17),
    [sym_rule] = STATE(5),
    [aux_sym_code_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(5),
    [sym_constant] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_RPAREN,
    ACTIONS(11), 1,
      sym_constant,
    ACTIONS(13), 1,
      aux_sym_variable_token1,
    STATE(35), 1,
      sym_literal_args,
    STATE(20), 4,
      sym__argument,
      sym__term,
      sym_compound_expr,
      sym_variable,
  [19] = 5,
    ACTIONS(11), 1,
      sym_constant,
    ACTIONS(13), 1,
      aux_sym_variable_token1,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_literal_args,
    STATE(20), 4,
      sym__argument,
      sym__term,
      sym_compound_expr,
      sym_variable,
  [38] = 2,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [49] = 5,
    ACTIONS(5), 1,
      anon_sym_TILDE,
    ACTIONS(7), 1,
      sym_constant,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_literal,
    STATE(7), 2,
      sym_rule,
      aux_sym_code_repeat1,
  [66] = 2,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [77] = 5,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(32), 1,
      sym_constant,
    STATE(17), 1,
      sym_literal,
    STATE(7), 2,
      sym_rule,
      aux_sym_code_repeat1,
  [94] = 3,
    ACTIONS(11), 1,
      sym_constant,
    ACTIONS(13), 1,
      aux_sym_variable_token1,
    STATE(33), 4,
      sym__argument,
      sym__term,
      sym_compound_expr,
      sym_variable,
  [107] = 3,
    ACTIONS(37), 1,
      anon_sym_AMP,
    STATE(12), 1,
      aux_sym_rule_body_repeat1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      sym_constant,
  [119] = 3,
    ACTIONS(41), 1,
      anon_sym_AMP,
    STATE(10), 1,
      aux_sym_rule_body_repeat1,
    ACTIONS(39), 3,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      sym_constant,
  [131] = 1,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [139] = 3,
    ACTIONS(37), 1,
      anon_sym_AMP,
    STATE(10), 1,
      aux_sym_rule_body_repeat1,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      sym_constant,
  [151] = 1,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [159] = 1,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [167] = 1,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_COLON_DASH,
      anon_sym_AMP,
      sym_constant,
  [175] = 4,
    ACTIONS(5), 1,
      anon_sym_TILDE,
    ACTIONS(7), 1,
      sym_constant,
    STATE(9), 1,
      sym_literal,
    STATE(19), 1,
      sym_rule_body,
  [188] = 2,
    ACTIONS(56), 1,
      anon_sym_COLON_DASH,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      sym_constant,
  [197] = 1,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      anon_sym_AMP,
      sym_constant,
  [204] = 1,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_TILDE,
      sym_constant,
  [210] = 3,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_literal_args_repeat1,
  [220] = 3,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_compound_expr_repeat1,
  [230] = 2,
    ACTIONS(11), 1,
      sym_constant,
    STATE(26), 2,
      sym__term,
      sym_compound_expr,
  [238] = 3,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_literal_args_repeat1,
  [248] = 3,
    ACTIONS(5), 1,
      anon_sym_TILDE,
    ACTIONS(7), 1,
      sym_constant,
    STATE(18), 1,
      sym_literal,
  [258] = 2,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [266] = 3,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_compound_expr_repeat1,
  [276] = 3,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_literal_args_repeat1,
  [286] = 2,
    ACTIONS(11), 1,
      sym_constant,
    STATE(30), 2,
      sym__term,
      sym_compound_expr,
  [294] = 3,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    ACTIONS(84), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_compound_expr_repeat1,
  [304] = 1,
    ACTIONS(64), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [309] = 1,
    ACTIONS(86), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [314] = 1,
    ACTIONS(88), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [319] = 1,
    ACTIONS(79), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [324] = 1,
    ACTIONS(90), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [329] = 1,
    ACTIONS(92), 1,
      anon_sym_RPAREN,
  [333] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [337] = 1,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
  [341] = 1,
    ACTIONS(98), 1,
      sym_constant,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 66,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 107,
  [SMALL_STATE(10)] = 119,
  [SMALL_STATE(11)] = 131,
  [SMALL_STATE(12)] = 139,
  [SMALL_STATE(13)] = 151,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 167,
  [SMALL_STATE(16)] = 175,
  [SMALL_STATE(17)] = 188,
  [SMALL_STATE(18)] = 197,
  [SMALL_STATE(19)] = 204,
  [SMALL_STATE(20)] = 210,
  [SMALL_STATE(21)] = 220,
  [SMALL_STATE(22)] = 230,
  [SMALL_STATE(23)] = 238,
  [SMALL_STATE(24)] = 248,
  [SMALL_STATE(25)] = 258,
  [SMALL_STATE(26)] = 266,
  [SMALL_STATE(27)] = 276,
  [SMALL_STATE(28)] = 286,
  [SMALL_STATE(29)] = 294,
  [SMALL_STATE(30)] = 304,
  [SMALL_STATE(31)] = 309,
  [SMALL_STATE(32)] = 314,
  [SMALL_STATE(33)] = 319,
  [SMALL_STATE(34)] = 324,
  [SMALL_STATE(35)] = 329,
  [SMALL_STATE(36)] = 333,
  [SMALL_STATE(37)] = 337,
  [SMALL_STATE(38)] = 341,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 2, .production_id = 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(38),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2), SHIFT_REPEAT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_body_repeat1, 2), SHIFT_REPEAT(24),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 5, .production_id = 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 3, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 4, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 4, .production_id = 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3, .production_id = 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_args, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_compound_expr_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_compound_expr_repeat1, 2), SHIFT_REPEAT(28),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal_args, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__term, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_literal_args_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_literal_args_repeat1, 2), SHIFT_REPEAT(8),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_expr, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_expr, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
