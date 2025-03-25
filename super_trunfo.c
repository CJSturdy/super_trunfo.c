#include <stdio.h>

int main(){

    char cidade[50], estado[50], codigo[50], estado1[50], cidade1[50], codigo1[50]; 
    int populacao, turistico, populacao1, turistico1;
    float area, pib, area1, pib1;

    printf(" Agora quero que você me fale os dados da primeira carta\n ");
    
    printf("Por favor insira o estado da carta:\n");
    scanf(" %[^\n]", estado);

    printf("Por favor insira o código da carta:\n");
    scanf(" %[^\n]", codigo);

    printf("Por favor insira o nome da cidade:\n");
    scanf(" %[^\n]", cidade);

    printf("Por favor insira a quantidade da população:\n");
    scanf(" %d", &populacao);

    printf("Por favor insira a área da carta:\n");
    scanf(" %f", &area);

    printf("Por favor insira o PIB:\n");
    scanf(" %f", &pib);

    printf("Por ultimo insira a quantidade de pontos turisticos:\n");
    scanf(" %i", &turistico);





    printf(" Agora quero que você me fale os dados da segunda carta\n ");

    printf("Por favor insira o estado da carta:\n");
    scanf(" %[^\n]", estado1);

    printf("Por favor insira o código da carta:\n");
    scanf(" %[^\n]", codigo1);

    printf("Por favor insira o nome da cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("Por favor insira a quantidade da população:\n");
    scanf(" %d", &populacao1);

    printf("Por favor insira a área da carta:\n");
    scanf(" %f", &area1);

    printf("Por favor insira o PIB:\n");
    scanf(" %f", &pib1);

    printf("Por ultimo insira a quantidade de pontos turisticos:\n");
    scanf(" %i", &turistico1);




    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d pessoas\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f Bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", turistico);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d pessoas\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f Bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turistico1);






        return 0;


}
