#include<stdio.h>
int main(void) {
    int n, mult=0, counter=1;
    printf("Provide me a number and I'll tell you how many multiples of 3 there are between 0 and your number\n");
    scanf("%d",&n);
    while (counter<=n) {
        if (counter%3==0) {
            mult++;
        }
        counter++;
    }
    printf("In your number there are %d multiple of 3\n", mult);
}
