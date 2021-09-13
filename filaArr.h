//Autor: Kalil Saldanha Kaliffe
#define MAXTAM 1000

typedef struct {
    int Chave;
}TipoItem;

typedef struct {
    TipoItem Item[MAXTAM];
    int Frente, Tras;
}TipoFila;

TipoFila* InicializaFila();
void FFVazia (TipoFila *Fila);
int Vazia (TipoFila *Fila);
int Enfileira (TipoItem x, TipoFila *Fila);
TipoItem Desenfileira (TipoFila *Fila);
void showQueue (TipoFila *Fila);
bool isFull (TipoFila *Fila);
void furarFila(TipoFila *Fila, int furador);//furarFila recebe a fila e o valor que fura a fila, as outras informações necessarias para furar a fila já pertencem a fila.