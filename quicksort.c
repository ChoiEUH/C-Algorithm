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


quicksort(int set, int ex) {
	if (set >= ex) return;
	int top = set, x = set + 1, y = ex, temp;
	while (x <= y) {
		while (x <= ex && a[x] <= a[top]) x++;
		while (y > set && a[y] >= a[top]) y--;
		if (x > y) swap(&a[top], &a[y]);
		else swap(&a[x], &a[y]);
  }
	quicksort(set, y - 1);
	quicksort(y + 1, ex);

}



int main() {
	int n;
	scanf("%d", &n);
	for (int x = 0; x < n; x++)scanf("%d", &a[x]);
	quicksort(0, n - 1);
	for (int x = 0; x < n; x++)printf("%d ", a[x]);
}
