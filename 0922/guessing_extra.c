#include <stdio.h>
#define TARGET 1.95
int main() {
	float a=3.14;
	int t = 0x01; //1 más számrendszerbe
	//int t = 0b101; //binárisban 5.
	float target = (int)a-t;
	//1 LESZ A HELYES VÁLASZ CSAK KOMPLIKÁLTAN LEIRVA
	while(1) {
		int i;
		printf("Guess a number: ");
		scanf("%d", &i);
		if(i==(int)target) break;
	}




	return 0;
}