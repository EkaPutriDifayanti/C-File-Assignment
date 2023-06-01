#include <stdio.h>

void insertionSort(int arr[], int n)
{
	int i, terurut, j;
	for (i = 1; i < n; i++) {
		terurut = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > terurut) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = terurut;
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d\t", arr[i]);
}

int main()
{
	int arr[] = {87, 65, 5, 34, 97, 44};
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
    printf("Hasil urutan dari terkecil ke terbesar: \n");
	printArray(arr, n);

	return 0;
}
