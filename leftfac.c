#include<stdio.h>
#include<string.h>
int main(){
    char g[20],a[20],b[20],mg[20],ng[20],tg[20];
    int i,j=0,k=0,l=0,pos;
    printf("Enter Production : A->");
    scanf("%s",g);
    for(i=0;g[i]!='|';i++,j++)
        a[j]=g[i];
    a[j]='\0';
    for(j=++i,i=0;g[j]!='\0';j++,i++)
        b[i]=g[j];
    b[i]='\0';
    for(i=0;i<strlen(a)||i<strlen(b);i++){
        if(a[i]==b[i]){
            mg[k]=a[i];
            k++;
            pos=i+1;
        }
    }
    for(i=pos,j=0;a[i]!='\0';i++,j++)
        ng[j]=a[i];
 
    ng[j++]='|';
 
    for(i=pos;b[i]!='\0';i++,j++)
    ng[j]=b[i];
 
    mg[k]='X';
    mg[++k]='\0';
    ng[j]='\0';
 
    printf("\ngmar Without Left Factoring : : \n");
    printf(" A->%s",mg);
    printf("\n X->%s\n",ng);
}