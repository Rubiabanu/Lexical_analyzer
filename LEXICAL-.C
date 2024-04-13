#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
void main()
{
 int i,ic=0,m,cc=0,oc=0,j;
 char b[30],operators[30],identifiers[30],constants[30];
 clrscr();
 printf("-----Lexical Analyzer-----");
 printf("\nEnter the input string:\n");
 gets(b);
 for(i=0;i<strlen(b);i++)
 {
  if(isspace(b[i]))
  {
   continue;
  }
  else if(isalpha(b[i]))
  {
   identifiers[ic]=b[i];
   ic++;
  }
  else if(isdigit(b[i]))
  {
   m=(b[i]-'0');
   i=i+1;
   while(isdigit(b[i]))
   {
    m=m*10+(b[i]-'0');
    i++;
   }
   i=i-1;
   constants[cc]=m;
   cc++;
  }
  else
  {
   if(b[i]=='*'||b[i]=='+'||b[i]=='-'||b[i]=='/')
   {
    operators[oc]=b[i];
    oc++;
   }
  }
 }
 printf("Identifiers:\n No. of identifiers=%d\n",ic);
 for(j=0;j<ic;j++)
 {
   printf("%c",identifiers[j]);
 }
 printf("\n\n");
 printf("Operators:\n No. of operators=%d\n",oc);
 for(j=0;j<oc;j++)
 {
   printf("%c\t",operators[j]);
 }
 printf("\n\n");
 printf("Constants:\n No.of constants=%d\n",cc);
 for(j=0;j<cc;j++)
 {
   printf("%d\t",constants[j]);
 }
}

