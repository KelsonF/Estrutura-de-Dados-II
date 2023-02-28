#include "./Atividade 1/Arvore.cpp"

//Questao 13.2
int nodeCount(Arv a) {
    int counter = 0;

    if(!isEmpty(a)) {
        counter++;
		percorrer(a->dir);
		percorrer(a->esq);
	}

    return counter;
}

//Questao 13.3
int leafCounter(Arv a) {
    int counter = -1;

    if(!isEmpty(a)) {
        counter++;
		percorrer(a->dir);
		percorrer(a->esq);
	}

    return counter;
}

//Questao 13.4
int altura(Arv arvore) {
    if(arvore == NULL) return 0;
    int esq =  altura(arvore->esq);
    int dir = altura(arvore->dir);
    if(esq > dir) return 1 + esq;
    return  1 + dir;
}

//Questao 13.5
int treeSearch(int x, Arv a) {
    if (isEmpty(a)) return 0;
    if (x = a->item) return 1;
    if (x <= a->item) return treeSearch(x, a->esq);
    else return treeSearch(x , a->dir); 
}

int main() {
    Arv tree = arvore(arvore(criarVazia(), 2, criarVazia()), 1, arvore(criarVazia(), 3, criarVazia()));

    nodeCount(tree);
    leafCounter(tree);
    treeSearch(2,tree);

    return 0;
}