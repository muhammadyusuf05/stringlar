#include<stdio.h>
int main(){
    char c;
    printf("enter n=");
    scanf("%c",&c);
     if(((c >= 65)&&(c<= 90)) || ((c >= 97)&&(c <= 127))){
        printf("lotin\n");
    } 
    if((c>=48)&&(c<=57)){
        printf("digit\n");
    }
    else {
        printf("0\n");
    }



  return 0;
}
