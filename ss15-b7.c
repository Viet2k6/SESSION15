#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0'; 
    }
    int countText = 0;
    int countNum = 0;
    int countChar = 0;
    int size = strlen(str); 
    for (int i = 0; i < size; i++) {
        if (isalpha(str[i])) {
            countText++;  
        } else if (isdigit(str[i])) {
            countNum++;   
        } else {
            countChar++; 
        }
    }
    printf("So ki tu so la: %d\n", countNum);
    printf("So ki tu chu la: %d\n", countText);
    printf("So ki tu dac biet trong chuoi ban dau la: %d\n", countChar);
    return 0;
}
