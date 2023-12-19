#include "parser.h"
#include "tokens.h"
#include <iostream>
using std::cout;
    int countClass=0;
    int countIdClass=0;
    int countAnd=0;
    int countSome=0;
    int countAll=0;
    int countValue=0;
    int countMin=0;
    int countMax=0;
    int countExactly=0;
    int countThat=0;
    int countNot=0;
    int countOr=0;
    int countOnly=0;
    int countSubClassOf=0;
    int countDisjointClasses=0;
    int countEquivalentTo=0;
    int countIndividuals=0;
    int countRelop=0;
    int countNum=0;
    int countProp=0;
    int countIdIndividuals=0;
void Parser::Start()
{
    
    // enquanto não atingir o fim da entrada
    while ((lookahead = scanner.yylex()) != 0)
    {
        // trata o token recebido do analisador léxico
        switch(lookahead)
        {
            case CLASS:
                countClass++;
            break;
            case AND: countAnd++; break;
            case SOME: countSome++; break;
            case ALL: countAll++; break;
            case VALUE: countValue++; break;
            case MIN: countMin++; break;
            case MAX: countMax++; break;
            case EXACTLY: countExactly++; break;
            case THAT: countThat++; break;
            case NOT: countNot++; break;
            case OR: countOr++; break;
            case ONLY: countOnly; break;
            case SUBCLASSOF: countSubClassOf++; break;
            case DISJOINTCLASSES: countDisjointClasses++; break;
            case EQUIVALENTTO: countEquivalentTo++; break;
            case INDIVIDUALS: countIndividuals; break;
            case RELOP: countRelop++; break;
            case NUM: countNum++; break;
            case ID_CLASS: countIdClass++; break;
            case PROP: countProp++; break;
            case ID_INDIVIDUALS: countIdIndividuals++; break;
        }
    }
    cout << countClass << " Classes\n";
    cout << countIdClass << " Id_Class\n";
    cout << countSubClassOf << " SubClasses\n";
    cout << countRelop << " Relop\n";
    cout << countNum << " Números\n";
    cout << countAnd << " And\n";
    cout << countSome << " Some\n";
    cout << countAll << " All\n";
    cout << countValue << " Value\n";
    cout << countMin << " Min\n";
    cout << countMax << " Max\n";
    cout << countExactly << " Exactly\n";
    cout << countThat << " That\n";
    cout << countNot << " Not\n";
    cout << countOr << " Or\n";
    cout << countOnly << " Only\n";
    cout << countDisjointClasses << " DisjointClasses\n";
    cout << countEquivalentTo << " EquivalentTo\n";
    cout << countIndividuals << " Individuals\n";
    cout << countProp << " Propiedades (has, isOF, anyPropertie, propertie)\n";
    cout << countIdIndividuals << " ID_Individuals\n";
}
