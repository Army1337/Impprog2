#include <stdio.h>



int main() {

	//for(float i = 0.0;i<=1.1;i +=0.1){
	//	printf("%.100f\n",i);
	//}


	float i = 0.0;
	while(i<=1.0){
		printf("%f\n",i);
		i += 0.1;
		if(i>10) break;
	}


	return 0;
}