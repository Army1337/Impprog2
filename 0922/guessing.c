#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#define GUESS 5

int get_target(int); // régebbi c tipusok miatt deklarárlás 
int guessing(void);
void evaluate(int);

int main() {
	//int score = guessing();
	evaluate(guessing());
	/*
	if(guessCount<3) {
		printf("you have to go and buy some lottery tickets bro\n");
	}else{
		printf("Nice try bra.\n");
	}
	*/

	

	/*
	int i;
	do {
		printf("Guess a number: ");
		scanf("&d",i);
	}while(i!=GUESS)
	*/
	return 0;

}

int get_target(int limit){
	srand(time(NULL));
	return rand() % limit;
}

void evaluate(int score){
	switch(score) {
			case 1:
				printf("Go bra grab some lottery tickets\n");
				break;
			case 2:
				printf("Nice try bra\n");
				break;
			default:
				printf("dont do gambling bro.\n");
		}
	
}

int guessing() {
	int guessCount = 0;
	int target = get_target(3);
	while(1) {
		int i;
		printf("Guess a number: ");
		scanf("%d", &i);
		guessCount++;
		if(i==target) break;

	}
	return guessCount;

}
