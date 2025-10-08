#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    unsigned long int populacao, populacao2; //alterado para acomodar números maiores (nível mestre)
    int pontost, pontost2;
    float area, area2, pib, pib2;
    float denpo, denpo2, pibper, pibper2; //variáveis adicionadas no Nível Aventureiro
    float denpoIn, denpoIn2; //nova variavel adicionada no Nível Mestre (inverso da densidade populacional)
    char estado, estado2;
    char codigo[4], codigo2[4];
    char nome[30], nome2[30];
    float superPoder, superPoder2; //nova variavel adicionada no Nível Mestre
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    //Cadastro da carta número 1
    printf("Siga as orientações para o cadastro de carta!\n\n");

    printf("Cadastre o Estado(A-H): ");
    scanf(" %c", &estado); //espaço antes do '%' para programa não ler nenhum caractere no buffer

    printf("Cadastre o código da carta(Ex: A01): ");
    scanf("%s", codigo);

    printf("Cadastre o nome da cidade: ");
    scanf(" %30[^\n]s", nome); //' %30[^\n]s' para a leitura do programa não ser limitada até o primeiro espaço

    printf("Cadastre a população da cidade: ");
    scanf("%lu", &populacao);

    printf("Cadastre a área da cidade: ");
    scanf("%f", &area);

    printf("Cadastre o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Cadastre a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontost);

    //Cálculo da Densidade Populacional e PIB per Capita (Carta 1) (Nível Aventureiro)
    denpo = (float)populacao / area;
    pibper = (float)pib / populacao;

    //Cálculo do inverso da Densidade Populacional e Super Poder (Carta 1) (Nível Mestre)
    denpoIn = (float)area / populacao;
    superPoder = (float)populacao + area + pib + pontost + pibper + denpoIn;

    printf("Carta cadastrada!\n\n");
    //Cadastro da primeira carta concluido!

    //Cadastro da carta número 2
    printf("Cadastre uma nova carta!\n");

    printf("Cadastre o Estado(A-H): ");
    scanf(" %c", &estado2);

    printf("Cadastre o código da carta(Ex: A01): ");
    scanf("%s", codigo2);

    printf("Cadastre o nome da cidade: ");
    scanf(" %30[^\n]s", nome2);

    printf("Cadastre a população da cidade: ");
    scanf("%lu", &populacao2);

    printf("Cadastre a área da cidade: ");
    scanf("%f", &area2);

    printf("Cadastre o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Cadastre a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontost2);
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    //comparação das cartas
    if(populacao > populacao2){
        printf("Carta 1 - %s: %d\n", nome, populacao);
        printf("Carta 2 - %s: %d\n", nome2, populacao2);   
        printf("Resultado: Carta 1(%s) venceu!", nome);
    }else{
        printf("Carta 1 - %s: %d\n", nome, populacao);
        printf("Carta 2 - %s: %d\n", nome2, populacao2);   
        printf("Resultado: Carta 2(%s) venceu!", nome2);
    }   //Resultado do ganhador já incluso no If


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
