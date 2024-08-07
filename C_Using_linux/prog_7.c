#include"stdio.h"
#include"stdlib.h"
int main()
{
	FILE *fp = stdin;
	if(fp == NULL){
		exit(1);}
	char chunk[128];
		
	while(fgets(chunk, sizeof(chunk),fp)!=NULL){
		fputs(chunk,stdout);
		//printf("%s",chunk);
		fputs("\n",stdout);		
	
	}
}
