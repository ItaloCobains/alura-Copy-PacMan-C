struct mapa
{
    char **matriz;
    int linhas;
    int colunas;
};

struct posicao
{
    int x;
    int y;
};

typedef struct mapa MAPA;

typedef struct posicao POSICAO;


void alocamapa(MAPA *m);
void lemapa(MAPA *m);
void liberamapa(MAPA *m);
void imprimimapa(MAPA *m);
void encontramapa(MAPA *m, POSICAO *p, char c);