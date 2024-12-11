
#include <stdio.h>
int main(){
	char str[]="xin chao cac ban";
	int length=sizeof(str)/sizeof(char);
	int i=0;
	int count=0;
	while(str[i]!='\0'){
		if (str[i]%1==0) {
            count++;
        }
        i++;
    }
    printf("%d",count);
    length-=count;
    length-=1;
	printf("So ky tu la chu cai co trong chuoi la: %d", length);
	return 0;
}


