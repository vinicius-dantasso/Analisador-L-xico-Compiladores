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
            case SOME: cout << "SOME\n"; break;
            case ALL: cout << "ALL\n"; break;
            case VALUE: cout << "VALUE\n"; break;
            case MIN: cout << "MIN\n"; break;
            case MAX: cout << "MAX\n"; break;
            case EXACTLY: cout << "EXACTLY\n"; break;
            case THAT: cout << "THAT\n"; break;
            case NOT: cout << "NOT\n"; break;
            case OR: cout << "OR\n"; break;
            case ONLY: cout << "ONLY\n"; break;
            case SUBCLASSOF: cout << "SUBCLASSOF\n"; break;
            case DISJOINTCLASSES: cout << "DISJOINTCLASSES\n"; break;
            case EQUIVALENTTO: cout << "EQUIVALENTTO\n"; break;
            case INDIVIDUALS: cout << "INDIVIDUALS\n"; break;
            case RELOP: cout << "RELOP\n"; break;
            case NUM: cout << "NUM\n"; break;
        }
    }
}
