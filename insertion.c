#include <stdio.h>

void display_insertion(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertion_fun(int capacity, int array_size, int insert_index, int insert_element, int arr[])
{
    if (array_size >= capacity)
    {
        return -1;
    }
    for (int i = array_size - 1; i >= insert_index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[insert_index] = insert_element;
    return 1;
}

int main()
{
    int arr[100] = {23, 4, 67, 10, 6};
    int array_size =5, insert_element, capacity = 100, insert_index;
    printf("Initial Array : ");
    display_insertion(arr, array_size);
    printf("Enter Insert Element : ");
    scanf("%d", &insert_element);
    printf("Enter Insert Index : ");
    scanf("%d", &insert_index);
    display_insertion(arr, array_size);
    insertion_fun(capacity, array_size, insert_index, insert_element, arr);
    array_size = array_size + 1;
    display_insertion(arr, array_size);
}