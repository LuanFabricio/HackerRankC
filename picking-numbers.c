#include <stdio.h>

int pickingNumbers(int a_count, int* a) {
	int quantNum, quantNumMax;
	quantNumMax = 1;
	for(int i = 0 ; i < a_count ; i++){
		quantNum = 1;
		for(int j = i+1 ; j < a_count ; j++){
			// if(j==i)
				// continue;
			if((a[i]-a[j])<2&&(a[i]-a[j])>-2){
				printf("%i,%i\n",i,j);
				quantNum++;
			}
		}
		if(quantNum>quantNumMax)
			quantNumMax=quantNum;
	}

	return quantNumMax;
}

int main(){
	int a[] = {1, 2, 2, 3, 1, 2};
	printf("%i\n",pickingNumbers(6,a));
	int b[] = {4, 6, 5, 3, 3, 1};
	printf("%i\n",pickingNumbers(6,b));
	return 0;
}