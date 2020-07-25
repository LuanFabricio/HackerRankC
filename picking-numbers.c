#include <stdio.h>

int pickingNumbers(int a_count, int* a) {
	int vet[100] ;
	int maxCount, vet_count, val;
	maxCount = 0;
	for(int i = 0 ; i < a_count ; i++){
		vet_count = 1;
		vet[0] = a[i];
		for(int j = 0  ; j < a_count ; j++){
			if(i == j)
			 	continue;
			val = 1;
			for(int  k = 0 ; k < vet_count ; k++)
				if(vet[k]-a[j]>1||vet[k]-a[j]<-1){
					val = 0;
					break;
				}
			if(val)
				vet[vet_count++]=a[j];
		}
		if(vet_count>maxCount)
			maxCount = vet_count;
	}
	
	return maxCount;
}

int main(){
	int a[] = {4, 2, 3, 4, 4, 9, 98, 98, 3, 3, 3, 4, 2, 98, 1, 98, 98, 1, 1, 4, 98, 2, 98, 3, 9, 9, 3, 1, 4, 1, 98, 9, 9, 2, 9, 4, 2, 2, 9, 98, 4, 98, 1, 3, 4, 9, 1, 98, 98, 4, 2, 3, 98, 98, 1, 99, 9, 98, 98, 3, 98, 98, 4, 98, 2, 98, 4, 2, 1, 1, 9, 2, 4};
	printf("%i\n",pickingNumbers(73,a));
	int b[] = {4, 6, 5, 3, 3, 1};
	printf("%i\n",pickingNumbers(6,b));
	return 0;
}