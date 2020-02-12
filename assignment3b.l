%{
    #include<stdio.h>
    int vow_count=0;
    int cons_count =0;
%}

%%
[aeiouAEIOU] {vow_count++;}
[a-zA-Z] {const_count++;}
%%

main()
{
    yyin = fopen("CDLA4.txt","r");
    yylex();
    printf("Number of vowels are:  %d\n", vow_count);
    printf("Number of consonants are:  %d\n", cons_count);
    return 0;
}

