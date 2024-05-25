#include<stdio.h>
int main(void) {
    char ins;
    int voc=0;
    printf("Isert me a sequence of characters and I'll detect all the vocals\n");
    scanf("%c ", &ins);

    while (ins!='#') {

        if (ins=='a' || ins=='e' || ins=='i' || ins=='o' || ins=='u') {
            voc++;
        }
        scanf("%c", &ins);
    }
    printf("You gave me %d vocals", voc);
}
