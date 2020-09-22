#include <stdio.h>
#define MAX 20

int main() {
	int res = 17;
	float percentage = ((float)res / MAX) *100;
	printf("Eredmeny: %.0f%%\n",percentage);


	return 0;
}