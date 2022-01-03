#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 256

long repeatedString(char* s, long n){
	printf("Testando: %s, %ld\n", s, n);

	long qA = 0;

	long sLen = (long)strlen(s);

	long *aCount = malloc(sizeof(int)*sLen);

	long aC = 0;
	for(long i = 0 ; i < sLen ; i++){
		if(s[i] == 'a'){
			aC++;
		}
		aCount[i] = aC;
	}
	
//	printf("aC\t, sLen\t, n\n");
//	printf("%ld\t, %ld\t, %ld\n", aC, sLen, n);
//	printf("aC*n/sLen = %ld\n", aC*n/sLen);
//	printf("sLen mod n = %ld\t\n", n%sLen);
	qA = aC*n/sLen;

	if(n%sLen){
		qA += aCount[n%sLen-1];
	}

	free(aCount);

	return qA;
}

int main(){
	long qTests, n, res;
	char *s;
	
	scanf("%d", &qTests);

	for(long i = 0 ; i < qTests ; i++){
		s = malloc(sizeof(char)*MAX_SIZE);

		scanf("%s", s);
		scanf("%ld", &n);
	
		res = repeatedString(s, n);
	
		printf("Resposta %ld\n", res);

		free(s);

		printf("%ld/%ld | %d\n", i+1, qTests, i<qTests);
	}

	return 0;
}
