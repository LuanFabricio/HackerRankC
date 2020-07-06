#include <stdio.h>
#include <stdlib.h>

int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
    int* round_grades = malloc(grades_count*sizeof(int));
    
    for(int i = 0 ; i < grades_count ; i++){
        if(grades[i] >= 38){
            if((grades[i]/5) * 5 + 5 - grades[i] < 3)
                round_grades[i] = (grades[i]/5) * 5 + 5;
            else
                round_grades[i] = grades[i];
        }
        else
            round_grades[i] = grades[i];
    }

    return round_grades;
}

int main(){
    int result_count;
    int grades[] = {73, 67, 38, 33, 99};
    int *new_grades = gradingStudents(5, grades, &result_count);

    for(int i = 0 ; i < 5 ; i++)
        printf("%i\n", new_grades[i]);

    return 0;
}