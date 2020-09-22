#include <stdio.h>

int aCount = 0;
int bCount = 0;
void a(float);
void b(float);


void a (float n) {
	int half = n / 2.f;
	if(half>0) b(half);
	aCount++;
}

void b(float n){
	if(n-1>0) a(n-1);
	bCount++;
}

int main() {
	int n;
	printf("Give a number: ");
	scanf("%d", &n);
	a(n);
	printf("Count of a: %d\nCount of b:%d\n",aCount,bCount);
	return 0;
}