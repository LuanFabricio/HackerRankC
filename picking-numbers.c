#include <stdio.h>

int pickingNumbers(int a_count, int* a) {
	int vet[100];
	int quantNum, quantNumMax, vet_tamanho, valid;
	quantNumMax = 0;
	for(int i = 0 ; i < a_count ; i++){
		quantNum = 0;
		vet_tamanho = 1;
		vet[0] = a[i];
		for(int j = 0 ; j < a_count ; j++){
			if(j==i)
				continue;
			if((a[i]-a[j])<2&&(a[i]-a[j])>-2){
				valid = 1;
				for(int k = 0 ; k < vet_tamanho ; k++){
					if((vet[k]-a[j])>=2||(vet[k]-a[j])<=-2){
						break;
						valid = 0;
					}
				}			
				if(valid){
					vet[vet_tamanho++]=a[j];
					quantNum++;
				}

				// printf("%i,%i\n",i,j);
			}
		}
		if(quantNum>quantNumMax){
			printf("%i,%i\n",quantNum,a[i]);
			quantNumMax=quantNum;
			for(int z  = 0 ; z < vet_tamanho ; z++)
				printf("%i, ", vet[z]);
		}
	}

	return quantNumMax;
}

int main(){
	int a[] = {4, 2, 3, 4, 4, 9, 98, 98, 3, 3, 3, 4, 2, 98, 1, 98, 98, 1, 1, 4, 98, 2, 98, 3, 9, 9, 3, 1, 4, 1, 98, 9, 9, 2, 9, 4, 2, 2, 9, 98, 4, 98, 1, 3, 4, 9, 1, 98, 98, 4, 2, 3, 98, 98, 1, 99, 9, 98, 98, 3, 98, 98, 4, 98, 2, 98, 4, 2, 1, 1, 9, 2, 4};
	printf("%i\n",pickingNumbers(73,a));
	int b[] = {4, 6, 5, 3, 3, 1};
	printf("%i\n",pickingNumbers(6,b));
	return 0;
}