#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[80];
	int i;
	printf("введите новую строку:\n");
	fgets(str, sizeof(str), stdin);
	if (strchr(str, '.')) {
		printf("исправленная строка:\n");
		for (i = 0; str[i] != '.'; i++)
			if ((int)str[i] >= 96 && (int)str[i] <= 122)
				str[i] = towupper(str[i]);
		puts(str);
	}
	else
		printf("предложение не заканчивается на '.'");
	return 0;
}