/*
Ask to the user to give a bunch of words, write them down to a file, then ask
from the user a single character and count how many times it appears. Using a
specific function control wheter they have numbers inside or not. Print on the
file the character he requested and how many times it appears.
*/

#include <stdio.h>
#include <string.h>

#define DIM 25

int controller(char *);

int main() {
    FILE *file;
    char String[DIM + 1]; // Scanned from the user
    int Joker;            // Flag of the func
    char Character;       // Scanned from the user
    int Count = 0;

    file = fopen("Test.txt", "w+");

    if (file == NULL) {
        printf("Error opening file!");
    }

    printf("Please, give me some words.\nWrite a number for stopping the process!\n");

    do {
        scanf("%s", String);
        Joker = controller(String);

        if (Joker == 0) {
            fprintf(file, "%s\t", String);
        }
    } while (Joker == 0);

    printf("Now, give me a single character and I will check how many times it appears in the file.");

    scanf("%c", &Character);

    while (Character >= 0 && Character <= 9) {
        printf("Please, do not inser numbers.");
        scanf("%c", &Character);
    }

    while (!feof(file)) {
        if (Character) {
            Count ++;
        }
    }

    fprintf(file, "Your words includes the character %c %d times.", Character, Count);

    fclose(file);
}

int controller(char *string) {
    int j;

    for (j = 0; j != '\0'; j++) {

        if (string[j] >= '0' && string[j] <= '9') {
            return 1;
        } else {
            return 0;
        }
    }
}