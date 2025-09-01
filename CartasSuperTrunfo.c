#include <stdio.h>

int main(){
    //dados da cidade1
    char estado1[50] = "São Paulo";
    char código_da_carta1[50] = "A01";
    char nome_da_cidade1[50] = "São Paulo";
    unsigned int população1 = 12300000;
    float área1 = 1214.9;
    float PIB1 = 699.28;
    int numero_de_pontos_turisticos1 = 1000;
    float densidade_populacional1 = população1 / área1;
    float PIB_per_capita1 = população1 / PIB1;

    //dados da cidade2
    char estado2[50] = "Rio de Janeiro";
    char código_da_carta2[50] = "A02";
    char nome_da_cidade2[50] = "Rio de Janeiro";
    unsigned int população2 = 6000000;
    float área2 = 1300.3;
    float PIB2 = 365.56;
    int numero_de_pontos_turisticos2 = 1000;
    float densidade_populacional2 = população2 / área2;
    float PIB_per_capita2 = população2 / PIB2;

    // Exibindo os dados da cidade1
    printf("Dados da Cidade 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", código_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", população1);
    printf("Área: %.2f\n", área1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", PIB_per_capita1);
    printf("Super trunfo: %.1lf\n", (população1 + área1 + PIB1 + numero_de_pontos_turisticos1));

    // Exibindo os dados da cidade2
    printf("\nDados da Cidade 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", código_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", população2);
    printf("Área: %.2f\n", área2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", PIB_per_capita2);
    printf("Super trunfo: %.1lf\n", (população2 + área2 + PIB2 + numero_de_pontos_turisticos2));
    printf("\n");

    if(população1 > população2){
        printf("São Paulo venceu!\n");
    }         else{
        printf("Rio de Janeiro venceu!\n");
    }

    if(área1 > área2){
        printf("São Paulo venceu!\n");
    } else {
        printf("Rio de Janeiro venceu!\n");
    }

    if(PIB1 > PIB2){
        printf("São Paulo venceu!\n");
    } else {
        printf("Rio de Janeiro venceu!\n");
    }

    if(densidade_populacional1 < densidade_populacional2){
        printf("São Paulo venceu!\n");
    } else {
        printf("Rio de Janeiro venceu!\n");
    }

    if(PIB_per_capita1 > PIB_per_capita2){
        printf("São Paulo venceu!\n");
    } else {
        printf("Rio de Janeiro venceu!\n");
    }

