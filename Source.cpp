#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char* argv[]) {
	int hodnoty[9], i, len;

	for (int i = 0; i <= 9; i++) {
		scanf_s("%d", &hodnoty[i]);
	}
	
	for (int i = 0; i <= 9; i++){
		printf("%d", hodnoty[i]);
	}

	return 0;
}