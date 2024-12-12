#include<stdio.h>
#include<ctype.h>
int main(){
	int i=0;
	char str[50];
	printf("moi ban nhap chuoi bat ki:\n");
	fgets(str,sizeof(str),stdin);
	while(str[i]!='\0'){
		if(isalpha(str[i])){
			str[i]=toupper(str[i]);
			break;
		}
		i++;
	}
	while(str[i]!=0){
		if(isspace(str[i])){
			str[i+1]=toupper(str[i+1]);
			break;
		}
		i++;
	}
	printf("chuoi sau khi duoc in hoa la %s \n",str);
	return 0;
}
