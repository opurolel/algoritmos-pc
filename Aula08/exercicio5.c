#define LIN 3
#define COL 4

int main () {

    float notas[LIN][COL];
    
    int i=0, j=0, estudante;
    float media, soma, maior=0;

    for (i = 0 ; i < LIN ; i++) {
        for (j = 0 ; j < COL ; j++) {
            printf("Digite a %dº nota do %dº estudante: ", (j+1), (i+1));
            scanf("%f", &notas[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0 ; i < LIN ; i++) {
        soma = 0;
        for (j = 0 ; j < COL ; j++) {
           soma += notas[i][j];
        }
        media = soma/COL;
        printf("\nMédia do estudante %d: %.2f", (i+1), media);
        if (maior < media) {
            maior = media;
            estudante = (i+1);
        }
    }
    printf("\nMaior média: estutante %d - %.2f", estudante, maior);
    printf("\n");
}