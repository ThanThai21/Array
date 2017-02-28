#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "Array.h"

void menu();
void secondaryMenu();
void displayResult();

main () {
	menu();
}

void menu() {
	int selection;
	system("cls");
	printf("---MENU---");
	printf("\n1. Input");
	printf("\n2. Bubblue Sort");
	printf("\n3. Insertion Sort");
	printf("\n4. Selection Sort");
	printf("\n5. Find maximum values and these localtion");
	printf("\n6. Find minimum values and these localtion");
	printf("\n7. Find average value");
	printf("\n8. Find the difference between two values");
	printf("\n9. Find the difference from average value");
	printf("\n10. Sequetial Search");
	printf("\n11. Binary Search");
	printf("\n12. "); 
	printf("\n13. Display array");
	printf("\n14. Exit");
	do {
		printf("\nWhich action do you want to?");
		printf("\nAnswer: ___");
		scanf ("%d",&selection);
	} while (selection < 1 || selection > 14);
	secondaryMenu(selection);
}

void secondaryMenu (int i) {
	int selection;
	system("cls");
	printf ("---SELECTION---");
	if (i == 1) {
		printf("\n1. Continue");
	} else {
		printf("\n1. Display result");
	}
	printf("\n2. Back to menu");
	do {
		printf("\nWhich action do you want to?");
		printf("\nAnswer: ___");
		scanf ("%d",&selection);
	} while (selection < 1 || selection > 2);
	system("cls");
	if (selection == 1) {
		displayResult(i);
		printf("\nPress any key to back to menu");
		getch();
		menu();
	} else {
		menu();
	}
}

void displayResult (int i) {
	switch (i) {
		case 1: {
			_input();
			break;
		}
		case 2: {
			_bubbleSort();
			break;
		}
		case 3: {
			_insertionSort();
			break;
		}
		case 4: {
			_selectionSort();
			break;
		}
		case 5: {
			_maxValue();
			break;
		}
		case 6: {
			_minValue();
			break;
		}
		case 7: {
			printf("\nAverage Value: %f",_averagedValue());
			break;
		}
		case 8: {
			int i1, i2;
			do {
				printf("\nThe index of the first element: ");
				scanf("%d",&i1);
				printf("\nThe index of the second element: ");
				scanf("%d",&i2);
			} while(i1 < 0 || i1 >= count || i2 < 0 || i2 >= count);
			printf("\nDifference between two value: %f", _differenceTwoValues(i1,i2));
			break;
		}
		case 9: {
			_differencesAvgValue();
			break;
		}
		case 10: {
			_sequentialSearch();
			break;
		}
		case 11: {
			_binarySearch();
			break;
		}
		case 12: {
			
			break;
		}
		case 13: {
			_output();
			break;
		}
		case 14: {
			exit(0);
			break;
		}
	} 
}
