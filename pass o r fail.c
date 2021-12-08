#include<stdio.h>
void main()
{ 
  int a,b,c,d,e,total,perc;
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  total=a+b+c+d+e;
  perc=total/5;
  if(a>=35&&b>=35&&c>=35&&d>=35&&e>=35)
  {
  	printf(" pass\n");
  	printf("total marks out of %d is %d\n",5000,total);
  	printf("Grade: ");
    if(perc>=90)
    {
    	printf("o");
	}
	else if (perc>=80)
	{
		printf("A");
	}
	else if (perc>=70)
	{
		printf("B");
	}
	else if (perc>=60)
	{
		printf("C");
	}
	else if (perc>=50)
	{
		printf("D");
	}
  	else
  	{
        printf("fail");
	}
   }
}
