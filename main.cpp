#include <iostream>
 
extern int yyparse();
extern FILE *yyin;
 
int main(int argc, char const *argv[]) {
    if (argc < 2) {
        return 1;
    }

    FILE *source = fopen(argv[1], "r");
    if (!source) {
        return 1;
    }

    yyin = source;
    yyparse();

    return 0;
}