#include <stdio.h>

int sum(int *t,int size){
	int sum = 0;

	for(int i = 0; i<size;++i){
		sum += t[i];
	}
	return sum;
}

int max(int t[],int size){
	int max = t[0];

	for(int i = 0; i < size; ++i){
		if(max < t[i]){
			max = t[i];
		}
	}
	printf("Max: %d\n",max);

	return max;
}
void penultimateMin(int t[],int size){
	//rossz
	int min = t[0];
	int penMin;
	if(t[0] < t[1]) {
		min = t[0];
		penMin = t[1];
	}else if (penMin>t[i]){
		penMin = t[i];
	}

}




int main() {

	int arr[150];
	for(int i = 0; i < 150;++i){
		arr[i] = 0;
		printf("%d ",arr[i]);
	}
	//int n = 1;
	//scanf("%d", &n);
	//int t[n];
	//printf("%ld", sizeof(t)/sizeof(int));

	int arr2[] = {1,4,25,25,22};


	printf("Sum %d\n",sum(arr2,sizeof(arr2)/sizeof(int)));
	max(arr2,5);
	

	return 0;
}