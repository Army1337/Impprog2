#include <stdio.h>
int main() {
	int a = 1;

	//printf("%d",a);
	if(a%2==0){
		printf("páros\n");
	}
	else{
		printf("páratlan\n");
	}


	if(a<0){
		printf("negatív\n");

	}else if (a>0){
		printf("pozitiv\n");
	}else{
		printf("nulla\n");
	}



	return 0;
}