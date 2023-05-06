#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[100];
    printf("Inserisci la frase: ");
    fgets(frase, 100, stdin);

    char acronimo[50];
    int j = 0;
    int i;
    for (i = 0; frase[i] != '\0'; i++) {
        if (isalpha(frase[i])) {
            if (i == 0 || !isalpha(frase[i-1])) {
                acronimo[j] = toupper(frase[i]);
                j++;
            }
        }
    }
    acronimo[j] = '\0';

    printf("L'acronimo della frase e': %s\n", acronimo);

    return 0;
}

