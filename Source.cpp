#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char* argv[]) {
	int y = 0, pocHod;
	int* hodnoty;
	bool x;
    
    while (true){
        printf("pocet hodnot: ");
        scanf("%d", &pocHod);
        if (pocHod >= 3){
            break;
        }
    }
    
	for (int i = 0; i <= pocHod - 1; i++) {
		scanf("%d", &hodnoty[i]);
	}

	for (int i = 1; i <= pocHod - 2; i++) {
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
