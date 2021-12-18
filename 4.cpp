#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char str[80];
	int i;
	printf("введите строку:\n");
	fgets(str, sizeof(str), stdin);
	if (strchr(str, '.')) {
		printf("исправленная строка:\n");
		for (i = 0; str[i] != '.'; i++)
			if ((int)str[i] >= 65 && (int)str[i] <= 90)
				str[i] = towlower(str[i]);
		puts(str);
	}
	else
		printf("предложение не заканчивается на '.'");
	return 0;
}