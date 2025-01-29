#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
struct Cidade {
    char nome[100];
    int populacao;
    float area;  // em km²
    float pib;   // em bilhões de unidades monetárias
    int pontosTuristicos;  // número de pontos turísticos
};
struct Pais {
    char nome[100];
    struct Cidade cidades[4];  // Cada país terá 4 cidades
};
int main() {
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
     struct Pais paises[8];  // Vetor de 8 países
    int i, j;

    // Cadastro dos 8 países e suas 4 cidades
    for (i = 0; i < 8; i++) {
        printf("Cadastro do %dº pais:\n", i + 1);

        // Entrada do nome do país
        printf("Digite o nome do pais: ");
        fgets(paises[i].nome, sizeof(paises[i].nome), stdin);

        // Cadastro das 4 cidades para cada país
        for (j = 0; j < 4; j++) {
            printf("  Cidade %d do pais %s: ", j + 1, paises[i].nome);
            fgets(paises[i].cidades[j].nome, sizeof(paises[i].cidades[j].nome), stdin);

            // Entrada dos dados adicionais da cidade
            printf("    Populacao da cidade: ");
            scanf("%d", &paises[i].cidades[j].populacao);

            printf("    Area da cidade (em km): ");
            scanf("%f", &paises[i].cidades[j].area);

            printf("    PIB da cidade (em bilhoes): ");
            scanf("%f", &paises[i].cidades[j].pib);

            printf("    Numero de pontos turisticos: ");
            scanf("%d", &paises[i].cidades[j].pontosTuristicos);

            // Limpar o buffer de entrada após ler números
            getchar();
        }

        printf("\n");  // Nova linha para separar os cadastros
    }

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
 // Exibir os dados cadastrados
    printf("Cadastro de todos os paises e suas cidades:\n");
    for (i = 0; i < 8; i++) {
        printf("Pais %d: %s", i + 1, paises[i].nome);
        printf("Cidades:\n");
        for (j = 0; j < 4; j++) {
            printf("  Cidade %d: %s", j + 1, paises[i].cidades[j].nome);
            printf("    Populacao: %d\n", paises[i].cidades[j].populacao);
            printf("    Area: %.2f km²\n", paises[i].cidades[j].area);
            printf("    PIB: %.2f bilhoes\n", paises[i].cidades[j].pib);
            printf("    Pontos turisticos: %d\n", paises[i].cidades[j].pontosTuristicos);
            printf("\n");  // Nova linha para separar os dados
        }
    }

    return 0;
}
