#include<stdio.h>

int main(void) {
    int num;
    int sum=0;
    int figures=0;

    printf("Give me a sequence of solo positive numbers number (-1 to stop):\n");
    scanf("%d", &num);

    while (num!=-1) { //set the flag
        if (num%2==0 && num>=0) { //check if even
            sum += num;
            figures++;
        } else {
            printf("Give me a positive number\n");
        }
        scanf("%d", &num);
    }

    int average = sum/figures;
    printf("The average is %d, for a total of %d figures", average, figures);
}
