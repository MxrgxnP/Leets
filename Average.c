#include<stdio.h>
#define TOT 10

int main(void) {
    int num=0, count=1, sum=0;
    printf("Provide me a series of 10 numbers and I'll print you the average\n");

    while (count<=TOT) {
        scanf("%d", &num);
        sum+=num;
        count++;
    }
    int average=sum/10;
    printf("The average is %d", average);

}
