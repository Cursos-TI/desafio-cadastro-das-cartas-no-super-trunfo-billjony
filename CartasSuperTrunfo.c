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

    char estado1 = 'A';
    char estado2 = 'B';
    char coda1[5] = "01"; // codigo da primeira carta
    char coda2[5] = "02"; // codigo da segunda carta

    // Cadastro da Primeira carta
    printf("Cadastre a 1º carta\n");
    printf("Escreva o nome de uma cidade do estado de %c:\n", estado1);
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
    printf("Escreva o nome de uma cidade do estado de %c:\n", estado2);
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
    printf("Estado: %c\nCódigo: %c%s\nCidade: %s\n", estado1, estado1, coda1, cidade1);
    printf("População: %d\nÁrea: %.2f Km²\n", populacao1, area1); 
    printf("PIB: %.2f Bilhões de Reais\nPontos turísticos: %d\n\n\n", pib1, turistico1);

    printf("\n2ª Carta\n");
    printf("Estado: %c\nCódigo: %c%s\nCidade: %s\n", estado2, estado2, coda2, cidade2);
    printf("População: %d\nÁrea: %.2f Km²\n", populacao2, area2); 
    printf("PIB: %.2f Bilhões de Reais\nPontos turísticos: %d\n", pib2, turistico2);
    



    
    return 0;

}

