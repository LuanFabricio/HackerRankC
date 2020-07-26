#include <stdio.h>


int* climbingLeaderboard(int scores_count, int* scores, int alice_count, int* alice, int* result_count) {
	int aux[100000];
	int i, j, aux_count;
	aux[0] = scores[0];
	aux_count=1;
	for(i = 1 ; i < scores_count ; i++){
		if(scores[i]==scores[i-1])
			continue;
		aux[aux_count++] = scores[i];
	}
	for(i = 0 ; i < alice_count ; i++){
		
	}

	return ;
}

int main(){
	int scores[] = {100, 100, 50, 40, 40, 20, 10};
	int arr[] = {5, 25, 50, 120};
	int count;
	int* a = climbingLeaderboard(7, scores, 4, arr, &count);
	return 0;
}