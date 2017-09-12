#include <stdio.h>

int main()
{
	int a = 10;
	printf("a=%d\n",a);
	int *p = NULL;
	p = &a;
	*p = 11;
	printf("*p=%d,a=%d\n",*p,a);
	return 0;
}
