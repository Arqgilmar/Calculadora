#include <stdio.h>

int main(void) {
  float n1, n2, res;
  char ope;

  printf("Digite um número:\n");
  scanf("%f", &n1);
  printf("Digite a operação:\n");
  scanf("%s", &ope);
  printf("Digite outro número:\n");
  scanf("%f", &n2);

  if(ope == '+'){
    res = n1 + n2;
  }else if(ope == '-'){
      res = n1 - n2;
  }else if(ope == '*'){
        res = n1 * n2;
  }else if(ope == '/'){
            res = n1 / n2;
   }
       
  printf("O resultado é : %.2f", res);
  
}
