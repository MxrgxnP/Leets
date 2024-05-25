#include <stdio.h>

int main() {
    FILE *file;
    int num;
    int j, i;

    scanf("%d", &num);

    file = fopen("Tabellina.txt", "w");
    if (file) {
        for (j = 1; j <= num; j++) {
            for (i = 1; i <= 10; i++) {
                fprintf(file,"%3d", i * j);
            }
            fprintf(file,"\n");
        }
    } else {
        printf("Cannot create the file");
    }
}
