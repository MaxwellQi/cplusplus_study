#include <stdio.h>
#include <string.h>
int main()
{
	FILE *fp = fopen("a.txt","r");
	char c;
	while((c = getc(fp)) != EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
	printf("\n");
	return 0;
}
