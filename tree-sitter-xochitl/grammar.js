// https://github.com/tree-sitter/tree-sitter/blob/master/docs/section-3-creating-parsers.md

module.exports=grammar({
  name:"xochitl",
  extras:$ => [
    /[\s\uFEFF\u2060\u200B\u00A0]/,
    $.comment
  ],
  word:$ => $.identifier,
  rules:{

    // Base constructs
    code:$ => repeat(choice(
      $._definition,
      $._mixmet,
      $.call
    )),
    identifier:$ => /[_$a-zA-Z][_$a-zA-Z0-9]*/,
    proc_name:$ => /[A-Z][_a-zA-Z0-9]*/,
    accessor:$ => seq($.identifier,".",$.identifier),
    comment:$ => token(choice(
      seq("~/",/.*/,"/~"),
      seq("~",/.*/)
    )),

    // Metas and mixins
    _mixmet:$ => choice($.mixin,$.meta_def,$.meta),
    filename:$ => /[\.\/_\-a-zA-Z0-9]+/,
    mixin:$ => seq(choice("@mixin","@import"),$.filename),
    meta_def:$ => seq(
      "meta",$.identifier,"(",repeat(choice($._definition,$._mixmet,$.call)),")"
    ),
    meta:$ => seq("@",$.identifier),


    // Data types
    numeric:$ => /\-?[0-9]+(\.[0-9]+)?/,
    tuple_access:$ => seq(choice($.identifier,$.accessor,$.tuple_access),"<",$.numeric,">"),
    tuple:$ => seq("<",$._expression,
      optional(repeat(seq(",",$._expression))),">"
    ),

    // Expressions
    _expression:$ => choice(
      $.parens,
      $._math,
      $.identifier,
      $.numeric,
      $.tuple,
      $.accessor,
      $.tuple_access
    ),
    parens:$ => seq("(",$._expression,")"),
    _math:$ => choice($.math1,$.math2,$.math3),
    math1:$ => prec.left(prec(1,seq(
      $._expression,choice("+","-"),$._expression
    ))),
    math2:$ => prec.left(prec(2,seq(
      $._expression,choice("*","/"),$._expression
    ))),
    math3:$ => prec.left(prec(3,seq(
      $._expression,choice("**","%"),$._expression
    ))),

    // Definitions
    _definition:$ => choice(
      $.const_def,
      $.proc_def
    ),
    const_def:$ => seq(
      "let",$.identifier,"=",$._expression
    ),
    param:$ => seq($.identifier,optional(seq(":",$._expression))),
    proc_def:$ => seq(
      "def",$.proc_name,
      optional(seq(
        "(",$.param,repeat(seq(",",$.param)),")"
      )),
      "(",repeat(choice($.const_def,$._mixmet,$.call)),")"
    ),

    // Process call
    call:$ => seq(
      $.proc_name,optional($.identifier),"(",optional(seq(
        $.argument,
        optional(repeat(seq(",",$.argument)))
      )),")",optional($.parent)
    ),
    argument:$ => seq($.identifier,":",$._expression),
    parent:$ => seq("->",$.identifier)
  }
});
