#include <stdio.h>
int main() {
	//int a =0,b=1,c=2; // jo verzio true
	//int a =-1,b=0,c=1; //false
	int a =-127,b=-12,c=-3;
	if(a<b && b <c){
		printf("True\n");
	}else{
		printf("False\n");
	}


	return 0;
}