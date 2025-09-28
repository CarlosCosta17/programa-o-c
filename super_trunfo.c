#include <stdio.h>
struct Carta{
    char codigo[4];
    char nome[50];
    char estado;
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};
    
    int main(){
        struct Carta carta1, carta2;

        // Cadastro da primeira carta
        printf("Digite o código da carta (ex: A01): ");
        scanf("%s", carta1.codigo);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", carta1.nome);

        printf("Digite a letra do estado (ex:A-H): ");
        scanf(" %c", &carta1.estado);

        printf("Digite a população: ");
        scanf("%d", &carta1.populacao);

        printf("Digite a área em km²: ");
        scanf("%f", &carta1.area);

        printf("Digite o PIB: ");
        scanf("%f", &carta1.pib);

        printf("Digite o numero de pontos turísticos: ");
        scanf("%d", &carta1.pontos_turisticos);

        //Cadastro da segunda carta

        printf("\nDigite o código da carta (ex:B12): ");
        scanf("%s", carta2.codigo);

        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]", carta2.nome);
        
        printf("Digite a letra do estado (A-H): ");
        scanf(" %c", &carta2.estado);

        printf("Digite a polulação: ");
        scanf("%d", &carta2.populacao);

        printf("Digite a área em km²: ");
        scanf("%f", &carta2.area);

        printf("Digite o PIB: ");
        scanf("%f", &carta2.pib);

        printf("Digite os pontos turísticos: ");
        scanf("%d", &carta2.pontos_turisticos);

        //Exibindo as cartas 

        printf("\n--- Carta 1 ---\n");
        printf("Código: %s\n", carta1.codigo);
        printf("Cidade: %s\n", carta1.nome);
        printf("Estado: %c\n", carta1.estado);
        printf("População: %d\n", carta1.populacao);
        printf("Área: %.2f km²\n", carta1.area);
        printf("PIB: %.2f\n", carta1.pib);
        printf("Pontos turísticos: %d\n", carta1.pontos_turisticos);

        printf("\n--- Carta2 ---\n");
        printf("Código: %s\n", carta2.codigo);
        printf("Cidade: %s\n", carta2.nome);
        printf("Estado: %c\n", carta2.estado);
        printf("População: %d\n", carta2.populacao);
        printf("Área: %.2f km²\n", carta2.area);
        printf("PIB: %.2f\n", carta2.pib);
        printf("Pontos turísticos: %d\n", carta2.pontos_turisticos);

        return 0;
}