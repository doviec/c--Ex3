    #include "isort.h"
    #include <stdio.h>

   int main (){

       int arr[LEN];
    printf("Enter 50 numbers:");
        for(int i =0 ; i < LEN;++i)
        {
            scanf("%d",arr+i);
        }
    printf("\n");

       insertion_sort(arr,LEN);
       for(int i = 0 ; i<LEN;++i)
       {
           printf("%d",arr[i]);
           if(i != LEN-1)
           {
               printf(",");
           }       
       }
       printf("\n");
    return 0;
    }