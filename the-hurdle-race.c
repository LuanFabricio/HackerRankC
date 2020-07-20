#include <stdio.h>

int hurdleRace(int k, int height_count, int* height) {
	int max=height[0];
	for(int i = 1 ; i < height_count ; i++)
		if(height[i]>max)
			max = height[i];
	
	if(max>k)
		return max-k;
	else
		return 0;
}

int main(){
	int alturas[] = {1, 6, 3, 5, 2};
	printf("%i\n", hurdleRace(4,5,alturas));
	return 0;
}