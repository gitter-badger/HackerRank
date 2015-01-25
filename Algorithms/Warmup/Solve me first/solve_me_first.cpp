#include <cstdlib>
#include <iostream>

int sum(int a, int b);

int main(){
  int num1, num2;
  std::cin >> num1 >> num2;
  std::cout << sum(num1, num2);
  return EXIT_SUCCESS;
}

int sum(int a, int b){
  return a + b;
}
