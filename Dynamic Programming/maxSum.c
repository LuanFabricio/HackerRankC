#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// TODO fazer uma versão que retorna os valores usados
// typedef struct _list_struct{
// 	int val, max;
// 	struct _list_struct* prox;
// } List;

// List* add_list(List* lk, int newValue){
// 	List* newList = (List*)malloc(sizeof(List));
// 	newList->val = newValue;

// 	if(lk && lk->max+newValue >= lk->max){
// 		newList->max = lk->max + newValue;
// 		newList->prox = lk;
// 		return newList;
// 	}
// 	else if(!lk){
// 		newList->max = newValue;
// 		newList->prox = NULL;
// 		lk = newList;
// 	}

// 	return lk;
// }

// Return the max value
int max(int x, int y){
	return x > y ? x : y;
}

// Sum if is worth (the new value is greater than 0)
int sum(int current_max, int new_value){
	// If is worth add the new value
	if(current_max < current_max+new_value){
		return current_max+new_value;
	}

	return current_max;
}

// Just a function to calc the current value's best sum
int sumSubset(int* sums, int currentSum, int n, int* arr, int arr_count){
	if(n >= arr_count){
		return currentSum;
	}

	int s1;
	// Check if can use the next value from array sums
	if(n+1 < arr_count){
		// Add because it's the best sum
		s1 = currentSum + sums[n+1];
	}
	else{
		// Just use the current value
		s1 = currentSum;
	}
	
	// Best sum for s2
	int s2 = currentSum + sums[n];

	return max(s1, s2);
}


// Main algorithm's function, it use the dynamic programming to resolve the problem
int maxSubsetSum(int arr_count, int* arr){
	int maxSum = 0;
	int* sums = (int*)malloc(sizeof(int)*arr_count);
	int current_sum;

	/**
	 * For loop backwards because the algorithm's
	 * "case base" is the end (with 1 element).
	 * */ 
	for(int i = arr_count-1 ; i >= 0 ; i--){
		// Add if is worth it
		current_sum = sum(0, arr[i]);
		current_sum = sumSubset(sums, current_sum, i+2, arr, arr_count);

		// If is the highest update the maxSum variable
		if(current_sum > maxSum){
			maxSum = current_sum;
		}
		sums[i] = current_sum;
	}
	free(sums);

	return maxSum;
}

int main(){
	int q, n, x;

	scanf("%i", &q);

	for(int k = 0 ; k < q ; k++){
		scanf("%i", &n);

		int* arr = (int*)malloc(sizeof(int)*n);

		for(int i = 0 ; i < n ; i++){
			scanf("%i", &x);
			arr[i] = x;
		}

		int m = maxSubsetSum(n, arr);

		printf("%i\n", m);

		free(arr);
	}

	return 0;
}