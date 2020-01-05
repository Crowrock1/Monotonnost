#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char* argv[]) {
	int hodnoty[9], i, hodnota;
	bool x,y = false;

	for (int i = 0; i <= 8; i++) {
		scanf("%d", &hodnoty[i]);
	}
	hodnota = hodnoty[0];
	/* for (int i = 0; i <= 9; i++){
		printf("%d", hodnoty[i]);
	}*/

	for (int i = 1; i <= 7; i++) {
		if (hodnoty[i - 1] < hodnoty[i] && hodnoty[i] < hodnoty[i + 1]) {
			x = true;
		}
		else if (hodnoty[i - 1] == hodnoty[i] || hodnoty[i] == hodnoty[i + 1]){
		    y=true;
		    
		    }    
		else if (hodnoty[i - 1] > hodnoty[i] && hodnoty[i] > hodnoty[i + 1]) {
		    x = false;
		}
	}
	if (y == false)
        printf(x ? "rostouci" : "klesajici");
        
    else if (y == true)
        printf(x ? "neklesajici" : "nerostouci");
	
	return 0;
}
