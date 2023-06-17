#include <stdio.h>
#define max 100
void main() {
   char str[max],f=1;
   int i;
   printf("enter the string to be checked: ");
   scanf("%s",str);
   for(i=0;str[i]!='\0';i++) {
      switch(f) {
         case 1: if(str[i]=='a') f=2;
            else if(str[i]=='b') f=1;
            else if(str[i]=='c') f=1;
         break;
         case 2: if(str[i]=='b') f=3;
            else if(str[i]=='a') f=2;
            else if(str[i]=='c') f=1;
         break;
         case 3: if(str[i]=='c') f=4;
            else if(str[i]=='a') f=2;
            else if(str[i]=='b') f=1;
         break;
         case 4:if(str[i]=='c') f=1;
            else if(str[i]=='a') f=2;
            else if(str[i]=='b') f=3;
         break;
      }
   }
   if(f==4)
      printf("String is accepted");
   else printf("String is not accepted");
}