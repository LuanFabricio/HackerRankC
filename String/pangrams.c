#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* isPangrams(char* s){
	int checkBit = 0;
	int len = strlen(s);

	for(int i = 0 ; i < len ; i++){
		char currentChar = tolower(s[i]);
		if(currentChar <= 'z'
		&& currentChar >= 'a'){
			int bit = (currentChar-'a');
//			printf("%d\n", bit);
			checkBit = checkBit | 1 << bit;
		}
	}

	if(checkBit == 0x3FFFFFF){
		return "pangram";
	}
	return "not pangram";
}

int main(void){
	char input[] = "abcdefghijklmnopqrstuvwxyz";
		//"The quick brown fox jumps over the lazy dog";
	
	char* res = isPangrams(input);
	
	printf("\"%s\" %s\n", input, res);

	return 0;
}
