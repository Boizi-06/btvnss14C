#include <stdio.h>
#include <string.h>
int main() {
    char str[50]; 
    int length=sizeof(str)/sizeof(char);
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin); 

    printf("Chuoi ban vua nhap: %s\n", str);
    printf("Do dai cua chuoi: %d\n",strlen(str) );

    return 0;
}

