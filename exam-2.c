#include <stdio.h>

int calculateSum(int arr[], int size) 
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


    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    int sum = calculateSum(arr, n);


    printf("Sum of the elements in the array: %d\n", sum);


}
