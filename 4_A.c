%{
#include<stdio.h>
int sc=0,wc=0,lc=0,cc=0;
%}
%%
[\n] { lc++; cc+=yyleng;}
[  \t] { sc++; cc+=yyleng;}
[^\t\n ]+ { wc++;  cc+=yyleng;}
%%
int yywrap(){}
void main(int argc[],char*argv[])
{
yyin=fopen("test.txt","r");
yylex();
printf("The number of lines=%d\n",lc);
printf("The number of spaces=%d\n",sc);
printf("The number of words=%d\n",wc);
printf("The number of characters are=%d\n",cc);


}