#include <stdio.h>

//Criar duas carta do jogo Super Trunfo
int main (){
    int população, turistico;
    float area, PIB;
    char estado[9], codigo[5], cidade[15];
    int população2, turistico2;
    float area2, PIB2;
    char estado2[9], codigo2[5], cidade2[15];

//Carta 1
    
    printf("Carta 1: \nDigite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o código do Estado: \n");
    scanf("%s", &codigo);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &população);

    printf("Área em km²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Quantos pontos turísticos? \n");
    scanf("%d", &turistico);

//Carta 2

    printf("Carta 2: \nDigite o estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código do Estado: \n");
    scanf("%s", &codigo2);

    printf("Digite a Cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &população2);

    printf("Área em km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos? \n");
    scanf("%d", &turistico2);

//Exibição da Carta 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("População: %d \n", população);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Números de pontos turísticos: %d \n",turistico);

//Exibição da Carta2

    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", população2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Números de pontos turísticos: %d \n",turistico2);

    return 0;

}
