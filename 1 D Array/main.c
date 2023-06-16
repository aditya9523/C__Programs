#include <stdio.h>
#include <stdlib.h>

int main()
{

   int arr[6],i;
       printf("\nRead and Print elements of an array:\n");

    printf("Input 6 elements in the array :\n");
    for(i=0; i<6; i++)
    {
	    printf("Element - %d : ",i);
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");
    printf("[");
    for(i=0; i<6; i++)
    {
        printf("%d ", arr[i]);

    }
    printf("]");
    printf("\n");

    return 0;
}
