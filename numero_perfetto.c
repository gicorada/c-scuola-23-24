#include <stdio.h>

int main() {
	int n;
	int sum = 0;
	
	do {
		printf("Inserisci il numero per scoprire se e' un numero perfetto: ");
		scanf("%d", &n);
	} while(n<=0);
	
	for(int i=1; i<=n/2; i++) {
		if(n%i == 0) {
			sum += i;
		}
	}
	
	if(sum == n) {
		printf("%d e' un numero perfetto", n);
	} else {
		printf("%d non e' un numero perfetto", n);
	}
	
	return 0;
}
