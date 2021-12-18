#include <stdio.h>
#include <string.h>

int main()
{
	char str[80];
	int i, j;
	printf("введите строку:\n");
	fgets(str, sizeof(str), stdin);
	printf("исправленная строка: \n");
	if (strchr(str, '$')) {
		for (i = 0; str[i] != '$' && i < strlen(str); i++) {
			if (str[i] == '0') {
				j = i;
				while (str[j] == '0')
					j++;
				if (str[i - 1] == '.') {
					for (; i <= j + 1; i++)
						printf("%c", str[i]);
				}
				else if (str[j] == '.') {
					printf("%c", '0');
					i = j - 1;
				}
				else if (!((int)str[j] >= 49 && (int)str[j] <= 57)) {
					printf("%c", '0');
					i = j - 1;
				}
			}
			else
				printf("%c", str[i]);
		}
	}
	else
		printf("предложение не заканчивается на '$'");
	return 0;
} 