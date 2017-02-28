#include <stdio.h>
#include <math.h>

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

void _output () {
	int i;
	for (i = 0; i < count; i++) {
		printf("%.2f ", max[i]);
	}
}

void _bubbleSort() {
	int sorted = 0; //false
	int j = 0;
	while (sorted == 0) {
		int i;
		j++;
		sorted = 1;
		for (i = 0; i < count-j; i++) {
			if (max[i] > max[i + 1]) {
				sorted = 0; //the array isn't sorted
				float temp = max[i];
				max[i] = max[i + 1];
				max[i + 1] = temp;
			}
		}
	}
	printf("\nResult: ");
	_output();
}

void _insertionSort() {
	int i;
	for (i = 0; i < count; i++) {
		int j = i;
		float x = max[i];
		while(j > 0 && max[j-1] > x) {
			max[j] = max[j - 1];
			j--;
		}
		max[j] = x; 
	}
	_output();
}

void _selectionSort() {
	int i;
	for (i = 0; i < count-1; i++) {
		int j;
		int minIndex;
		float min = max[i];
		for (j = i+1; j < count; j++) {
			if (max[j] < min) {
				min = max[j];
				minIndex = j;
			}
		}
		if (minIndex != i) {
			float temp = max[minIndex];
			max[minIndex] = max[i];
			max[i] = temp;
		}
	}
	_output();
}

void _maxValue() {
	int i;
	float maxValue = max[0];
	for (i = 0; i < count; i++) {
		if (max[i] > maxValue) {
			maxValue = max[i];
		}
	}
	printf("Maximum Value: %f\n", maxValue);
	printf("Their index: ");
	for (i = 0; i < count; i++) {
		if (max[i] == maxValue) {
			printf(" %d ", i);
		}
	}
	printf("\n");
}

void _minValue() {
	int i;
	float minValue = max[0];
	for (i = 0; i < count; i++) {
		if (max[i] < minValue) {
			minValue = max[i];
		}
	}
	printf("Minimum Value: %f\n", minValue);
	printf("Their index: ");
	for (i = 0; i < count; i++) {
		if (max[i] == minValue) {
			printf(" %d ", i);
		}
	}
	printf("\n");
}

float _averagedValue() {
	int i;
	float sum = 0;
	for (i = 0; i < count; i++) {
		sum += max[i];
	}
	return sum/count;
}

float _differenceTwoValues(int i1, int i2) {
	return fabs(max[i1] - max[i2]);
}

void _differencesAvgValue() {
	int i;
	float avg = _averagedValue();
	for (i = 0; i < count; i++) {
		printf("The difference value between max[%d] and averaged value is %f\n", i, fabs(max[i] - avg));
	}
}

void _sequentialSearch() {
	
}

void _binarySearch() {
	
}



