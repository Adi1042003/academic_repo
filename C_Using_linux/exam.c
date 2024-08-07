#include<stdio.h>
int main()
{
	double cur_p = 817e6;
	double flat_p = 1.088e9;
	double cur_grow = 2.1/100;
	double flat_grow = 1.3/100;
	
	int years = 0;

	while(cur_p <= flat_p)
	{
		cur_p+=(cur_p*cur_grow);
		flat_p+=(flat_p*flat_grow);
		years++;
	}

	printf("The number of years it will take to overtake flatland populationis %d",years);
	return 0;
}
