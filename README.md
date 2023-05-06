# Acronimo
## Esercizio acronimo
Il codice chiede all'utente di inserire una frase e la memorizza nella stringa frase. Quindi, crea una nuova stringa acronimo e scorre la frase carattere per carattere. Per ogni carattere alfabetico trovato, controlla se è il primo carattere della frase o se il carattere precedente non è alfabetico, e se sì, aggiunge il carattere all'acronimo in maiuscolo. In questo modo, l'acronimo sarà composto dalle prime lettere di ogni parola della frase.

Infine, il programma stampa l'acronimo trovato.
```C
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
```
