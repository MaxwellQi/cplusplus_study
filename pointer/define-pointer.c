#include <stdio.h>

int main()
{

/*
	int a = 10;
	printf("a=%d\n",a);
	int *p = NULL;
	p = &a;
	*p = 11;
	printf("*p=%d,a=%d\n",*p,a);
*/

	int i = 10;
	void *pi = &i;
	printf("*pi=%d\n",*(int *)pi);
       
        char c = 'c';
	pi = &c;
	printf("*pi=%c\n",*(char *)pi);
	return 0;
}
