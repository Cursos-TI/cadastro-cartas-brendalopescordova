#include <stdio.h>

int main() {

    //Declaração de variáveis
    char estado1, estado2;
    char codigo1[3], codigo2[3]; // [ ] cadeia de char pois vou adicionar mais de um caratcter "simulando uma string - texto"
    char nomeCidade1[20], nomeCidade2[20]; // [ ] cadeia de char pois vou adicionar mais de um caratcter "simulando uma string - texto"
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    //Título
    printf("Criando as Cartas do jogo Super Trunfo - Brenda C. C. Lopes\n\n");

    //Leitura de dados da carta 1
    printf("Dados da carta 1:\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado1); //Obrigatório espaçamento antes de %c na leitura de um char
    
    printf("Digite o Código: ");
    scanf("%s", codigo1); //Não é necessário utilizar o & em uma cadeia de char
    
    printf("Digite o nome da Cidade: ");
    scanf("%s", nomeCidade1); //Não é necessário utilizar o & em uma cadeia de char
    
    printf("Digite o número da população: ");
    scanf("%i", &populacao1);
    
    printf("Digite o número da área: ");
    scanf("%f", &area1);
    
    printf("Digite o número do PIB: ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turisticos: ");
    scanf("%i", &pontosTuristicos1);
    
    printf("\n");
    
    //Leitura de dados da carta 2
    printf("Dados da carta 2:\n");
    printf("Digite o Estado: ");
    scanf(" %c", &estado2); //Obrigatório espaçamento antes de %c na leitura de um char
    
    printf("Digite o Código: ");
    scanf("%s", codigo2); //Não é necessário utilizar o & em uma cadeia de char
    
    printf("Digite o nome da Cidade: "); 
    scanf("%s", nomeCidade2); //Não é necessário utilizar o & em uma cadeia de char
    
    printf("Digite o número da população: ");
    scanf("%i", &populacao2);
    
    printf("Digite o número da área: ");
    scanf("%f", &area2);
    
    printf("Digite o número do PIB: ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turisticos: ");
    scanf("%i", &pontosTuristicos2);
    
    printf("\n");

    //Exibição em tela dos dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f km² \n", area1); // Adicionado número 2 em (%.2f) para exibir 2 casas decimais após o ponto
    printf("PIB: %.2f bilhões de reais \n", pib1); // Adicionado número 2 em (%.2f) para exibir 2 casas decimais após o ponto
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos1); 
    
    printf("\n");
    
    //Exibição em tela dos dados da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f km²\n", area2); // Adicionado número 2 em (%.2f) para exibir 2 casas decimais após o ponto
    printf("PIB: %.2f bilhões de reais \n", pib2); // Adicionado número 2 em (%.2f) para exibir 2 casas decimais após o ponto
    printf("Número de Pontos Turísticos: %i\n", pontosTuristicos2);

    
    return 0;
}
