#include "txtfind.h"
#include <stdio.h>

    void print_lines(char word[]){
        char letter;
        int index;
        char line [LINE] = {0};
         
        while ((letter = getc(stdin)) != EOF){
            index = 1;
            line[0] = letter;
            while ((letter = getc(stdin)) != '\n' && letter > 0){

                line[index] = letter;
                index++;
            }
            line[index] = '\n';       
            if (substring(line, word) == 1){
                printf("%s", line);
                for(int i=0; i<LINE; i++){
                    line[i]=0;
                }
            }            
        }
    }
int getLength(char* str){       //get Length

    int count = 0;
    while (*str != '\0'){
        count ++ ;
        str++;
    }
    return count;
}
int substring (char* string, char* word){   //checks if string contains word
   
   int length_word = getLength(word);
   int index_string = 0; 
   int index_word = 0;

    while (*(string + index_string) != '\n' ){
        if (*(string + index_string) == *(word + index_word)){
            index_word ++;
        }else{
            index_word = 0;
        }
        index_string++;
        if ( index_word == length_word){
            return 1;
        }
    }
   return 0;
}
int similar (char* string, char* word, int n){   //checks if string contains word with a deviation of N
      
    if (getLength(word) > getLength(string)){
            return 0;
    }
    if ((getLength(string) - n - 2) > getLength(word)){
        return 0;
    }
    int index_word = 0;
    int index_string = 0;
    while (*(string +index_string) != '\0'){
    
        if (*(word + index_word) != *(string + index_string)){
            n--;
        }else{
            index_word ++;
        }
        index_string ++;
         if (n < 0 ){
            return 0;
        }
    }      
    if (index_word == getLength(word)){
        return 1;            
    }else{
        return 0;
    }
}
void similar_words(char word []){    
    char letter;
    char check_word[WORD] = {0};
    int index=0;
       while ((letter = getc(stdin)) != EOF){
            
           if( ((letter == '\n') || (letter == '\t') || letter == ' ')){
                 
                 check_word[index] = '\0'; 
                 index = 0;  
                            
                 if (similar(check_word, word,N) == 1){
                    printf("%s \n",check_word);
                  }
            }else{
                check_word[index] = letter;
                index ++;         
           }
       }
    }




    