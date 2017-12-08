#include <stdio.h>

int main()
{
	FILE *fp = NULL;
	char ch;

	if((fp = fopen("a.txt","rt")) == NULL)
	{
		printf("can not open file , press any key to exit! ");
		getch();
		exit(1);
	}	
	while((ch = fgetc(fp)) != EOF)
	{
		putchar(ch);
	}
	putchar('\n');
	fclose(fp);
	return 0;



}
