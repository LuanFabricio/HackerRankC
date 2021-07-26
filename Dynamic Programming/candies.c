#include <stdio.h>
#include <stdlib.h>

/**
 * TODO make a function to calc the ith kid will recive
*/

long calcNextKid(int n, int* arr, int i, int* candys){
	if(i < n-1){

	}
	if(i < n && arr[i] < arr[i+1]){
		candys[i] = 1;
		return 2;
	}
}

int max(int x, int y){
	return x > y ? x : y;
}

long candies(int n, int arr_count, int* arr) {
	long* candy = malloc(sizeof(long)*n);

	long i;

	if(arr[0] >= arr[1]){
		candy[0] = 2;
		candy[1] = 1;
	}
	else{
		candy[0] = 1;
		candy[1] = 2;
	}

	// printf("%li -> ", candy[0]);
	long var = -1;
	long min_candies = candy[0];
	for(i = 1 ; i < n-1 ; i++){
		if(arr[i] > arr[i-1] && arr[i] >= arr[i+1]){
			candy[i] = -1;
			if(var == -1){
				var = i;
			}
		}
		else if(arr[i] > arr[i-1]){
			if(candy[i-1] > 0 ){
				candy[i] = candy[i-1]+1;
			}
			else{
				candy[i] = -1;
			}
		}
		else if(arr[i] >= arr[i+1]){
			candy[i] = 2;
			if(var == -1){
				var = i;
			}
		}
		else{
			candy[i] = 1;
		}

		// printf("%li -> ", candy[i]);
		// min_candies += candy[i];
	}
	if(arr[n-1] > arr[n-2]){
		candy[n-1] = candy[n-2]+1;
	}
	else{
		candy[n-1] = 1;
	}

	for(i = 1 ; i < n-1 ; i++){
		if(arr[i] > arr[i-1] && arr[i] >= arr[i+1]){
			// printf("%i %i\n", candy[i-1], candy[i+1]);
			candy[i] = max(candy[i-1], candy[i+1])+1;
		}
		else if(arr[i] > arr[i-1]){
			candy[i] = candy[i-1]+1;
		}
		else if(arr[i] >= arr[i+1]){
			candy[i] = candy[i+1]+1;
		}
		else{
			candy[i] = 1;
		}

		// printf("%li -> ", candy[i]);
		// if(candy[i] <= 0){
		// 	printf("%li\n", candy[i]);
		// }
		min_candies += candy[i];
	}
	min_candies += candy[n-1];
	// printf("%li\n", candy[n-1]);

	return min_candies;
}

int main(){
	int m, n, q, x;

	scanf("%i", &q);

	for(int k = 0 ; k < q ; k++){
		scanf("%i %i", &n, &m);
		
		int* arr = (int*)malloc(sizeof(int)*n);

		for(int i = 0 ; i < n ;i++){
			scanf("%i", &x);
			arr[i] = x;
			// printf("%i ", arr[i]);
		}
		// printf("\n");

		long min_candies = candies(n, m, arr);
		printf("%li\n", min_candies);

		free(arr);
	}
}