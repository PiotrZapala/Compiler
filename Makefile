.PHONY = all clean cleanall

all: parser.tab.cpp lexer.l.c
	g++ -std=c++17 -o compiler parser.tab.c lexer.l.c main.cpp

parser.tab.cpp: parser.y
	bison -d -o parser.tab.c parser.y

lexer.l.c: lexer.l
	flex -o lexer.l.c lexer.l

clean:
	rm -f */*.tab.h* */*.tab.c* */*.l.c*

cleanall: clean
	rm -f compiler