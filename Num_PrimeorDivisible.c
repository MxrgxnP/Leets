#include<stdio.h>
int main(void) {
    int N, ade;
    printf("Provide me a number and I'll return you all the divisors or I'll tell you if it's a prime\n");
    scanf("%d", &N);
    if (N%2!=0 && N%3!=0) {
        printf("\nYour number is a prime\n");
    } else {
    for (ade=0; ade<=N; ade++) {
        if (N%ade==0) {
            printf("%d ", ade);
        }
      }
    }
}
