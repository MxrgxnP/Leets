int main(void) {
    int num;
    int max;
    int flag = 0;

    scanf("%d", &num);
    max = num;

    if (num != 0) {
        do {
            if (num > max) {
                max = num;
                flag = 1;
            } else {
                flag = 0;
            }
            scanf("%d", &num);
        } while (num != 0);

        if (flag == 1) {
            printf("Your sequence is increasing");
        } else {
            printf("Your sequence is NOT increasing");
        }
    }

    return 0;
}
