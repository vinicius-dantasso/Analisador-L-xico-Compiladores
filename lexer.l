%{
// Reconhecedor de uma linguagem simplificada
#include <iostream>
#include "tokens.h"
using std::cout;
%}

%option noyywrap
delim	[ \t\n]
brancos {delim}+
letraMa [A-Z]+
letraMi [a-z]+
letra [A-Za-z]
digito	[0-9]+
underline [_]
has (h)(a)(s)
is (i)(s)
of (O)(f)
propHas {has}({letra})+
propIs {is}({letraMa}({letra})+){of}
idClasse {letraMa}({letra}|{underline})*
num	    {digito}+(\.{digito}+)?(E[+-]?{digito}+)?

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
{idClasse}          return CLASS;
{propIs}            cout << "isOf\n";
{propHas}           cout << "HAS\n";
{num}	            return NUM; 
"<"		            return RELOP; 
"<="		        return RELOP; 
"="		            return RELOP; 
"<>"		        return RELOP; 
">"		            return RELOP;
">="		        return RELOP; 
.                   cout << YYText() << " é um token inválido!\n"; 
%%

// nenhuma função auxiliar é necessária
