#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    char cidade1[20], cidade2[20]; // nomes da cidade
    int populacao1, populacao2, turistico1, turistico2; // população e numero de pontos turísticos
    float area1, area2, pib1, pib2, dens1, dens2, pibcap1, pibcap2; // aréa em km² e PIB  - dens = densidadede populacional
                                                                   // pibcap = pib per capital
    int resultpop, resultarea, resultpib, resultturist, resultidens, resultpibcap, resultsuper; 


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
   



    // primeira carta
    dens1 = (float)populacao1 / area1; // fazendo calculo de densidade populacional
    pibcap1 = (float)pib1 / populacao1; // fazendo calculo pib per capital
    

    // segunda carta
    dens2 = (float)populacao2 / area2; // fazendo calculo de densidade populacional
    pibcap2 = (float)pib2 / populacao2; // fazendo calculo pib per capital


    // super poder 
    float super1 = (float) populacao1 + area1 + pib1 + turistico1 + pibcap1 - dens1;
    float super2 = (float) populacao2 + area2 + pib2 + turistico2 + pibcap2 - dens2;

    





    //Saida de mensagem escritas 
    printf("\n*** 1ª Carta ***\n");
    printf("Estado: %c\nCódigo: %c%s\nCidade: %s\n", estado1, estado1, coda1, cidade1);
    printf("População: %d\nÁrea: %.2f Km²\n", populacao1, area1); 
    printf("PIB: %.2f Reais\nPontos turísticos: %d\n", pib1, turistico1);
    printf("Densidade Populacional: %.2f hab/km²\nPIB Per Capita: %.2f reais\n", dens1, pibcap1); 
    printf("super poder: %.2f\n",super1);
    

    printf("\n*** 2ª Carta ***\n");
    printf("Estado: %c\nCódigo: %c%s\nCidade: %s\n", estado2, estado2, coda2, cidade2);
    printf("População: %d\nÁrea: %.2f Km²\n", populacao2, area2); 
    printf("PIB: %.2f Reais\nPontos turísticos: %d\n", pib2, turistico2);
    printf("Densidade Populacional: %.2f hab/km²\nPIB Per Capita: %.2f reais\n", dens2, pibcap2); 
    printf("Super Poder: %.2f\n",super2);





    // comparei as cartas
    resultpop = populacao1 > populacao2;
    resultarea = area1 > area2;
    resultpib = pib1 > pib2;
    resultturist = turistico1 > turistico2;
    resultidens = dens1 < dens2;
    resultpibcap = pibcap1 > pibcap2;
    resultsuper = super1 > super2;

    // escrevi as cartas que venceram e se o resultado deu 1 ou 0 - 1 para positivo 0 para degativo
    //                                                              1 caso a primeira carta ganhe 
    //                                                              0 para caso a segunda carta ganhe
    printf("\n*** Comparação de Cartas ***\n\n");
    printf("População: Carta %d venceu (%d)\n", (resultpop == 0)+1, resultpop); 
    printf("Área: Carta %d venceu (%d)\n", (resultarea == 0)+1, resultarea);     
    printf("PIB: Carta %d venceu (%d)\n", (resultpib == 0)+1, resultpib);
    printf("Pontos turísticos: Carta %d venceu (%d)\n", (resultturist == 0)+1, resultturist);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (resultidens == 0)+1, resultidens); 
    printf("PIB Per Capita: Carta %d venceu (%d)\n", (resultpibcap == 0)+1, resultpibcap); 
    printf("super poder: Carta %d venceu (%d)\n", (resultsuper == 0)+1, resultsuper);




    
    return 0;

}

