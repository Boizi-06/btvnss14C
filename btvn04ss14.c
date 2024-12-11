
#include <stdio.h>
int main(){
	char str[]="xin chao cac ban nhe";
	int length=sizeof(str)/sizeof(char);
	int count=0;
	char a;
	printf("Moi ban nhap vao ky tu bat ky: ");
	scanf("%c", &a);
	int i;
	for(i=0;i<length;i++){
		if(str[i]==a){
			count++;
		}
	}printf("So lan xuat hien cua %c la: %d", a, count);

	return 0;
}


