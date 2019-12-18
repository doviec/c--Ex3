    #include "isort.h"
    #include <stdio.h>


void shift_element (int* arr, int i){

while (i > 0){
    *(arr + i + 1) = *(arr + i);
    i--;
}
    *(arr+1) = 0;
}

void insertion_sort(int* arr,int len){

    int j;
    for (int i = 1; i < len; i++){
        int key = *(arr+i);
        j = i-1;
        while (j >= 0 && *(arr + j) > key){

            shift_element(arr + j - 1, 1);

            j--;
        }
        *(arr+j+1) = key;
   }
}