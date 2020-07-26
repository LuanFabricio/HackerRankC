#include <stdio.h>
#include <stdlib.h>

int* climbingLeaderboard(int scores_count, int* scores, int alice_count, int* alice, int* result_count) {
	int i, j, aux_count;
	*result_count = alice_count;
	int* alice_result = malloc(alice_count*sizeof(int));
	for(i = 0 ; i < alice_count ; i++){
		aux_count=0;
		for(j = 1 ;  j < scores_count+1 ; j++){
			if(alice[i]>=scores[j-1]){
					alice_result[i] = aux_count+1;
					break;
			}
			if(scores[j]==scores[j-1])
				continue;
			else
				aux_count++;
		}
		if(scores[j-1]!=scores[j-2])
			aux_count++;
		if(j==scores_count+1)
			alice_result[i] = aux_count;
	}

	return alice_result;
}

int main(){
	int scores[] = {100, 90, 90, 80, 75, 60};
	int arr[] = {50, 65, 77, 90, 102};
	int count;
	int* a = climbingLeaderboard(6, scores, 5, arr, &count);
	for(int i = 0 ; i  < count ; i++ )
		printf("%i,",a[i]);
	printf("\n");
	return 0;
}