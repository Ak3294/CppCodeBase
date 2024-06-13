#include <stdio.h>
#include <stdlib.h>

void linearSearch(int *arr, int size, int sElement)
{
    int flag = 0, i;
    int location;
    for (i = 0; i < size; i++)
    {
        if (sElement == arr[i])
        {
            flag = 1;
            location = i;
        }
    }
    if (flag == 1)
    {
        printf("%d Found at Location %d", sElement, location);
    }
    else
    {
        printf("Element not Found in Array");
    }
}

int main()
{
    int n, flag = 0, sItem, *ptr, i;
    printf("Enter the Size of an Array :");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the %d Integers\n", n);
    for (i = 0; i <= n; i++)
    {
        scanf("%p/t", *(ptr + i));
    }
    printf("Enter the Element to be Searched :");
    scanf("%d", &sItem);
    linearSearch(ptr, n, sItem);

    return 0;
}