#include <stdio.h>


int getMaxArrayElement(int *intArr,int len)
{
    int res = 0;
    for(int i = 0; i<len;i++)
    {
        if(*(intArr + i) > res)
            res = *(intArr + i);
    }
    return res;
}

int swap(int *p1,int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
/*
	int a[3] = {34,2,12};
//	int *pa = &a;
	int *pa1 = a;
	int *p1 = &a[0];
	printf("a=%p\n&a[0]=%p\n",pa1,p1);
	
	for(int i=0;i<3;i++)
	{
		printf("%d\n",*(p1+i));
	}	
*/


/*
    int    a = 10,   *pa = &a, *paa = &a;
    double b = 99.9, *pb = &b;
    char   c = '@',  *pc = &c;
    //最初的值
    printf("&a=%#X, &b=%#X, &c=%#X\n", &a, &b, &c);
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    //加法运算
    pa++; pb++; pc++;
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    //减法运算
    pa -= 2; pb -= 2; pc -= 2;
    printf("pa=%#X, pb=%#X, pc=%#X\n", pa, pb, pc);
    //比较运算
    if(pa == paa){
        printf("%d\n", *paa);
    }else{
        printf("%d\n", *pa);
    }
*/



/*
	char str[] = "www.baidu.com";
	int len = strlen(str),i;
	printf("%s\n",str);

	for(i=0;i<len;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
*/


/*
	char *str = "www.baidu.com";
	int len = strlen(str),i;
	
	printf("%s\n",str);

	for(i=0;i<len;i++)
	{
		printf("%c",*(str+i));
	}	
       	
	printf("\n");
 	
	for(i=0;i<len;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
*/


/*
	char str[30];
	gets(str);
	printf("%s\n",str);
*/

/*

	int a = 4, b = 5;
	swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
*/

	int a[5] = {23,1,23,43,2};
	int maxValue =	getMaxArrayElement(a,sizeof(a)/sizeof(int)); 
	printf("maxValue=%d\n",maxValue);
	return 0;
	
	
}
