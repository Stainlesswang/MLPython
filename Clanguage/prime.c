#include "stdbool.h"
#include "stdio.h"


bool is_prime(int n){
	int divisor;
	if (n<=1)
		return false;
	for (divisor = 2; divisor * divisor <= n; divisor++)
	{
		if (n%divisor==0)
		{
			/* code */
			return false;
		}
		/* code */
	}
	return true;
}


int main(int argc, char const *argv[])
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if (is_prime(n))
	{
		/* code */
		printf("Prime \n");
	}else{
		printf("Not Prime \n");
	}
	return 0;
}