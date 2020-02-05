#include<stdio.h>


int main(){

FILE *fp,*fq;
   char com[255];
int i=2,a=0,j=0;
   fp = fopen("C:\\Users\\Lab User\\Desktop\\odoo.txt", "r");
   fq = fopen("C:\\Users\\Lab User\\Desktop\\opoo.txt", "w");
   for(j=0;j<=30;j++)
        {
                        fscanf(fp,"%c", &com[j]);
                }

   printf("%s\n", com );

   fgets(com, 255, (FILE*)fp);
  // printf("%s\n", com );
if(com[0]=='/'){
if(com[1]=='/'){

  
printf("\n The given line is a comment!");
fprintf(fq,"\n The given line is a comment!");
fclose(fq);
}
else if(com[1]=='*'){

for(i=2;i<=30;i++){
if(com[i]=='*'&& com[i+1]=='/'){

printf("\n The given line is a comment:");
fprintf(fq,"\n The given line is a comment!");
fclose(fq);
a=1;
break;
}
else
continue;
}
if(a==0)
printf("\n The given line is not a comment!");
fprintf(fq,"\n The given line is not a comment!");
fclose(fq);
}
else

printf("\n The given line is not a comment!");
fprintf(fq,"\n The given line is not a comment!");
fclose(fq);
}
else
printf("\n The given line is not a comment!");
fprintf(fq,"\n The given line is a not comment!");
fclose(fq);



}




