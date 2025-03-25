#include <stdio.h>

#define NUM_ESTADOS 8
#define NUM_CIDADES 4

// Estrutura para armazenar as informações de uma cidade
struct Cidade {
    
    char nome[100];          // Nome da cidade
    int populacao;           // População
    float area;              // Área em km²
    float pib;               // PIB em bilhões de unidades monetárias
    int pontosTuristicos;    // Número de pontos turísticos
};
// Estrutura para armazenar informações de um país
struct Pais {
    char nomePais[100];      // Nome do país
};

// Função para exibir as informações de uma cidade
void exibirCidade(struct Cidade cidade, char estado, int cidadeNumero, char nomePais[]) {
    // Gerar o código da carta com base no estado e cidade
    printf("Codigo da carta: %c%02d\n", estado, cidadeNumero);
    printf("Pais: %s\n", nomePais);
    printf("  Cidade: %s\n", cidade.nome);
    printf("    Populacao: %d habitantes\n", cidade.populacao);
    printf("    Area: %.2f km\n", cidade.area);
    printf("    PIB: %.2f bilhoes de unidades monetarias\n", cidade.pib);
    printf("    Pontos turisticos: %d\n", cidade.pontosTuristicos);
    printf("\n");
}

int main() {
   
    struct Pais estados[NUM_ESTADOS]; // Estados de A a H
    struct Cidade cidades[NUM_ESTADOS][NUM_CIDADES]; // Matriz de cidades

  

    // Preenchendo os dados das cidades
    for (int i = 0; i < NUM_ESTADOS; i++) {

         // Perguntar o nome do país
         printf("Digite o nome do pais do estado %c: ", 'A' + i);
         scanf("%s", estados[i].nomePais);   // Captura o nome do país

        for (int j = 0; j < NUM_CIDADES; j++) {

           

            printf("Cadastro da cidade %d do estado %c:\n", j + 1, 'A' + i);
            
            printf("Digite o nome da cidade: ");
            scanf("%s", cidades[i][j].nome);

            printf("Digite a populacao da cidade: ");
            scanf("%d", &cidades[i][j].populacao);

            printf("Digite a area da cidade (em km): ");
            scanf("%f", &cidades[i][j].area);

            printf("Digite o PIB da cidade (em bilhoes): ");
            scanf("%f", &cidades[i][j].pib);

            printf("Digite o numero de pontos turisticos: ");
            scanf("%d", &cidades[i][j].pontosTuristicos);

            printf("\n");
        }
    }

    // Exibir todas as cidades cadastradas
    printf("Cadastro das cidades:\n");
    for (int i = 0; i < NUM_ESTADOS; i++) {
        for (int j = 0; j < NUM_CIDADES; j++) {
            exibirCidade(cidades[i][j], 'A' + i, j + 1, estados[i].nomePais);   // Passa o nome do país
        }
    }

    return 0;
}
