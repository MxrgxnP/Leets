#include <stdio.h>
int main(void) {
    int num,t=1,sum=0;
    printf("Tell me how much number you would like to sum\n");
    scanf("%d", &num);
    printf("Now please, give me the numbers\n");
    while (t<=num) {
        int num_curr;
        scanf("%d",&num_curr);
        sum+=num_curr;
        t++;
    }
    printf("The sum is %d\n", sum);
    return 0;
}
