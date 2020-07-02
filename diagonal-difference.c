#include <stdio.h>

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
  int principal, secundaria, diferenca;
  principal = secundaria = 0;
  printf("%i\n", arr);

  for(int i = 0 ; i < arr_rows ; i++){
    principal += arr[i][i];
    secundaria += arr[i][arr_rows-i];
  }

  diferenca =  principal-secundaria;

  if(diferenca < 0)
    diferenca *= -1;

  return diferenca;
}

int main(){
  int arr[3][3] = {11, 2, 4, 4, 5, 6, 10, 8, -12};
  int principal, secundaria, diferenca, arr_rows = 3;
  principal = secundaria = 0;

  for(int i = 0 ; i < arr_rows ; i++){
    if(i == arr_rows/2 && arr_rows%2 != 0)
      continue;
    principal += arr[i][i];
    secundaria += arr[i][arr_rows-i-1];
  }

  diferenca =  principal-secundaria;

  if(diferenca < 0)
    diferenca *= -1;
  printf("%i-%i\n", principal, secundaria);

  return 0;
}
