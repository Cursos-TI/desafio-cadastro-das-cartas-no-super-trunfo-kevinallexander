#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    char estado[3], estado2[3], codigoDaCarta[4], codigoDaCarta2[4], nomeDaCidade[100], nomeDaCidade2[100];
    int pontosTuristicos, pontosTuristicos2;
    unsigned long int populacao, populacao2;
    float area, area2, densidade, densidade2, pib, pib2, pibPerCapita, pibPerCapita2;

    // Carta 1

    printf("Registrando a primeira carta. Vamos Começar!\n");
    
    printf ("Digite a sigla do estado:");
    scanf ("%s", estado);
    
    printf ("Digite o código da carta (apenas 3 dígitos):");
    scanf ("%s", codigoDaCarta);

    printf ("Digite o nome da sua cidade:");
    scanf("%s", nomeDaCidade);

    printf ("Informe o número de habitantes: ");
    scanf ("%u", &populacao);

    printf ("Informe a quantidade de pontos turísticos: ");
    scanf ("%d", &pontosTuristicos);

    printf ("Informe o tamanho da área: ");
    scanf ("%f", &area);

    printf ("Informe o PIB:");
    scanf ("%f", &pib);

    densidade = (float) populacao / area;
    pibPerCapita = (pib * 1000000000.0f) / (float) populacao;

    float inversoDensidade = area / (float) populacao;
    float SuperPoder = (float)populacao + area + pib + (float)pontosTuristicos + pibPerCapita + inversoDensidade;

    // Carta 2

    printf("Primeira carta registrada com sucesso! Registrando a segunda carta. Vamos lá!\n");

    printf ("Digite a sigla do estado:");
    scanf ("%s", estado2);
    
    printf ("Digite o código da carta (apenas 3 dígitos):");
    scanf ("%s", codigoDaCarta2);

    printf ("Digite o nome da sua cidade:");
    scanf("%s", nomeDaCidade2);

    printf ("Informe o número de habitantes: ");
    scanf ("%u", &populacao2);

    printf ("Informe a quantidade de pontos turísticos: ");
    scanf ("%d", &pontosTuristicos2);

    printf ("Informe o tamanho da área:");
    scanf ("%f", &area2);

    printf ("Informe o PIB:");
    scanf ("%f", &pib2);

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float) populacao2;

    float inversoDensidade2 = area2 / (float) populacao2;
    float SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + inversoDensidade2;

    // Comparações

    int comparandoArea = area > area2;

    int comparandoPopulacao = populacao > populacao2;
    
    int comparandoPontosTuristicos = pontosTuristicos > pontosTuristicos2;

    int comparandoPib = pib > pib2;

    int comparandoPibPerCapita = pibPerCapita > pibPerCapita2;
    
    int comparandoDensidade = densidade < densidade2;

    int comparandoSuperPoder = SuperPoder > SuperPoder2;

    // Apresentação de dados

    printf (" *** > Tudo pronto! As duas cartas foram registradas com sucesso! < ***\n");

    printf ("Carta Nº 1 - %s, %s, %s\n", nomeDaCidade, estado, codigoDaCarta);
    printf ("Dados -> Habitantes: %d | Area: %f | PIB: %f | Pontos Turísticos: %d\n", populacao, area, pib, pontosTuristicos);
    printf ("Mais informações -> Densidade Populacional: %.2f | PIB Per Capta: %.2f\n", densidade, pibPerCapita);

    printf ("Carta Nº 2 - %s, %s, %s\n", nomeDaCidade2, estado2, codigoDaCarta2);
    printf ("Dados -> Habitantes: %d | Area: %f | PIB: %f | Pontos Turísticos: %d\n", populacao2, area2, pib2, pontosTuristicos2);
    printf ("Mais informações -> Densidade Populacional: %.2f | PIB Per Capta: %.2f\n", densidade2, pibPerCapita2);

    printf (" *** > CAMPO DE BATALHA < ***\n");

    printf ("Disputa entre Carta %s (%s) e %s (%s)\n", nomeDaCidade, estado, nomeDaCidade2, estado2);

    printf ("População - %s (%u) x %s (%u) ### Parabéns! %d\n", nomeDaCidade, populacao, nomeDaCidade2, populacao2, comparandoPopulacao);

    printf ("Área - %s (%.2f) x %s (%.2f) ### Parabéns! %d\n", nomeDaCidade, area, nomeDaCidade2, area2, comparandoArea);

    printf ("PIB - %s (%.2f) x %s (%.2f) ### Parabéns! %d\n", nomeDaCidade, pib, nomeDaCidade2, pib2, comparandoPib);

    printf ("Pontos Turísticos - %s (%d) x %s (%d) ### Parabéns! %d\n", nomeDaCidade, pontosTuristicos, nomeDaCidade2, pontosTuristicos2, comparandoPontosTuristicos);

    printf ("PIB PER CAPITA - %s (%.2f) x %s (%.2f) ### Parabéns! %d\n", nomeDaCidade, pibPerCapita, nomeDaCidade2, pibPerCapita2, comparandoPibPerCapita);

    printf ("Densidade - %s (%.2f) x %s (%.2f) ### Parabéns! %d\n", nomeDaCidade, densidade, nomeDaCidade2, densidade, comparandoDensidade);

    printf ("### SUPER PODER! ### - %s (%.2f) x %s (%.2f) ### Parabéns! %d\n", nomeDaCidade, SuperPoder, nomeDaCidade2, SuperPoder2, comparandoSuperPoder);

    // OBSERVAÇÃO >>>> PIB e PIB per capita são float por exigência da questão.
    // Isso causa pequenas diferenças de precisão nos valores calculados.

    return 0;
}
