#include <stdio.h>
int main(void) {
    int num;
    printf("Give me a number and I'll return you the absolute value\n");
    scanf("%d", &num);
    if (num<0) {
        num=-num;
        printf("The absolute value is %d\n", num);
    } else {
        printf("The absolute value is %d\n", num);
    }
    return 0;
}
