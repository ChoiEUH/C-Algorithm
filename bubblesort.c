#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define size 10000
int a[size];

swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)scanf("%d", &a[i]);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if(a[j]>a[j+1]){
				swap(&a[j], &a[j + 1]);
		}
		}
	}
		for(int i = 0; i < n; i++)printf("%d ", a[i]);
	}
