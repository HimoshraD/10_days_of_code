#include <stdio.h>
#define MAX_SIZE 100  
int main()
{
    int arr[MAX_SIZE];
    int size, i, toSearch, index;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter element to search: ");
    scanf("%d", &toSearch);
    index = 0; 
    for(i=0; i<size; i++)
    {
        if(arr[i] == toSearch)
        {
            index = 1;
            break;
        }
    }
    if(index == 1)
    {
        printf("\n%d is found in index %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }
    return 0;
}
