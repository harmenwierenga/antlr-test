lexer grammar TestLexer;

NUMBER : INTEGER (DOT INTEGER?)? | DOT INTEGER ;
fragment DOT : '.' ;
fragment INTEGER : [0-9]+ ;

PLUS : '+' ;
MINUS : '-' ;
TIMES : '*' ;
DIVIDE : '/' ;
OPEN_PAREN : '(' ;
CLOSE_PAREN : ')' ;
