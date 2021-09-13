//Autor: Kalil Saldanha Kaliffe
#include <iostream>
#include "filaArr.h"
#include <utility>

using namespace std;
TipoFila* InicializaFila(){
    TipoFila* fila = (TipoFila*)malloc(sizeof(TipoFila));
    return fila;
}

void FFVazia (TipoFila *Fila){
    Fila->Frente = 0;
    Fila->Tras = Fila -> Frente;
}

int Vazia (TipoFila *Fila){
    return (Fila->Frente == Fila->Tras);
}

int Enfileira (TipoItem x, TipoFila *Fila){ //TipoItem* x
    if ((Fila->Tras + 1) % MAXTAM == Fila->Frente){
        printf("Erro: fila está cheia\n"); return 0;
    }
    else {
        Fila->Item[Fila->Tras] = x;
        Fila->Tras = (Fila->Tras + 1) % MAXTAM;
    }
    return 1;
}


TipoItem Desenfileira (TipoFila *Fila) {
    if (Vazia(Fila)){
        printf("Erro: fila está vazia\n");
        exit(1);
    }
    else{
        int i = Fila->Frente;
        Fila->Frente = (Fila->Frente + 1) % MAXTAM;
        cout << "Pop->" << i <<": "<<Fila->Item[i].Chave << endl;
        return Fila->Item[i];

    } //??????
}

void showQueue (TipoFila *Fila){
    for (int i = Fila -> Frente; i < Fila -> Tras; i++){
        cout <<i<<":"<< Fila -> Item[i].Chave<<endl;
    }
}

bool isFull (TipoFila *Fila){
    if (((Fila->Tras + 1) % MAXTAM == Fila->Frente)){
        cout << "True"<<endl;
        return 1;
    }
    else
        return 0;
}
void furarFila(TipoFila *Fila, int furador){
    int full = isFull(Fila);
    if (full == 0){
        cout << "Furando..\n";
        TipoItem item;
        item.Chave = furador; //preciso?
        Fila->Item[Fila->Frente -1] = item; //Botar o item na frente atual # Talvez *Furador e *item seja necessario
        Fila->Frente = (Fila->Frente -1 ) % MAXTAM; //Mover a frente


    }
    else{
        cout<<"A fila está cheia!\n";
        exit(1);
    }

}