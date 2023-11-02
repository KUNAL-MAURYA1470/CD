%{
#include<stdio.h>
int flag=0;
%}
%%
and|or|but|because|if|then {flag=1;}

. {}
\n {return 0;}
%%
int yywrap(){}

void main()
{
    printf("Enter the sentence:\n");
    yylex();
    if(flag==0)
        printf("Simple sentence\n");
    else
        printf("compound sentence\n");

}