#include <stdio.h>

int main(void) {
  int num1;
  int num2;
  printf("Digite um número: ");
  scanf("%d",&num1);
  printf("Digite outro número: ");
  scanf("%d",&num2);
  printf("O de %d + %d = %d \n O resultado de %d - %d = %d\n %d/%d =%d\n o resultado do resto %d e %d é %d: ",num1,num2,num1+num2,num1,num2,num1-num2,num1,num2,num1/num2,num1, num2,num1%num2);
  return 0;
}