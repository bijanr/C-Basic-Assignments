#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int len(char *str)      //count the length of string
{
    int count=0;
    while(*str!='\0')
    {
        if(*str!='\n')
        ++count;
        else;
        *str++;    
    }
    return count;
}

void main()
{
    char *string;
    string=(char *)malloc(sizeof(string));
    int word_count=0,line_count=0;
    printf("Enter the string : \n");
    scanf("%[^;]s",string);         //will take input until semicolon is pressed
    

    int length=len(string);   
    printf("The length of %d\n",length);   //calculating the length of string

    for(int i=0;i<length;i++)
    {
        if(*(string)==' ')          //check if character is equal to space
        {
            ++word_count;
        } 
        if(*(string)=='\n')         //check if character is equal to newline \n
        {
            ++line_count;
        }
        *(string)++;
    }

    printf("Number of words in this string : %d\n",word_count+1);
    printf("Number of spaces in this string : %d\n",word_count);
    printf("Number of words in this string : %d\n",line_count+1);
    
}