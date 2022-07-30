module.exports = grammar({
  name: 'epilog',

  rules: {
    code: $ => repeat(choice($.rule, $.literal)),

    literal: $ => seq(optional('~'),
                      field('predicate', $.constant),
                      optional(
                        seq(
                          '(',
                          optional($.literal_args),
                          ')'))),

    literal_args: $ => seq($._argument, repeat(seq(',', $._argument))),

    rule: $ => prec(400, seq(field('head', $.literal), ':-', $.rule_body)),

    rule_body: $ => seq($.literal, repeat(seq('&', $.literal))),

    _argument: $ => choice($._term, $.variable),

    _term: $ => choice($.constant, $.compound_expr),

    compound_expr: $ => seq($.constant, '(', $._term, repeat(seq(',', $._term)), ')'),

    constant: $ => /[a-z\d_\.]+/,

    variable: $ => prec(500, /[A-Z][a-z\d_\.]*/),

    // TODO escape quotes
    string: $ => seq('"', /[^"]+/, '"')
  }
});
