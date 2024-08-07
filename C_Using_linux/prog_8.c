#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main()
{
        FILE *fp = stdin;
        if(fp == NULL){
                exit(1);}
        char chunk[128];
	int i=1;
        while(fgets(chunk, sizeof(chunk),fp)!=NULL){
                //fputs(chunk,stdout);
                //printf("%s",chunk);
		printf("the length of %d line is %ld\n",i++,strlen(chunk)-1);

        }
}

