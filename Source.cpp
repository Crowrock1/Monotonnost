#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char* argv[]) {
	int hodnoty[9], i, y = 0;
	bool x;

	for (int i = 0; i <= 8; i++) {
		scanf("%d", &hodnoty[i]);
	}

	for (int i = 1; i <= 7; i++) {
		if (hodnoty[i - 1] < hodnoty[i] && hodnoty[i] < hodnoty[i + 1]) {
			x = true;
		}
		else if (hodnoty[i - 1] == hodnoty[i] && hodnoty[i] == hodnoty[i + 1]) {
		       y = 2;
		}
		else if ((hodnoty[i - 1] == hodnoty[i]) ^ (hodnoty[i] == hodnoty[i + 1])) {
            y = 1;    
		}    
		else if (hodnoty[i - 1] > hodnoty[i] && hodnoty[i] > hodnoty[i + 1]) {
	        x = false;
		}
	}
	if (y == 0)
        printf(x ? "rostouci" : "klesajici");
        
    else if (y == 1)
        printf(x ? "neklesajici" : "nerostouci");
	
	else if (y == 2)
	    printf("konstantni");
	    
	return 0;
}
