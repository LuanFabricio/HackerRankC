#include <stdio.h>

int getMoneySpent(int keyboards_count, int* keyboards, int drives_count, int* drives, int b) {
	int dinheiro_gasto;
	int max = -1;

	for(int i = 0 ; i < keyboards_count ; i++){
		
		for(int j = 0 ;  j < drives_count ; j++){
			dinheiro_gasto = keyboards[i] + drives[j];
			if(dinheiro_gasto > max && dinheiro_gasto <= b)
				max = dinheiro_gasto;
		}
	}

	return max;
}

int main(){
	int keyboards[] = {4};
	int drives[] = {5};
	printf("%i\n",getMoneySpent(1, keyboards, 1, drives, 5));
	return 0;
}