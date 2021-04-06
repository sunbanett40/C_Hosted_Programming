#include <stdio.h>

int main()
{
	char buff[1000];
	FILE *fp;

	fp = fopen("test.txt", "r");
	while (fgets(buff, 255, (FILE *)fp))
	{
		printf("%s", buff);
	}
	fclose(fp);
}