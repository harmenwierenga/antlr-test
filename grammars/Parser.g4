parser grammar Parser;

options { tokenVocab=Lexer; }

sentence : (WORD SPACE)+ ;
add : sentence PLUS sentence ;
subtract : sentence MINUS sentence ;
expression : (add | subtract | sentence) ;
