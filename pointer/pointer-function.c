#include <stdio.h>

int max(int a,int b)
{
	return a > b ? a : b;
}

void man()
{
	printf("男人:抽烟\n");
}

void woman()
{
	printf("女人:烫头\n");
}

int main()
{
/*
	int x,y,maxval;
	int (*pmx)(int,int) = max; // 函数名称就是函数首地址
	printf("Input two numbers:");
	scanf("%d,%d",&x,&y);
	maxval = (*pmx)(x,y);
	printf("Max value:%d\n",maxval);	
*/

	void (*p)();
	int i = 0;
	printf("请输入数字(0表示男人,1表示女人):");
	scanf("%d",&i);
	p = i == 0 ? man : woman;
	(*p)(); 

	return 0;
}
