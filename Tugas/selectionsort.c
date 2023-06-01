#include <stdio.h>

void swap (int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort (int arr[], int n)
{
    int i,j, minimumIndex;

    for ( i = 0; i < n-1; i++)
    {
        minimumIndex = i;
        for ( j = i + 1; j < n; j++)
            if (arr[j] < arr[minimumIndex])
                minimumIndex = j;
            if (minimumIndex != i)
                swap(&arr[minimumIndex],&arr[i]);
               
    }
}
void printArray(int arr[], int size)
{
    int i;
    for ( i = 0; i < size; i++)
        printf("%d\t",arr[i]);
    
}

int main ()
{
int arr[] = {63, 24, 92, 35, 25, 21};
int n = sizeof(arr)/sizeof(arr[0]);
selectionSort(arr,n);
printf("Hasil urutan dari kecil ke besar: \n");
printArray(arr, n);
return 0;
}