#include <stdio.h>

int main() { 
  float num1, num2, resultado;
  int opcao;

  
  printf("Digite o primeiro número: ");
  scanf("%f", &num1);

  printf("Digite o segundo número: ");
  scanf("%f", &num2);

  
  printf("\n CALCULADORA \n");

  printf("1 - Soma\n");
  printf("2 - Subtração\n");
  printf("3 - Multiplicação\n");
  printf("4 - Divisão\n");

  printf("Escolha a operação desejada 1, 2, 3 ou 4: ");
  scanf("%i", &opcao);

  
  switch (opcao) {
      case 1: resultado = num1 + num2;

      printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
      break;

    case 2: resultado = num1 - num2;

      printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
      break;

    case 3: resultado = num1 * num2;

      printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
      break;

    case 4:
      if (num2 == 0) {
  
        printf("Erro: divisao por zero\n");} 
              else {resultado = num1 / num2;
                  printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);}
      break;

    default:
    printf("Erro: Opção de operação inexistente! Escolha entre 1 e 4.\n");

      break;}

      return 0;}
