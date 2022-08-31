#include <stdio.h>
#include <limits.h>
int main(void)
{
	int a = -2147483648;
	int b = a - 1;
	int c = 76;
	const double RENT = 3852.99;
	printf("*%10.3e*\n",RENT);
	printf("*%+4.2f*\n",RENT);
	printf("*%010.2f*\n",RENT);
	printf("%d\n",b);
	printf("%0x\n",c);
    return 0;
}

