#include<stdio.h>
void main()
{
	int total_min, hr, min;
	total_min=100;
	hr=total_min/60;
	min=total_min%60;
	printf("%d hour(s) and %d minute(s)",  hr, min);
}
