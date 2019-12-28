#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char* argv[]) {
	int hodnoty[9], i, hodnota;

	for (int i = 0; i <= 8; i++) {
		scanf_s("%d", &hodnoty[i]);
	}
	hodnota = hodnoty[0];
	/* for (int i = 0; i <= 9; i++){
		printf("%d", hodnoty[i]);
	}*/

	for (int i = 1; i <= 8
		; i++) {
		if (hodnota < hodnoty[i]) {
			hodnota = hodnoty[i];
		}
		else return 1;
	}

	return 0;
}