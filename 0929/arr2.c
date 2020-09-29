#include <stdio.h>



int main() {

	int arr1[] = {1,2,3,4,5};
	int arr2[5] = {0,0,0,0,0};
	for(int i = 0; i<6;++i){
		arr2[arr1[i] - 1]++;

	}
	int sum = 0;
	for(int i = 0; i < 5;++i){
		printf("%d: %d\n",i+1,arr2[i]);
		sum += (i+1) * arr2[i];
	}

	return 0;
}