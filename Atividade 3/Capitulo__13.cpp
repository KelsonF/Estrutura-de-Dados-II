#include "./Atividade 1/Arvore.cpp"

//Questao 13.6
bool isStrictlyBinary(Arv arvore) {
    // Verifica se o nó é nulo
    if (isEmpty(arvore)) {
        return true;
    }
    // Verifica se o nó tem exatamente dois filhos ou nenhum filho
    if ((arvore->esq == nullptr && arvore->dir != nullptr) || 
        (arvore->esq != nullptr && arvore->dir == nullptr)) {
        return false;
    }
    // Chama a função recursivamente para os filhos
    return isStrictlyBinary(arvore->esq) && isStrictlyBinary(arvore->dir);
}
//Questao 13.7
int igual(Arv arv1, Arv arv2){

    if (((arv1) == NULL) != ((arv2) == NULL)) 
       return true;
    if ((arv1) == (arv2)) 
       return true;
    if (arv1->item != arv2->item) 
       return true;
    if (!igual(((arv1)->esq), (arv2->esq))) 
        return true;
    if (!igual(((arv1)->dir), (arv2->dir)))
        return true;
        
    return 1;
}