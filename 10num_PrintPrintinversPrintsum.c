#include<stdio.h>
int main(void) {
    int array[10];
    int num=0, sum=0, num_pos=0, num_neg=0, num_zeri=0;
    printf("Give me 10 numbers\n");
    for (num=0; num<10; num++) {
        scanf("%d", &array[num]);
    }
    printf("Here your numbers:\n");
    for (num=0; num<10; num++) {
        printf("%d ", array[num]);
    }
    printf("\nInversion:\n");
    for (num=9; num>=0; num--) {
        printf("%d ", array[num]);
    }
    printf("\nHere the sum of them:\n");
    for (num=0; num<10; num++) {
        sum+=array[num];
    }
    printf("%d", sum);
    for (num=0; num<10; num++) {
        if (array[num]<0) {
            num_neg++;
        } else if (array[num]>0) {
            num_pos++;
        } else if (array[num]==0) {
            num_zeri++;
        }
    }
    printf("\nYou got %d negatives, %d positives and %d nulls", num_neg, num_pos, num_zeri);
}
