#include <stdio.h>

int sum(int a, int b);

int main(){
  int num1, num2;
  scanf("%d\n%d", &num1, &num2);
  printf("%d", sum(num1, num2));
  return 0;
}

int sum(int a, int b){
  return a + b;
}
