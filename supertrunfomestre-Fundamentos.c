#include <stdio.h>

struct Carta {
    char Estado[50], CodigoCarta[50], NomeCidade[50];
    int PTuristico;
    float Area, PIB, DensidadeP, PIBpCapita, SuperPoder;
    unsigned long int Populacao;
    int RPopulacao, RArea, RPIB, RPTuristico, RDensidadeP, RPIBpCapita, RSuperPoder;
};

int main() {
    struct Carta carta1, carta2;

    //Cadastro da carta 1

    printf(" Cadastro da Carta 1 \n"); 

    printf("Digite a letra do Estado: \n");
    scanf("%s", carta1.Estado);

    printf("Digite o Código da Carta: \n");
    scanf("%s", carta1.CodigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", carta1.NomeCidade);

    printf("Digite o numero de habitantes: \n");
    scanf("%lu", &carta1.Populacao);

    printf("Digite a area em km²: \n");
    scanf("%f", &carta1.Area);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &carta1.PIB);    

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &carta1.PTuristico);

    carta1.DensidadeP = carta1.Populacao / carta1.Area;
    carta1.PIBpCapita = (carta1.PIB * 1000000000) / carta1.Populacao;

    //SuperPoder da Carta1
    carta1.SuperPoder = (float)carta1.Populacao + carta1.Area + carta1.PIB + (float)carta1.PTuristico + carta1.PIBpCapita - carta1.DensidadeP; 

    //Cadastro da carta 2

    printf(" Cadastro da Carta 2 \n"); 
       
    printf("Digite a letra do Estado: \n");
    scanf("%s", carta2.Estado);

    printf("Digite o Código da Carta: \n");
    scanf("%s", carta2.CodigoCarta);

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", carta2.NomeCidade);

    printf("Digite o numero de habitantes: \n");
    scanf("%lu", &carta2.Populacao);

    printf("Digite a area em km²: \n");
    scanf("%f", &carta2.Area);

    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &carta2.PIB);    

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &carta2.PTuristico);

    carta2.DensidadeP = carta2.Populacao / carta2.Area;
    carta2.PIBpCapita = (carta2.PIB * 1000000000) / carta2.Populacao;

    //SuperPoder da Carta2

    carta2.SuperPoder = (float)carta2.Populacao + carta2.Area + carta2.PIB + (float)carta2.PTuristico + carta2.PIBpCapita - carta2.DensidadeP;
    
    //Comparação

    carta1.RPopulacao = carta1.Populacao > carta2.Populacao;
    carta1.RArea = carta1.Area > carta2.Area;
    carta1.RPIB = carta1.PIB > carta2.PIB;
    carta1.RPTuristico = carta1.PTuristico > carta2.PTuristico;
    carta1.RDensidadeP = carta1.DensidadeP < carta2.DensidadeP;
    carta1.RPIBpCapita = carta1.PIBpCapita > carta2.PIBpCapita;
    carta1.RSuperPoder = carta1.SuperPoder > carta2.SuperPoder;

    //Retorno dos dados no terminal
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", carta1.Estado);
    printf("Código: %s\n", carta1.CodigoCarta);
    printf("Nome da Cidade: %s\n", carta1.NomeCidade);
    printf("População: %lu\n", carta1.Populacao);
    printf("Area: %.2f km²\n", carta1.Area);
    printf("PIB: %.2f bilhões de reais\n", carta1.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta1.PTuristico);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.DensidadeP);
    printf("PIB per Capita: %.2f reais\n", carta1.PIBpCapita);    
    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", carta2.Estado);
    printf("Código: %s\n", carta2.CodigoCarta);
    printf("Nome da Cidade: %s\n", carta2.NomeCidade);
    printf("População: %lu\n", carta2.Populacao);
    printf("Area: %.2f km²\n", carta2.Area);
    printf("PIB: %.2f bilhões de reais\n", carta2.PIB);
    printf("Número de Pontos Turísticos: %d\n", carta2.PTuristico);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.DensidadeP);
    printf("PIB per Capita: %.2f reais\n", carta2.PIBpCapita);    

    printf("\n Comparação de Cartas: \n");
    printf("População: Carta 1 venceu (%d)\n", carta1.RPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1.RArea);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.RPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.RPTuristico);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", carta1.RDensidadeP);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.RPIBpCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.RSuperPoder);
    
    
    return 0;

}