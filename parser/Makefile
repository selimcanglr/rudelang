parser: lex.yy.c y.tab.c
	gcc -o parser y.tab.c
y.tab.c: rude.y
	yacc rude.y
lex.yy.c: rude.l
	lex rude.l
