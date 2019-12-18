#ifndef _TXTFIND_H_
#define _TXTFIND_H_
#define WORD 30
#define LINE 256
#define N 1


int getLength(char* str);
int similar (char* word,char* string,int n);
int substring (char* str1, char* str2);
void print_lines(char word []);
void similar_words(char word []);

#endif