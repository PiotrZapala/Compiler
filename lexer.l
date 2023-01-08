%{
#include <stdio.h>
#include "parser.tab.h"
#include <iostream>
%}

%%
\;          { return SEMICOLON;    }
":="        { return ASSIGN;       }

\+          { return PLUS;         }
"-"         { return MINUS;        }
\*          { return ASTERISK;     }
\/          { return SLASH;        }
"%"         { return PERCENT;      }

"="         { return EQUAL;        }
"!="        { return NEQUAL;       }
"<"         { return LESS;         }
">"         { return GREATER;      }
"<="        { return LESSEQUAL;    }
">="        { return GREATEREQUAL; }

"("		  { return LEFTPAREN;    }
")"		  { return RIGHTPAREN;   }
","         { return COMMA;        }


"PROCEDURE" { return KEY_PROCEDURE;    }
"PROGRAM"   { return KEY_PROGRAM;      }
"IS"        { return KEY_IS;           }
"END"       { return KEY_END;          }  
"VAR"       { return KEY_VAR;          }
"BEGIN"     { return KEY_BEGIN;        }
"WHILE"     { return KEY_WHILE;        }
"DO"        { return KEY_DO;           }
"ENDWHILE"  { return KEY_ENDWHILE;     }
"IF"        { return KEY_IF;           }
"THEN"      { return KEY_THEN;         }
"ENDIF"     { return KEY_ENDIF;        }
"ELSE"      { return KEY_ELSE;         }
"READ"      { return KEY_READ;         }
"WRITE"     { return KEY_WRITE;        }
"REPEAT"    { return KEY_REPEAT;       }
"UNTIL"     { return KEY_UNTIL;        }

[0-9]+      { return NUMBER;         }
[_a-z]+     { return IDENTIFIER;     }
[ \t\n]     { /* ignore whitespace*/ }
.           {                        }  

%%