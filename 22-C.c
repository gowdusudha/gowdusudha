#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short intsigned: %hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("short intunsigned:%d to %hu\n",0,USHRT_MAX);
    printf("int:signed:%d to %d\n",INT_MIN,INT_MAX);
    printf("int:unsigned:%d to %u",0,UINT_MAX);
    printf("long intsigned:%ld to %ld\n",LONG_MIN,LONG_MAX);
    printf("long intunsigned:%d to %lu\n",0,ULONG_MAX);
    printf("long long int :signed:%lld to %lld\n",LONG_LONG_MIN,LONG_LONG_MAX);
    printf("long long int :unsigned:%llu to %llu\n",0,ULONG_LONG_MAX);
}
	

	


