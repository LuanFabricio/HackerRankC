#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int* arr, int n){
	int max = 0;

	for(int i = 1 ; i < n ; i ++){
		if(arr[max] < arr[i]){
			max = i;
		}
	}

	return max;
}

int min(int* arr, int n){
	int min = 0;

	for(int i = 1 ; i < n ; i ++){
		if(arr[min] > arr[i]){
			min = i;
		}
	}

	return min;
}

void minimumBribes(int q_count, int* q) {
	int total_min_bribes = 0;

	for(int i = 0 ; i < q_count ; i++){
		if(q[i] != i+1){
			int q_bribes = q[i]-i-1;
/*			if(q_bribes < 0 && i+1 < q_count){
				q_bribes = 0;
				while(i+q_bribes+1 < q_count && q[i] > q[i+q_bribes+1]){
					q_bribes++;
				}
			}*/
			

//			printf("Current value: %i\tBribies: %i\n", q[i], q_bribes);

	if(i > 0 && i < q_count-1){
			int states[3] = {
				i - q[i-1],
				i+1 - q[i],
				i+2 - q[i+1]
			};

			if(states[1] != states[2] && states[1] != states[0]){
			
				int state_max = max(states, 3);
				int state_min = min(states, 3);
		
		//		printf("%i, %i, %i\n", i, i+1, i+2);
		//		printf("%i, %i, %i\n", states[0], states[1], states[2]);

		//		printf("%i, %i, %i\n", state_max, q[i], state_min);
				if(1 != state_max && 1 != state_min){
					printf("%i %i\n", state_min, states[1]);
					total_min_bribes += abs(-state_min-states[1]);
				}
			}
		}
			if(q_bribes > 0){
				total_min_bribes += q_bribes;
				if(q_bribes > 2){
					printf("Too chaotic\n");
					return;
				}
			}
		}
	
	}

	printf("%i\n", total_min_bribes);
}

int main(){
	int t, n;

	scanf("%i", &t);

	for(int k = 0 ; k < t ; k++){
		scanf("%i", &n);

		int* q = (int*)malloc(sizeof(int)*n);
		for(int i = 0 ; i < n ; i++){
			scanf("%i", &q[i]);
		}

		minimumBribes(n, q);
	}

	return 0;
}
