#include <stdio.h>
#include <string.h>

int main()
{
	char str[80];
	int i;
	printf("введите строку:\n");
	fgets(str, sizeof(str), stdin);
	if (strchr(str, '.')) {
		printf("исправленная строка:\n");
		for (i = 0; str[i] != '.'; i++)
			if ((int)str[i] >= 96 && (int)str[i] <= 122)
				printf("%c", str[i]);
	}
	else
		printf("предложение не заканчивается на '.'");
	return 0;
}