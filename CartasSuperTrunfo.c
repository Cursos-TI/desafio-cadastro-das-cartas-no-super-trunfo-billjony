#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    char cidade1[20], cidade2[20]; // nomes da cidade
    int populacao1, populacao2, turistico1, turistico2; // população e numero de pontos turísticos
    float area1, area2, pib1, pib2; // aréa em km² e PIB

    char estado[20] = "São Paulo";
    char coda1[5] = "A01"; // codigo da primeira carta
    char coda2[5] = "A02"; // codigo da segunda carta

    // Cadastro da Primeira carta
    printf("Cadastre a 1º carta\n");
    printf("Escreva o nome de uma cidade do estado de %s:\n", estado);
    scanf("%s", cidade1);

    printf("Digite a população atual de %s:\n", cidade1);
    scanf(" %d", &populacao1);
    
    printf("Digite a área em km² de %s:\n", cidade1);
    scanf("%f", &area1);

    printf("Digite o PIB atual de %s:\n", cidade1);
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos tem em %s:\n", cidade1);
    scanf(" %d", &turistico1);

    //Segunda Carta para cadastrar
    printf("\n\nCadastro da 2ª carta\n");
    printf("Escreva o nome de uma cidade do estado de %s:\n", estado);
    scanf("%s", cidade2);

    printf("Digite a população atual de %s:\n", cidade2);
    scanf(" %d", &populacao2);
    
    printf("Digite a área em km² de %s:\n", cidade2);
    scanf("%f", &area2);

    printf("Digite o PIB atual de %s:\n", cidade2);
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem em %s:\n", cidade2);
    scanf(" %d", &turistico2);
   

    //Saida de mensagem escritas 
    printf("\n1ª Carta\n");
    printf("Estado: %s - Cidade: %s - Cod: %s\n", estado, cidade1, coda1);
    printf("População: %d - Área em km²: %.2f\n", populacao1, area1); 
    printf("PIB: %.2f - Pontos turísticos: %d\n\n\n", pib1, turistico1);

    printf("\n2ª Carta\n");
    printf("Estado: %s - Cidade: %s - Cod: %s\n", estado, cidade2, coda2);
    printf("População: %d - Área em km²: %.2f\n", populacao2, area2); 
    printf("PIB: %.2f - Pontos turísticos: %d\n", pib2, turistico2);
    



    
    return 0;

}

