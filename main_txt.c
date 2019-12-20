#include "txtfind.h"
#include <stdio.h>


int main()
{
    char letter;
    char key;
    int index = 0;
    char word[WORD];
   
    while ((letter = getc(stdin)) != ' '){
        word[index] = letter;
        index++;
    }
    word[index] = '\0';   
    while ((letter = getc(stdin)) != '\n')
    {
       key = letter;
    }
    if (key == 'a'){
        print_lines(word);
    }else if (key == 'b'){
       letter = getc(stdin);
        
        similar_words(word);
    }else{
        printf("Wrong letter");
        }

    return 0;
}