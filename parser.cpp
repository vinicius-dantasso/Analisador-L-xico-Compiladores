#include "parser.h"
#include "tokens.h"
#include <iostream>
using std::cout;

void Parser::Start()
{
    // enquanto não atingir o fim da entrada
    while ((lookahead = scanner.yylex()) != 0)
    {
        // trata o token recebido do analisador léxico
        switch(lookahead)
        {
            case CLASS: cout << "CLASS\n"; break;
            case AND: cout << "AND\n"; break;
            case EQUIVALENTTO: cout << "EQUIVALENTTO\n"; break;
            case 21: cout << "isOf\n"; break;
            // case ID: cout << "ID: " << scanner.YYText() << "\n"; break;
            // case NUM: cout << "NUM: " << scanner.YYText() << "\n"; break;
            // case RELOP: cout << "RELOP: " << scanner.YYText() << "\n";; break;
        }
    }
}
