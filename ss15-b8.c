#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100] = "hello world";
    int size = strlen(str);
    for (int i = 0; i < size; i++)
    {
        if (i == 0 || i > 0 && str[i-1] == ' ')
        {
            str[i] = toupper(str[i]);
        }   
    }
    printf("%s",str);
}
