#include <stdio.h>
int main() {
	int res = 0;
	for (int i=1; i <= 10; i++) {
		printf("%d ", i);
		res += i;
	}
	printf("\n\n%d", res);
}
