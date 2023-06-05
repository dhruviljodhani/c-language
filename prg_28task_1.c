#include <stdio.h>
void dhruv(int arr[], int smallest, int largest)
 {
    smallest = largest = arr[0]; 
    for (int i = 1; i < 5; i++)
    {
        if (arr[i] < smallest) 
        {
            smallest = arr[i]; 
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("Smallest: %d\n", smallest);
    printf("Largest: %d\n", largest);
}

int main()
 {
    int arr[50];
    for (int i = 0; i < 5; i++)
     {
        printf("enter arr[]: ");
        scanf("%d", &arr[i]);
    }
    int smallest, largest;
    dhruv(arr, smallest, largest);
} 