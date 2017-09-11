#include <stdio.h>
#include <string.h>
int main()
{
	FILE *fp  = fopen("a.txt","w");
	const char *s = "hello world!!!";
	for(int i = 0; i < strlen(s);i++)
	{
		putc(s[i],fp);
	}	
	fclose(fp);
	return 0;
}
