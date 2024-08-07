#include"stdio.h"
int main(){
	char c;
	int count_space=0,fe;
	while(1){
		fe=scanf("%c",&c);
	if(EOF == fe)
		break;
	if(c == 32||c == 10||c==0){//'\0''\n''" "''\t'
		count_space++;
		printf("\n");}
	else{
		printf("%c",c);
	}
	}

	printf("The total number of words  = %d",count_space);
	return 0;
}
