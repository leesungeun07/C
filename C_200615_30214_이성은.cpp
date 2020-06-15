#include <stdio.h>
int main() {
	for (int i=0; i<5; i++) {
			for (int j=0; j<i+1; j++) {
				printf("*");
			}
			printf("\n");
		}
		printf("\n\n");
		
	for (int i=0; i<5; i++) {
		for (int j=0; j<i+1; j++) {
			printf("%d", 5-j);
		}
		printf("\n");
	}
	printf("\n\n");
	
	for (int i=5; i>0; i--) {
			for (int j=0; j<i; j++) {
				printf("%d", 5-j);
			}
			printf("\n");
		}
		printf("\n\n");
		
	for (int i=0; i<5; i++) {
		for (int j=0; j< 2-(i/2); j++) {
			printf(" ");
		}
		for (int k=0; k<i+1; k++) {
			printf("%d", k+1);
		}
		printf("\n");
	}
}
