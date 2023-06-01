// Optimized implementation of Bubble sort
#include <stdbool.h>
#include <stdio.h>

void tukar(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	bool sudahTertukar;
	for (i = 0; i < n - 1; i++) {
		sudahTertukar = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tukar(&arr[j], &arr[j + 1]);
				sudahTertukar = true;
			}
		}

		// If no two elements were swapped by inner loop,
		// then break
		if (sudahTertukar == false)
			break;
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d\t", arr[i]);
}

// Driver program to test above functions
int main()
{
	int arr[] = {36, 44, 82, 27, 43, 59};
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Hasil urutan dari terkecil ke terbesar: \n");
	printArray(arr, n);
	return 0;
}
