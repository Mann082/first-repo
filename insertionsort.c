#include<stdio.h>

int main()
{
    int size; scanf("%d",&size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }

     int i, key, j; 
    for (i = 1; i < size; i++)
    { 
        key = arr[i]; 
        j = i - 1; 
  
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 


    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }printf("\n");
    
    return 0;
}