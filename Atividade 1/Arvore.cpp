#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct arv {
	struct arv *dir;
	int item;
    struct arv *esq;
} *Arv;

Arv arvore(Arv esq, int info, Arv dir){
	Arv nova_arvore = (Arv)malloc(sizeof(Arv));
	nova_arvore->esq = esq;
	nova_arvore->item = info;
	nova_arvore->dir = dir;
	return nova_arvore;	
}

Arv criarVazia() {
	return NULL;
}


int isEmpty(Arv a) {
	if(a == NULL) return 1;
	return 0;
}

void percorrer(Arv a) {
	if(!isEmpty(a)) {
		cout << "<" << a->item;
		printf("<%i", a->item);
		percorrer(a->dir);
		percorrer(a->esq);
	} else {
		printf(">");
	}
}

int main() {
    Arv three = arvore(arvore(criarVazia(), 2, criarVazia()), 1, arvore(criarVazia(), 3, criarVazia()));

    return 0;
}