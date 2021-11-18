#include <stdio.h>
#include<time.h>
int main() {

    int n;

    printf("Enter n : ");
    scanf("%d", &n);  

   printf("oldingisi %d = %c\n", n, n-1);
   printf("keginsizi %d = %c\n", n, n+1);

    return 0;
}