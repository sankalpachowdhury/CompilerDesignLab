/* Declaration section*/
%{#include<stdio.h>
%}

%%
"<"[^>]*> {printf("%s\n", yytext); }  /* if anything enclosed in
                                      these < > occur print text*/
. ;  // else do nothing
%%

int yywrap(){}


int main(int argc, char*argv[])
{
    extern FILE *yyin;
    // Open tags.txt in read mode
    yyin = fopen("assmy3b.txt","r");

    // The function that starts the analysis
    yylex();

    return 0;
}
