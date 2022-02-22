#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main() {
	int count = 0;
	char a[30];
	scanf_s("%s", a,30);
	int n = strlen(a);
	int i;
	for (i = 0; i <= (n - 1) / 2; i++) {
		if (a[i] == a[n - 1 - i]) {
			count++;
			continue;
		}
		else {
			printf("false");
			break;
		}
	}
	if (count == (n + 1) / 2)
		printf("true");
	return 0;
}