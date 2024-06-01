/*
Completare il programma definendo:

il sottoprogramma parola_valida che prende in input una stringa, un intero n ed
un intero k e restituisce 1 se la stringa ricevuta in ingresso è lunga almeno n
caratteri e contiene almeno k cifre (caratteri numerici), 0 altrimenti. il
sottoprogramma conta_valide che riceve in ingresso un intero n ed un intero k,
apre il file "origine.txt" che contiene un insieme di parole, e restituisce il
numero delle parole valide (ovvero che contengono almeno n caratteri e almeno k
cifre). Le parole presenti nel file di origine sono di al più 25 caratteri, una
per riga. Nel caso in cui ci siano problemi di accesso al file, il
sottoprogramma restituisce -1.

Per esempio, se il sottoprogramma riceve in ingresso 8 e 2, ed il file
origine.txt contiene le parole: ammirato programmazione1 programmazione23
val1d023 il sottoprogramma stampa 2 (sono valide le parole programmazione23 e
val1d023).
*/

#include <stdio.h>
#include <string.h>

#define DIM 25

int parola_valida (char *, int, int);
int conta_valide (int, int);

int main () {
  int Num;
  int NumCaratteri, NumCifre;

  scanf ("%d", &NumCaratteri);
  scanf ("%d", &NumCifre);

  Num = conta_valide (NumCaratteri, NumCifre);

  printf ("%d\n", Num);
}

int conta_valide (int n, int k) {
    int Res, jolly, Count;
    FILE *document;

    document = fopen("origine.txt", "r");

    if (document == NULL) {
      printf("-1");
    } else {
      while (feof(document)) {
        fscanf (document, "%d", &jolly);
        Res = parola_valida (jolly, n, k);
        if (Res == 1) {
            Count ++;
        }
      }
    }

  return Count;
}

int parola_valida (char *s1, int n, int k) {
  int Countn = 0;
  int Countk = 0;

  for (Countn = 0; Countn != '\0'; Countn ++) {
    if (Countn >= '0' && Countn <= '9') {
      Countk ++;
    }
  }

  if (Countn >= n && Countk >= k) {
    return 1;
  } else {
    return 0;
  }
}