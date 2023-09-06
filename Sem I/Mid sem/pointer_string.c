#include <stdio.h>
int main(){
char *s;
    printf("Enter your name:");
    scanf("%[^\n]",s); 
    printf("%s",s);
    printf("%d",sizeof(s));

}