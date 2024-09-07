#include <stdio.h>

void cubeArray(int *arr, int size) 
{
    for (int i = 0; i < size; i++) 
	{
        *(arr + i) = (*(arr + i)) * (*(arr + i)) * (*(arr + i)); 
    }
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

    cubeArray(arr, n);

    printf("The cubed elements are:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

}