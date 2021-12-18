#include <stdio.h>
#include <string.h>

int main()
{
	char str[90];
	int i;
	printf("введите строку:\n");
	fgets(str, sizeof(str), stdin);
	if (strchr(str, '.')) {
		printf("исправленная строка: \n");
		for (i = 0; str[i] != '.'; i++) {
			if (str[i] == '0' && (int)str[i - 1] >= 49 && (int)str[i - 1] <= 57) {
				while (str[i] == '0') {
					printf("%c", str[i]);
					i++;
				}
			}
			if (str[i] == '0' && (int)str[i + 1] >= 49 && (int)str[i + 1] <= 57) {
				i++;
			}
			if (str[i] == '0' && str[i + 1] == '0') {
				while (str[i] == '0' && str[i + 1] == '0')
					i++;
				if (!((int)str[i + 1] >= 48 && (int)str[i + 1] <= 57))
					printf("%c", '0');
			}
			else {
				printf("%c", str[i]);
			}
		}
	}
	else
		printf("предложение не заканчивается на '.'");
	return 0;
}