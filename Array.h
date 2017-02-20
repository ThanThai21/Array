#include <stdio.h>

float max[100];
int count;

void _init () {
	int i;
	for (i = 0; i < 100; i++) {
		max[i] = 0;
	}
	count = 0;
}

void _input () {
	int i;
	int n;
	printf("So luong phan tu: ");
	scanf("%d",&n);
	for (i = 0; i < n; i++) {
		printf("Arr[%d] = ",i);
		scanf("%f", &max[i]);
		count += 1;
	}
}

void _bubbleSort() {
	
}

void _insertionSort() {
	
}

void _selectionSort() {
	
}

void _maxValue() {
	
}

void _minValue() {
	
}

void _averagedValue() {
	
}

void _differenceTwoValues() {
}

void _differencesAvgValue() {
	
}

void _sequentialSearch() {
	
}

void _binarySearch() {
	
}

void _output () {
	int i;
	for (i = 0; i < count; i++) {
		printf("%.2f ", max[i]);
	}
}

