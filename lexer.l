%{
// Reconhecedor de uma linguagem simplificada
#include <iostream>
#include "tokens.h"
using std::cout;
%}

%option noyywrap
delim	[ \t\n]
brancos {delim}+
letterMa [A-Z]+
letterMi [a-z]+
letter [A-Za-z]+
noLetter [^A-Za-z]
digito	[0-9]+
underline [_]
has (has)
is (is)
of (Of)
colon (:)
propHas ({has})({letter})
propIs {is}({letterMa}({letter})){of}
idClasse {letterMa}({letter}|{underline})*
idIndividual {letterMa}({letter})({digito})
propertie ({letterMi})({letter})
anyPropertie {letterMi}({colon})({letter})


%%
{brancos}	; // nenhuma ação e nenhum retorno
some                return SOME;
all                 return ALL;
value               return VALUE;
min                 return MIN;
max                 return MAX;
exactly             return EXACTLY;
that                return THAT;
not                 return NOT;
and                 return AND;
or                  return OR;
Class:              return CLASS;
EquivalentTo:       return EQUIVALENTTO;
Individuals:        return INDIVIDUALS;
SubClassOf:         return SUBCLASSOF;
DisjointClasses:    return DISJOINTCLASSES;
{digito}	        return NUM; 
"<"		            return RELOP; 
"<="		        return RELOP; 
"="		            return RELOP; 
"<>"		        return RELOP; 
">"		            return RELOP;
">="		        return RELOP;
 "["                return RELOP;
 "]"                return RELOP;
 "{"                return RELOP;
 "}"                return RELOP;
 "("                return RELOP;
 ")"                return RELOP;
 ","                return RELOP;
{propIs}            cout << "isOf\n";
{propHas}           cout << "HAS\n";
{propertie}         cout << "PROPERTIE\n";
{anyPropertie}      cout << "PROPERTIE\n";
{idClasse}          cout << "ID_CLASS\n";
{idIndividual}      cout << "ID_INDIVIDUAL\n";
%%

// nenhuma função auxiliar é necessária
