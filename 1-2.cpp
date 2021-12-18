#include <stdio.h>
#include <string.h>

int main()
{
	char str[80];
	int i, j;
	printf("введите строку:\n");
	fgets(str, sizeof(str), stdin);
	printf("исправленнная строка: \n");
	if (strchr(str, '$')) {
		for (i = 0; str[i] != '$' && i < strlen(str); i++) {
			if (str[i] == '.') {
				printf("%c", '.');
				i++;
				j = i;
				while ((int)str[j] >= 48 && (int)str[j] <= 57)
					j++;
				if (j - i > 2) {
					printf("%c%c", str[i], str[i + 1]);
					i += j - i - 1;
				}
				else {
					printf("%c%c", str[i], str[i + 1]);
					i++;
				}
			}
			else
				printf("%c", str[i]);
		}
	}
	else
		printf("предложение не оканчивается на '$'");
	return 0;
}