#define HEROI '@'
#define VAZIO '.'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'

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
int ehvalida(MAPA *m, int x, int y);
int ehvazia(MAPA *m, int x, int y);
void andanomapa(MAPA *m, int xorigem, int yorigem, int xdestino, int ydestino);