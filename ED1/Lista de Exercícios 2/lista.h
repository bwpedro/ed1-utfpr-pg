struct TNo{
  int chave;
  struct TNo *prox;
};
typedef struct TNo TNo;

TNo *insereInicioListaSimples(TNo **pPrim, int chave);
TNo *buscaChave(TNo **pPrim, int chave);
void removePrimeiro(TNo **pPrim);