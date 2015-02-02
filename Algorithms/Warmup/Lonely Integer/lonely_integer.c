#include <stdio.h>

int lonely_integer(int* a, int size);

int main(){
	//n is size of array, i is counter variable
	int n, i, result;
	scanf("%d", &n);
    int arr[n];
	
    //printf1
   // printf("%d\n", n);
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
    //printf2
    //printf("%d\n", n);
	result = lonely_integer(arr, n);
    printf("%d", result);
	return 0;
}


int lonely_integer(int* a, int size){
	int i;
	int res = 0;
    //printf("%d\n", size);
	for(i = 0; i < size; i++){
		res = res ^ a[i];
        //printf("%d\n", res);
	}

	return res;
}