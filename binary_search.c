#include<stdio.h>

int binarySearch(int arr[],int element,int size){
   int low=0,mid,high=size-1;
   while(low<=high){
       mid=(low+high)/2;
       if(arr[mid]==element){
           return mid;
       }
       if(arr[mid]<element){
           low=mid+1;
       }else{
           high=mid-1;
       }
   } 
   return 0;  
}
int main(){
    int arr[]={12,34,76,89,90,324,550},element;
    printf("Enter Element to search \n");
    scanf("%d",&element);
    int size=sizeof(arr)/sizeof(arr[0]);
    int myBinarySearch=binarySearch(arr,element,size);
    if(!myBinarySearch){
        printf("Element not found");
    }else{
        printf("Element found at %d",myBinarySearch);
    }
}