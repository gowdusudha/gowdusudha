#include<stdio.h>
void main()
{
	int  a, b, s, d, p, q, r;
	a=11;
	b=2;
	s=a+b;
	printf("sum of %d and %d is %d:\n", a, b, s);
	d=a-b;
	printf("difference of %d and %d is %d:\n", a, b, d);
	p=a*b;
	printf("product of %d and %d is %d:\n", a, b , p);
	q=a/b;
	printf ("quotient of %d and %d is %d:\n", a, b, q);
	r=a%b;
	printf("remainder of %d and %d is %d:\n", a, b, r);	
}
