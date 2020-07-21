#include <stdio.h>
#include <string.h>

int designerPdfViewer(int h_count, int* h, char* word) {
	int qLetras = strlen(word);
	char max = word[0];
	for(int i = 1 ; i < qLetras ; i++)
		if(h[(int)max-97]<h[(int)word[i]-97])
			max = word[i];
	
	printf("%c\n",max);

	return 	qLetras*(h[(int)max-97]);
}

int main(){
	int h[] = {6, 3, 4, 4, 6, 4, 5, 3, 4, 3, 6, 5, 4, 6, 7, 1, 3, 4, 2, 5, 6, 1, 5, 1, 7, 2};
	printf("%i\n",designerPdfViewer(26, h, "nrdyluacvr"));

	return 0;
}