/*Print all HTML tags from the given file.*/

%{
#include<stdio.h>
%}

%%
"<"[^>]*> {printf("%s\n",yytext);}
. {}
[\n] {}
%%
int yywrap(){}
void main(){
    yyin=fopen("test.html","r");
    yylex();
}