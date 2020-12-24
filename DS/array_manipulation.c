#include <stdio.h>
#include <stdlib.h>

long arrayManipulation(int n, int queries_rows, int queries_columns, int** queries) {

    int* arr = malloc( sizeof(int) * n );
    int maior = 0;

    for ( int i = 0 ; i <  queries_rows ; i++ )
        for( int k = queries[i][0]-1 ; k < queries[i][1] ; k++ ) {

            arr[k] += queries[i][2];

            if ( maior < arr[k] ) maior = arr[k];

        }

    for ( int i = 0 ; i < n ; i++ ) printf("%i \n", arr[i]);

    return maior;

}

int main () {

    int** queries = malloc( sizeof(int) * 3 );

    queries[0] = malloc( sizeof(int) * 3 );
    queries[0][0] = 1;
    queries[0][1] = 2;
    queries[0][2] = 100;
    queries[1] = malloc( sizeof(int) * 3 );
    queries[1][0] = 2;
    queries[1][1] = 5;
    queries[1][2] = 100;
    queries[2] = malloc( sizeof(int) * 3 );
    queries[2][0] = 3;
    queries[2][1] = 4;
    queries[2][2] = 100;

    printf("%li", arrayManipulation( 5, 3, 3, queries ));

    return 0;
}
