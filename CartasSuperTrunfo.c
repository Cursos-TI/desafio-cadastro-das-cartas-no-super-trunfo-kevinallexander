#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char estado[3], estado2[3], codigoDaCarta[4], codigoDaCarta2[4], nomeDaCidade[100], nomeDaCidade2[100];
    int populacao, pontosTuristicos, populacao2, pontosTuristicos2;
    float area, area2, pib, pib2;

    // Registro da Carta #1

    printf("Registrando a primeira carta. Vamos Começar!\n");
    
    printf ("Digite a sigla do estado:");
    scanf ("%s", estado);
    
    printf ("Digite o código da carta (apenas 3 dígitos):");
    scanf ("%s", codigoDaCarta);

    printf ("Digite o nome da sua cidade:");
    scanf("%s", nomeDaCidade);

    printf ("Informe o número de habitantes: ");
    scanf ("%d", &populacao);

    printf ("Informe a quantidade de pontos turísticos: ");
    scanf ("%d", &pontosTuristicos);

    printf ("Informe o tamanho da área: ");
    scanf ("%f", &area);

    printf ("Informe o PIB:");
    scanf ("%f", &pib);

    // Registro da Carta #2

    printf("Primeira carta registrada com sucesso! Registrando a segunda carta. Vamos lá!\n");

    printf ("Digite a sigla do estado:");
    scanf ("%s", estado2);
    
    printf ("Digite o código da carta (apenas 3 dígitos):");
    scanf ("%s", codigoDaCarta2);

    printf ("Digite o nome da sua cidade:");
    scanf("%s", nomeDaCidade2);

    printf ("Informe o número de habitantes: ");
    scanf ("%d", &populacao2);

    printf ("Informe a quantidade de pontos turísticos: ");
    scanf ("%d", &pontosTuristicos2);

    printf ("Informe o tamanho da área:");
    scanf ("%f", &area2);

    printf ("Informe o PIB:");
    scanf ("%f", &pib2);

    printf ("Tudo pronto! As duas cartas foram registradas com sucesso!\n");

    printf ("Carta Nº 1 - %s, %s, %s\n", nomeDaCidade, estado, codigoDaCarta);
    printf ("Dados -> Habitantes: %d | Area: %f | PIB: %f | Pontos Turísticos: %d\n", populacao, area, pib, pontosTuristicos);

    printf ("Carta Nº 2 - %s, %s, %s\n", nomeDaCidade2, estado2, codigoDaCarta2);
    printf ("Dados -> Habitantes: %d | Area: %f | PIB: %f | Pontos Turísticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);

    return 0;
}
