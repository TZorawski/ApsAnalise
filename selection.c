#include <stdio.h>

void troca(int* v, int a, int b) {
	int c = v[a];
	v[a] = v[b];
	v[b] = c;
}

void main() {
	int v[7] = {1, 3, 4, 2, 0, 4, -3};
	int i, j, menor;
	
	for(i = 0; i < 7; i++) {
		menor = i;
		for(j = 1 + i; j < 7; j++) {
			if(v[j] < v[menor])	menor = j;
		}
		troca(v, menor, i);
	}
	
	for(i = 0; i < 7; i++) {
		printf("\nv[%d] = %d", i, v[i]);
	}
}
