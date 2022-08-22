module.exports = grammar({
  name: 'epilog',

  rules: {
    code: $ => repeat(choice($.comment, $.literal, $.rule)),

    comment: $ => token(seq('%', /.*/)),

    literal: $ => seq(optional($.op_negate),
                      field('predicate', $.constant),
                      optional(
                        seq(
                          '(',
                          field('args', optional($.literal_args)),
                          ')'))),

    op_negate: $ => '~',

    literal_args: $ => seq($._argument, repeat(seq(',', $._argument))),

    rule: $ => prec(400, seq(field('head', $.literal), ':-', field('body', $.rule_body))),

    rule_body: $ => seq($.literal, repeat(seq('&', $.literal))),

    _argument: $ => choice($._term, $.variable),

    _term: $ => choice($.constant, $.compound, $.list_literal, $.list_bang),

    list_literal: $ => seq("[", optional(seq($._argument, repeat(seq(",", $._argument)))), "]"),

    list_bang: $ => prec.right(-500, seq($._argument, repeat(seq("!", $._argument)))),

    compound: $ =>
      seq(
        field('constructor', $.constant),
        '(',
        field('args', $.compound_args),
        ')'
      ),

    compound_args: $ => seq($._argument,
                            repeat(seq(',', $._argument))),

    constant: $ => /[a-z\d_\.]+/,

    variable: $ => prec(500, /_?[A-Z][A-Za-z\d_\.]*/),

    // TODO escape quotes
    string: $ => seq('"', /[^"]+/, '"')
  }
});
