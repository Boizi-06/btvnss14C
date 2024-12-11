#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hoang Thien Son";
    int length= sizeof(str)/sizeof(char);
    printf("Chuoi dao nguoc:");
    int i;
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
