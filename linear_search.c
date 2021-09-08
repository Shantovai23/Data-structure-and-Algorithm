#include<stdio.h>

int linearSearch(int arr[],int element,int size){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return 0;
    
}
int main(){
    int arr[]={12,43,6,57,87,94,66,78,9,67},element;
    printf("Enter Element to search \n");
    scanf("%d",&element);
    int size=sizeof(arr)/sizeof(arr[0]);
    int myLinearSearch=linearSearch(arr,element,size);
    if(!myLinearSearch){
        printf("Element not found");
    }else{
        printf("Element found at %d",myLinearSearch);
    }
}