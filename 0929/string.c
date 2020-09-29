#include <stdio.h>


int min (int n1, int n2){
	if(n1<n2) return n1;
	if(n2<n1) return n2;

}

int strlen(char str[]){
	int i = 0;
	while(str[i] != '\0'){
		i++;
	}
	return i;
}


int strcmp(char s1[], char s2[]){
	int difference = 0;
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for(int i = 0; i <min(len1,len2);++i){
		difference = s1[i] - s2[i];
		if(difference != 0) break;

	}
	if(len1 != len2 && difference == 0){
		if(len1>len2){
			return 1;
		}else{
			return -1;
		}
		
	}
	return difference;
}

int main() {
	char name[255];
	char otherName[] = "Bela";


	printf("Enter your name: ");
	scanf("%s", name);
	//"ARMY" = {'A','R','M','Y','\0'} valojabol igy nez ki







	printf("Your name: %s, lenght: %d\n",name,strlen(name));
	printf("Your name is %s Bela\n",(strcmp(name,otherName)< 0 ? "before" : "after"));
	printf("strcmp res: %d \n",strcmp(name,otherName));
	// strcmp ha kisebb mint nulla akkkor akkor az elso elobb van

	return 0;
}