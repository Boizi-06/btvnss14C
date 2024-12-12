#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
	char str[50];
	int i=0,j=0;
	char n;
	printf("moi ban nhap vap moi chuoi:\n");
	fgets(str,sizeof(str),stdin);
	for (i = 0; str[i] != '\0'; i++) { 
		if (str[i] == '\n') { 
			str[i] = '\0'; 
			break; 
		} 
	}
	printf("moi ban nhap vao chu can xoa\n");
	scanf("%c",&n);
	i=0;
	while(str[i]!='\0'){
		if(str[i]!=n){
			str[j++]=str[i];
		}
		i++;	
	}
	str[j]='\0';
	printf("chuoi sau khi xoa la: %s",str);
	return 0;
}
