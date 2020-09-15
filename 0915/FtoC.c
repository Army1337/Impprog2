#include <stdio.h>



int main() {
	int f = -20;
	int c = 20;

	for(int i = -20; i <= 200;i = i + 10){
		float celsius = (i-32) * 5.0/9.0;


		printf("%dF = %.2fC\n",i,celsius);
	}
	
	return 0;
}