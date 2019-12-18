#include "txtfind.h"
#include <stdio.h>


int main()
{
    char letter;
    char key;
    int index = 0;
   char word[WORD];
   
    char word0[WORD] = "abcd";
    char word1[WORD] = "ca";
    char word2[WORD] = "cat";
  
    int length = getLength(word0);
    printf("length is %d\n", length);
   
    int checksubstring = substring(word1,word2);
    printf("substrin 0: no, 1: yes answer is:%d\n",checksubstring);

    // int checksimilar = similar(word1,word2,1);
    // printf("simila 0: no, 1: yes answer is:%d\n",checksimilar);

    while ((letter = getc(stdin)) != ' '){
        word[index] = letter;
        index++;
    }
    word[index] = '\0';
    printf("\n%s ",word); //works

    while ((letter = getc(stdin)) != '\n')
    {
       key = letter;
    }
    printf("%c  \n",key);  //works


    if (key == 'a'){
        print_lines(word);
    }else if (key == 'b'){
       letter = getc(stdin);
        
        similar_words(word);
    }
    return 0;
}