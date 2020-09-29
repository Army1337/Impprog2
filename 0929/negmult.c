#include <stdio.h>

int mult(unsigned int *p) {
	*p = *p * -1;

		
}
int main() {
	int n = 5;
	unsigned int un = 5 * -1;
	mult(%n);
	mult(%un);

	printf("n = %d, un = %u\n",n,un);

	return 0;
}