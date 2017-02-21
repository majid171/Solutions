#include <stdio.h>

int find(char[], char);

int main()
{
	char first[] = {'a','d','g','j','m','p','s','v','y'};
	char second[] = {'b','e','h','k','n','q','t','w','z'};
	char third[] = {'c','f','i','l','o','r','u','x'};

	char message[] = {'h','e','l','l','o'};

	int total = 0;

	for (int i = 0; i < sizeof(message); i++){
		if (find(first,message[i]) == 1){
			total++;
		}
		if (find(second,message[i]) == 1){
			total += 2;
		}
		if (find(third,message[i]) == 1){
			total += 3;
		}
		if (message[i] == '.' || message[i] == '_'){
			total++;
		}
		if (message[i] == ','){
			total += 2;
		}
		if (message[i] == '!'){
			total += 3;
		}
	}

	printf("The total cost is %d cents\n", total);

	return 0;
}

int find(char list[], char value){

	int check = 0;
	for (int i = 0; i < sizeof(list); i++){
		if (list[i] == value){
			check = 1;
		}
	}
	return check;
}