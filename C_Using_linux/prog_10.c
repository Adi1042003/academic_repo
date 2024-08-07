#include"stdio.h"
#include"string.h"
int main(int ac,char *av[])
{
	char** a=av;
	int i;
	for(i=0;i<ac;i++)
	{
		//printf("%s\n",av[i]);
		//printf("%d\n",*(*a));
		printf("%s\n",(*a++));

}
	//printf("add av =%x , add a =%x\n",&av,a);
       	return 0;
}
