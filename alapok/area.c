#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	printf("Add meg a negyszog oldalainak a meretet: ");
	scanf("%d %d",&a,&b);

	printf("a negyzet kerulete: %d\n",(2*a+2*b));
	printf("a negyszog terulete: %d\n",(a*b));
	float r, pi = 3.1415;
	printf("Add meg a kor sugarat: ");
	scanf("%f", &r);
	printf("a kor kerulete %0.2f\n",(2*r*M_PI));
	printf("a kor atmeroje %f\n",(r*r*M_PI));



	return 0;

}

