#include <stdio.h>

int countingValleys(int n, char* s) {
	int sequencia, vales, dif_mar;
	char ultimo='P';
	sequencia=vales=dif_mar=0;
	for(int i = 0 ; i < n ; ultimo=s[i], i++){
		if(s[i]=='D'){
			dif_mar++;
			if(s[i]==ultimo){
				sequencia++;
			}
		}
		else if(s[i]=='U'){
			dif_mar--;
			if(s[i]!=ultimo){
				sequencia=0;
			}
	    }		       
		if(sequencia>=1&&(dif_mar>=2||dif_mar>=-2)){
			i++;
			while(s[i]=='D'){
				i++;
				dif_mar++;
			}
			vales++;
			sequencia=0;
			ultimo=s[i];
		}
	}
	return vales;
}

int main(){
	char s[]="UDUUUDUDDD";
	printf("%i\n",countingValleys(10,s));
	return 0;
}
