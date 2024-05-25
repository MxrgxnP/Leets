#include <stdio.h>
int main(void) {
    int a, b, c;
    printf("Tell me the sides and I will tell if the triangle is equilateral ");
    scanf("%d %d %d",&a, &b, &c);
    if(a=b=c){
        printf("Your triangle IS equilateral");
    } else {
        printf("Your triangle IS NOT equilateral");
    }
}
