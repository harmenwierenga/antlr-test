parser grammar TestParser;

options { tokenVocab=TestLexer; }

start : expression EOF ;

expression : number # Literal
           | OPEN_PAREN expression CLOSE_PAREN # Parenthesised
           | expression PLUS expression # Addition
           | expression MINUS expression # Subtraction
           ;

number : NUMBER ;
