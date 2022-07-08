void liberamapa();
void lemapa();
void alocamapa();
void imprimimapa();
int acabou();
void move(char direcao);

struct mapa
{
    char **matriz;
    int linhas;
    int colunas;
};