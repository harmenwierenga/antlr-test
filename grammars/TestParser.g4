parser grammar TestParser;

options { tokenVocab=TestLexer; }


expression : number |
             OPEN_PAREN expression CLOSE_PAREN |
             expression PLUS expression |
             expression MINUS expression ;
number : NUMBER ;
