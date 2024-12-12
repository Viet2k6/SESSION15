#include <stdio.h>
#include <string.h>
int main() {
    char str[100] = "hello world, o";
    char ch;
    printf("Chuoi ban dau: [%s]\n", str);
    printf("Nhap ky tu can xoa: ");
    scanf(" %c", &ch);
    int len = strlen(str);
    int index = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] != ch) {
            str[index++] = str[i]; 
        }
    }
    str[index] = '\0'; 
    printf("Chuoi sau khi xoa ky tu '%c': [%s]\n", ch, str);
    return 0;
}
