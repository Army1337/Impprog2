#include <stdio.h>

void swap(int *x, int *y) {
	int tmp = *y;
	*y = *x;
	*x = tmp;

		
}
int main() {
	int a = 5;
	int b = 24;
	swap(&a,&b);
	printf("a=%d, b = %d\n",a,b);

	return 0;
}