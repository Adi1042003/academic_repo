#include"stdio.h"
int main(){
	int x,fe;
	while(1){
        fe = scanf("%d",&x);
   	if (EOF == fe)
		break;
	 printf("%d\n",x);
	}
	return 0;
}
