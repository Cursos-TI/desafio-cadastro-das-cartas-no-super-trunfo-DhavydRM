#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
// Quem é Larissa?

int main() {
    char estado1, estado2; // Para facilitar, criei as variáveis juntas colocando apenas o número para diferenciar
    char codigoCarta1[10], codigoCarta2[10];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float areaCidade1, areaCidade2;
    float pibCidade1, pibCidade2;
    int pontosTuristicosC1, pontosTuristicosC2; 
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    long double superPoder1, superPoder2;
    int winPopulacao, winArea, winPib, winPontosT, winDensidade, winPibPerCapita, winSuperCarta;

    // Iniciando a solicitação dos dados de cada carta

    printf("Digite os dados da Primeira Carta: \n"); // Solicita ao usuário os dados da Carta 01
    printf("Estado ['A' à 'H']: ");
    scanf(" %c", &estado1);
    printf("Código [Ex: Estado + Um número de 01 à 04, A01]: ");
    scanf("%s", codigoCarta1);
    getchar(); // Limpa o buffer para evitar problemas com o fgets
    printf("Nome da Cidade: ");
    fgets(nomeCidade1, 50, stdin); // Usei o fgets para poder capturar o "espaço" que o usuário pode digitar ao informar a cidade
    printf("População da cidade: ");
    scanf("%lu", &populacao1);
    printf("Área da cidade em Km²: ");
    scanf("%f", &areaCidade1);
    printf("Digite o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pibCidade1);
    printf("Número de pontos turísticos da cidade: ");
    scanf("%i", &pontosTuristicosC1);

    printf("\n"); // Gera um linha vazia para separar as duas entradas de dados

    printf("Agora digite os dados da Segunda Carta: \n"); // Solicita ao usuário os dados da Carta 02
    printf("Estado ['A' à 'H']: ");
    scanf(" %c", &estado2);
    printf("Código [Ex: Estado + Um número de 01 à 04, A01]: ");
    scanf("%s", codigoCarta2);
    getchar();
    printf("Nome da Cidade: "); // Não aceita cidades com acento: "São Paulo", no lugar, digite: "Sao Paulo"
    fgets(nomeCidade2, 50, stdin); 
    printf("População da cidade: ");
    scanf("%lu", &populacao2);
    printf("Área da cidade em Km²: ");
    scanf("%f", &areaCidade2);
    printf("Digite o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pibCidade2);
    printf("Número de pontos turísticos da cidade: ");
    scanf("%i", &pontosTuristicosC2);

    // Finalizada a solicitação

    // Iniciando cálculos com valores informado

    densidadePopulacional1 = (float) populacao1 / areaCidade1; // Fazendo casting pois os cálculos são entre inteiros e decimais
    densidadePopulacional2 = (float) populacao2 / areaCidade2;

    pibPerCapita1 = (float) pibCidade1 / populacao1;
    pibPerCapita2 = (float) pibCidade2 / populacao2;

    superPoder1 = (float)populacao1 + areaCidade1 + pibCidade1 + (float)pontosTuristicosC1 + pibPerCapita1 + (1.0 / densidadePopulacional1); 
    superPoder2 = (float)populacao2 + areaCidade2 + pibCidade2 + (float)pontosTuristicosC2 + pibPerCapita2 - (1.0 / densidadePopulacional2); 

    // Finalizando cálculos

    printf("\n<======Exibindo as cartas cadastradas=======>\n\n"); // Linha para fazer uma separação entre os Inputs e Outputs
    
    // Iniciando exibição de dados de cada carta

    printf("Carta 1: \n"); // Dados da carta 01
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f\n", pibCidade1);
    printf("Número de pontos turísticos: %i\n", pontosTuristicosC1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n"); // LInha em branco para melhorar a visualização no terminal

    printf("Carta 2: \n"); // Dados da carta 02
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f\n", pibCidade2);
    printf("Número de pontos turísticos: %i\n", pontosTuristicosC2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    printf("\n<======SUPER TRUNFO!!!=======>\n\n");

    // Finalizada a exibição do dados das cartas

    // Comparações SUPER TRUNFO

    winPopulacao = populacao1 > populacao2;
    winArea = areaCidade1 > areaCidade2;
    winPib = pibCidade1 > pibCidade2;
    winPontosT = pontosTuristicosC1 > pontosTuristicosC2;
    winDensidade = densidadePopulacional1 < densidadePopulacional2;
    winPibPerCapita = pibPerCapita1 > pibPerCapita2;
    winSuperCarta = superPoder1 > superPoder2;

    // Fim comparações

    // Iniciando o SUPER TRUNFO!!!

    printf("Comparação das Cartas:\n");
    printf("População: Carta %i venceu (%d)\n", 2 - winPopulacao, winPopulacao); 
    printf("Área: Carta %i venceu (%i)\n", 2 - winArea, winArea);
    printf("PIB: Carta %i venceu (%i)\n", 2 - winPib, winPib);
    printf("Pontos Turísticos: Carta %i venceu (%i)\n", 2 - winPontosT, winPontosT);
    printf("Densidade Populacional: Carta %i venceu (%i)\n", 2 - winDensidade, winDensidade);
    printf("PIB per Capita: Carta %i venceu (%i)\n", 2 - winPibPerCapita, winPibPerCapita);
    printf("Super Poder: Carta %i venceu (%i)\n", 2 - winSuperCarta, winSuperCarta);

    /*
    Explicação: Apliquei uma lógica para verificar se foi a carta 1 ou 2 que venceu. Ao fazer as comparações, me preocupei que
    ao resultar em verdadeiro(1) a carta 1 vencesse e caso falso(0) a carta 2 vencesse. Fiz então uma lógica onde para mostrar
    a carta que venceu, subtraio o valor da comparação(1 ou 0) por 2, assim, sempre que a comparação desse 1 seria exibido 2-1,
    o que quer dizer que a carta 1 venceu, já quando a comparação desse 0 seria exibido 2-0, o que mostraria que a carta 2 venceu.
    */
    
    return 0;
}
