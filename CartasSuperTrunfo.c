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
    int populacao1, populacao2;
    float areaCidade1, areaCidade2;
    float pibCidade1, pibCidade2;
    int pontosTuristicosC1, pontosTuristicosC2; 

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
    scanf("%i", &populacao1);
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
    scanf("%i", &populacao2);
    printf("Área da cidade em Km²: ");
    scanf("%f", &areaCidade2);
    printf("Digite o PIB(Produto Interno Bruto) da cidade: ");
    scanf("%f", &pibCidade2);
    printf("Número de pontos turísticos da cidade: ");
    scanf("%i", &pontosTuristicosC2);

    // Finalizada a solicitação

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

    printf("\n"); // LInha em branco para melhorar a visualização no terminal

    printf("Carta 2: \n"); // Dados da carta 02
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", areaCidade2);
    printf("PIB: %.2f\n", pibCidade2);
    printf("Número de pontos turísticos: %i\n", pontosTuristicosC2);

    // Finalizada a exibição do dados
    
    return 0;
}
