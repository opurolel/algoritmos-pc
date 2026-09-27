#include <stdio.h>

int main(void)
{
    int opc=1;
    double subtotal;

        printf("\n[1] X-Burguer (R$ 18,90)");
        printf("\n[2] Batata frita (R$ 9,50)");
        printf("\n[3] Suco (R$ 10,00)");
        printf("\n[4] Pudim (R$ 12,00)");
        printf("\n[5] Sair");

    do
    {
        printf("\nDigite uma opção ae: ");
        scanf("%d", &opc);
        
        if (opc > 0 && opc < 6) {
            if (opc == 1) {
                subtotal += 18.90;
            } else if (opc == 2){
                subtotal += 9.50;
            } else if (opc == 3){
                subtotal += 10;
            } else if (opc == 4){
                subtotal += 12;
            } 
            printf("\n======================");
            printf("\nSubtotal: R$ %.2f\n", subtotal);
            printf("======================\n");
        } else {
            printf("\nInsira uma opção válida!!\n");
        }

    } while (opc != 5);
    

    return 0;
}
