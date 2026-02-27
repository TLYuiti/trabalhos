#include <stdio.h>

    void moverTorre(int casas) {
      if (casas > 0) {
        printf("Direita\n");
       moverTorre(casas - 1);
     }
  }
    void moverBispo(int casas) {

        for (int i = 0; i < casas; i++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }

      void moverRainha(int casas) {
      if (casas > 0) {
        printf("Esquerda\n");
       moverRainha(casas - 1);
     }
  }
    void moverCavalo(int casas) {

        for (int i = 0; i < casas; i++) {
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
        }
    }

int main() {

    int peca;

    printf("Escolha qual peça vai se mover:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");

    scanf("%d", &peca);


    switch (peca){
        case 1:
          // Mover a Torre 5 casas para a direita
            moverTorre(5);
            break;  

        case 2:
          // Mover o Bispo 5 casas para a diagonal
            moverBispo(5);
            break;      
        case 3:
          // Mover a Rainha 5 casas para a esquerda
            moverRainha(5);
            break; 
        case 4:
          // Mover o Cavalo em L
            moverCavalo(5);
             break;               
        
        default:
             printf("Opção inválida\n");
             return 0;
    }    

}