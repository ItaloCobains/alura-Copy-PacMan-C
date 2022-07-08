#define HEROI '@'
#define FANTASMA 'F'
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
int encontramapa(MAPA *m, POSICAO *p, char c);
int ehvalida(MAPA *m, int x, int y);
int ehvazia(MAPA *m, int x, int y);
void andanomapa(MAPA *m, int xorigem, int yorigem, int xdestino, int ydestino);
void copiamapa(MAPA *destino, MAPA *origem);
int praondeofantasmavai(int xatual, int yatual, int *xdestino, int *ydestino);
int podeandar(MAPA *m, char personagem, int x, int y);
int ehparede(MAPA *m, int x, int y);
int ehpersonagem(MAPA *m, char personagem, int x, int y);