#include <stdio.h>
#include <string.h>

int main()
{
	char str[80];
	int i;
	printf("введите строку:\n");
	fgets(str, sizeof(str), stdin);
	if (strchr(str, '.')) {
		printf("исправленная строка: \n");
		for (i = 0; str[i] != '.'; i++) {
			if ((int)str[i] >= 48 && (int)str[i] <= 57
				&& ((((int)str[i + 1] >= 48 && (int)str[i + 1] <= 57) && ((int)str[i] < (int)str[i + 1]))
					|| ((int)str[i - 1] >= 48 && (int)str[i - 1] <= 57) && ((int)str[i] > (int)str[i - 1])))
				printf("%c", str[i]);
			if (!((int)str[i] >= 48 && (int)str[i] <= 57))
				printf("%c", str[i]);
		}
	}
	else
		printf("предложение не заканчивается на '.'");
	return 0;
}