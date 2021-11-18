#include<stdio.h>


int main(){
char Belgi;
int N;
printf("Belgi=");
scanf("%s",&Belgi);

printf("N=");
scanf("%d",&N);

printf("\n\n");

printf("natija:");


for(int i=1;i<=N;i++){
    printf("%C",Belgi);
}

printf("\n");


    return 0;
}