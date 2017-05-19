typedef struct TPonto{
     int pontoX;
     int pontoY;
}ponto;

typedef struct TNo{
    int pontoX;
    int pontoY;
    struct TNo *prox;
}TNo;

void insereInicio(TNo **pPrim, int pontoX, int pontoY);
void item1();
void item2(TNo **pPrim, int tamPontos);
void item3(TNo **pPrim);
void item4(TNo **pPrim, int indiceX, int indiceY);
void item5Perimetro(TNo **pPrim, int tamPontos);
void printaTudo(TNo **pPrim);
