#include<stdio.h>
#include<ctype.h>
int main(){
	char str[50];
	printf("moi ban nhap vao mot chuoi bat ki ");
	fgets(str,sizeof(str),stdin);
	int i=0;
	int chu=0;
	int so=0;
	int kitu=0;
	while(str[i]!='\0'){
		if(isalpha(str[i])){
		
			
			chu++;
		}else if(isdigit(str[i])){
			so++;
		}else{
			kitu++;
		}			
		i++;		
	}
	printf("co %d chu cai\n",chu);
	printf("co %d chu so\n",so);
	printf("co %d ki tu dac biet\n",kitu-1);
	return 0;
}
