/*
Si scriva un sottoprogramma massimoLista che riceve in ingresso un puntatore ad una lista e restituisce il massimo tra i valori strettamente positivi contenuti nella lista, 0 se la lista non contiene alcun valore positivo. Ad esempio, per una lista contenente la sequenza di interi 4 6 2 3 9 verra' restituito il valore 9.
*/


#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int num;
    struct node *next;
} elem;

elem *inseriscicoda(elem*, int);
int massimoLista(int *);

int main() {
    int Num;
    elem *Lista = NULL;

    scanf("%d", &Num);

    while (Num < 0) {
        Lista = inseriscicoda(Lista, Num);
        scanf("%d", &Num);
    }


}

elem *inseriscicoda(elem *lista, int num) {
    elem *prec;
    elem *tmp = NULL;

    tmp = (elem*)malloc(sizeof(elem));

    if (tmp != NULL) {
        tmp -> next = NULL;
        tmp -> num = num;


    if (lista == NULL) {
        lista = tmp;
    } else {
        for(prec = lista; prec -> next == NULL; prec = prec -> next) {
            prec -> next = tmp;
        }
        printf("Memoria esaurita!\n");
    return lista;
    }

}































/*
#include <stdio.h>
#include <stdlib.h>


typedef struct elem_{
  int num;
  struct elem_ *next;
} elem;


elem* inserisciInCoda(elem*, int);
elem* distruggiLista(elem*);
int massimoLista(elem*);

int main(){
  int val;
  int r;
  elem* listav=NULL;

  scanf("%d", &val);
	while(val!=-1)
  {
		listav=inserisciInCoda(listav, val);
		scanf("%d", &val);
  }
	r=massimoLista(listav);
	printf("%d\n",r);

  listav=distruggiLista(listav);


  return 0;
}



elem* distruggiLista(elem* lista){
  elem* tmp;
  while(lista!= NULL){
    tmp = lista;
    lista = lista->next;
    free(tmp);
  }
  return NULL;
}
*/
