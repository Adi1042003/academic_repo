#include"stdio.h"
#include"stdlib.h"
#include"string.h"
char my_strcat(char a[20],char b[20])
{
	int i,j=0;
	
	for(i=strlen(a);b[j]!='\0';i++)
	{
		a[i]=b[j];
		j++;
	}
	a[i]='\0';
	printf("the s1 is %s\n",a);

}

int main()
{
        char a[20],b[20];
	printf("Enter the first str ");
	scanf("%s",a);
	printf("Enter the second  str ");
	scanf("%s",b);
	my_strcat(a,b);
	return 0;
}
