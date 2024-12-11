
#include <stdio.h>

int main(){
	char str[1000];
	int i=0;
	int count=0;
	int inCount=0;
	printf("Moi ban nhap vao chuoi: ");
	fgets(str,sizeof(str),stdin);
	while(str[i] !='\0'){
		if(str[i]==' '||str[i]=='\0'){
			count++;
	 }
		i++;
	}
	printf("So tu trong chuoi: %d", count);
	return 0;
}


