#include"stdio.h"
int main(){
	unsigned char uc=0;
	signed char sc;
	unsigned short us;
	signed short ss;
	unsigned long ul;
	signed long sl;
	while(uc <(unsigned char) (uc+1))
	{
		uc++;
	}
	while(sc <(signed char)(sc+1))
	{
		sc++;
	}
	printf(" largest value of uc = %u ",uc);
	printf("\n smallest value of uc = %u\n",(unsigned char)(!uc));
	printf(" largest value of sc = %d ",sc);
	while(sc > (signed char)(sc-1))
	{
		sc--;
	}
	printf("\n smallest value of sc = %d \n",sc);
	while(us < (unsigned short)(us+1))
	{
		us++;
	}
	printf("largest value of us = %d ",us);
	while(us > (unsigned short)(us-1))
	{
		us--;
	}
	printf("\n smallest value of us = %d\n",us);
	while(ss < (signed short)(ss+1))
	{
		ss++;
	}
	printf("largest value of ss = %d ",ss);
	while(ss > (signed short)(ss-1))
	{
		ss--;
	}
	printf("\n smallest value of ss = %d\n",ss);
	while(ul < (unsigned long)(ul+1))
	{
		ul++;
	}
	printf("largest value of ul = %ld ",ul);
	while(ul > (unsigned long)(ul0))
	{
		sl--;
	}
	printf("\n smallest value of ul = %ld \n",ul);


	return 0;
}
