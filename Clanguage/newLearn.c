#include <stdio.h>
#include <ctype.h>

#define N 3
typedef float Dollars;
int main(int argc, char const *argv[])
{
	int a[N];
	for (int i = 0; i < N; ++i)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < N; ++i)
	{
		printf(" the input is:%d\n",a[i] );
	}
	int eight=0674;
	int ten=0xa34;
	printf("%d\n",eight );
	printf("%d\n",ten );
	long k;
	int j=1000;
	k=(long)j*j;
	Dollars cash_in,cash_out;
	cash_in=899.90;
	cash_out=3999.87;
	printf("%lu\n",sizeof(k) );
	printf("%f\n",cash_in);
	return 0;
}