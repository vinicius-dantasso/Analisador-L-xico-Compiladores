#include "parser.h"
#include "tokens.h"
#include <iostream>
using std::cout;

int countRWord = 0;
int countIndividual = 0;
int countPropertie = 0;
int countDataType = 0;
int countClass = 0;
int countRelop = 0;
int countNum = 0;

void Parser::Start()
{
    
    // enquanto não atingir o fim da entrada
    while ((lookahead = scanner.yylex()) != 0)
    {
        // trata o token recebido do analisador léxico
        switch(lookahead)
        {
            case RESERVED_WORD: countRWord++; break;
            case INDIVIDUAL: countIndividual++; break;
            case PROPERTIE: countPropertie++; break;
            case DATA_TYPE: countDataType++; break;
            case CLASS: countClass++; break;
            case RELOP: countRelop++; break;
            case NUM: countNum++; break;
        }
    }
    
    cout << "------------------------------\n";
    cout << "Palavras Reservadas: " << countRWord << "\n";
    cout << "Propriedades: " << countPropertie << "\n";
    cout << "Instâncias: " << countIndividual << "\n";
    cout << "Tipo de Dado:" << countDataType << "\n";
    cout << "Caracteres Especiais: " << countRelop << "\n";
    cout << "Classes: " << countClass << "\n";
    cout << "Dígitos: " << countNum << "\n";
    cout << "------------------------------\n";
    
}
