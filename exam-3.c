#include <stdio.h>

void printReverse(int arr[], int size) 
{
    printf("Array in reverse order: ");
    for (int i = size - 1; i >= 0; i--) 
	{
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int sumArray(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
	{
        sum += arr[i];
    }
    return sum;
}

main() 
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    printReverse(arr, n);

 
    int sum = sumArray(arr, n);
    printf("Sum of all array elements: %d\n", sum);
}