#include <cstdlib>
#include <iostream>

int lonely_integer(int* arr, int array_size){
	int res = 0;
	size_t i;

	for(i = 0; i < array_size; i++){
		res = res ^ arr[i];
	}

	return res;

}

int main(){

	int array_size;
	int* arr;
	int result;
	int i;
	std::cin >> array_size;
	arr = (int*)malloc(array_size*sizeof(int));

	for(i = 0; i < array_size; i++){
		std::cin >> arr[i];
	}

	result = lonely_integer(arr, array_size);
	std::cout << result;
	return 0;
}