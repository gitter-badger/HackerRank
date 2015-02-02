#include <cstdlib>
#include <iostream>

int sum(int a, int b);

int main(){
	int T, i, num1, num2;
	std::cin >> T;
	for(i = 0; i < T; i++){
		std::cin >> num1 >> num2;
		std::cout << sum(num1, num2) << std::endl;
	}
	return 0;
	
}

int sum(int a, int b){
	return (a + b);
}