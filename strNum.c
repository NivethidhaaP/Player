#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main(){
char *c=(char *)malloc(sizeof(char));
char c1;
int i,k;
scanf("%s",c);
for(i=0;i<strlen(c);i++)
{
c1=c[i];
 if(isdigit(c1) || c1=='.' || c1=='-')
  k=1;
 else
 {
  k=0;
  break;
 }
}
if(k==1)
 printf("\n%s => true",c);
else
 printf("\n%s => false",c);
getch();
}
