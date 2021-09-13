//Autor: Kalil Saldanha Kaliffe
#include <iostream>
#include "filaArr.h"
using namespace std;

int main(){
    TipoFila* fila;
    fila = InicializaFila();
    TipoItem item;
    item.Chave = 10;
    Enfileira(item, fila);
    item.Chave = 11;
    Enfileira(item, fila);
    item.Chave = 12;
    Enfileira(item, fila);
    item.Chave = 13;
    Enfileira(item, fila);
    showQueue(fila);
    Desenfileira(fila);
    showQueue(fila);
    Desenfileira(fila);
    showQueue(fila);

    furarFila(fila, 15); //Furando a fila com o 15
    showQueue(fila);
    Desenfileira(fila);
    showQueue(fila);
}