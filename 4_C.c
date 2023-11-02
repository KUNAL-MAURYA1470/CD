%{
#include<stdio.h>
int num_count=0;
%}
%%

[0-9]+ {num_count++; printf("%s\n",yytext);}
. {}
[\n] {}
%%
int yywrap(){}
void main(int argc[],char*argv[]){
    yyin=fopen("test.txt","r");
    yylex();
    printf("\nTotal:%d",num_count);
}
