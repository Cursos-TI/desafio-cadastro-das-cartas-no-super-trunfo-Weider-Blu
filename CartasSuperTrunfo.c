#include <stdio.h>

// Estrutura para armazenar os dados da cidade
typedef struct {
    int codigo;
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Cidade;

int main() {
    Cidade cidades[2] = {
        {1, "Rio de Janeiro\n", 6775561, 1200.27, 415.89, 30},
        {2, "Vitória\n", 365855, 93.38, 32.15, 10}
    };
    
    // Exibição dos dados cadastrados
    printf("\nDados das Cidades Cadastradas:\n");
    for (int i = 0; i < 2; i++) {
        printf("\nCidade %d:\n", i + 1);
        printf("Código: %d\n", cidades[i].codigo);
        printf("Nome: %s", cidades[i].nome);
        printf("População: %d habitantes\n", cidades[i].populacao);
        printf("Área: %.2f km²\n", cidades[i].area);
        printf("PIB: %.2f bilhões\n", cidades[i].pib);
        printf("Pontos Turísticos: %d\n", cidades[i].pontos_turisticos);
    }
    
    return 0;
}
