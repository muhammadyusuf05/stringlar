#include<stdio.h>

int main(){
 char c=126;
 int n;
printf("enter n=");
scanf("%d",&n);

for(int i=0;i<=n;i++){
    c--;
    printf("javob %c\n",c);
}

    return 0;
}