#include <stdio.h>

char* catAndMouse(int x, int y, int z) {
	int cat_a_dist = x-z;
	int cat_b_dist = z-y;
	if(cat_a_dist<0)
		cat_a_dist*=-1;
	if(cat_b_dist<0)
		cat_b_dist*=-1;
	if(cat_a_dist==cat_b_dist)
		return "Mouse C";
	else if(cat_a_dist<cat_b_dist)
		return "Cat A";
	else
		return "Cat B";
}

int main(){

	printf("%s\n",catAndMouse(1, 2, 3));
	printf("%s\n",catAndMouse(1, 3, 2));
	return 0;
}