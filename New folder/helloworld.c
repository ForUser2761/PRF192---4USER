#include <stdio.h>
#include <stdlib.h>

void showMenu() {
	// system("cls");
	system("color 3");
	printf("*** Select an Option ***\n");
	printf("1 - Add Values to Array\n");
	printf("2 - Search a Value\n");
	printf("3 - Exit\n");
}

int inputValues(int a[]) {
	int n;
	printf("Enter number of elements (max 100): ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		printf("Enter a[%d]: ", i);
		scanf("%d", &a[i]);
	}
	return n; // Trả lại số lượng phần tử đã nhập
}

void searchValue(int a[], int n) {
	int x, found = 0;
	printf("Enter value to search: ");
	scanf("%d", &x);
	for(int i = 0; i < n; i++) {
		if(a[i] == x) {
			printf("Found %d at index %d\n", x, i);
			found = 1;
		}
	}
	if (!found) {
		printf("Value not found!\n");
	}
}

int main() {
	int a[100], n = 0, choice;

	while(1) {
		showMenu();
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch(choice) {
			case 1:
				n = inputValues(a);
				break;
			case 2:
				if (n == 0)
					printf("Array is empty. Please add values first.\n");
				else
					searchValue(a, n);
				break;
			case 3:
				exit(0);
			default:
				printf("Invalid choice. Try again!\n");
		}
		system("pause");
	}
	return 0;
}
