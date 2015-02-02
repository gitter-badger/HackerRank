#include <stdio.h>

int sum(int a, int b);

int main(){
	int T;
	int i;
	int num1, num2;
	scanf("%d", &T);

	for(i = 0; i < T; i++){
		scanf("%d %d", &num1, &num2);
		printf("%d", sum(num1, num2));
	}

	return 0;

}

int sum(int a, int b){
	return (a + b);
}