#include <stdio.h>

char first(char[]);

int main(){
	
	char message[] = {'h','u','l','u'};

	printf("%c\n", first(message));

	return 0;
}

char first(char message[]){
	
	int n = sizeof(message);
	char key;

	for (int i = 0; i < n; i++){
		for (int j = 1; j < n-i; j++){
			if (message[j] == message[i]){
				key = message[j];
				break;
			}
		}
	}
	return key;
}