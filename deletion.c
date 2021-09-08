// #include<stdio.h>
// void display(int arr[],int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// void deletion(int arr[],int size,int index){
//     for(int i=index; i<size-1; i++){
//         arr[i]=arr[i+1];
//     }
// }

// int main(){
//     int arr[100]={34,67,3,7,876,39},size=6,index=2;
//     display(arr,size);
//     deletion(arr,size,index);
//     printf("Array after Deletion\n");
//     size=size-1;
//     display(arr,size);
    
//     return 0;
// }




//with value


#include<stdio.h>
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void deletion(int arr[],int size,int value){
 
 int flag;

    for(int i=0; i<size; i++){
        if(arr[i]==value){
            flag=i;
        }
    }
    for(int j=flag; j<size-1; j++){
        arr[j]=arr[j+1];
    }
}
int main(){
    int arr[100]={34,67,3,7,876,39},size=6,value;
    display(arr,size);
    printf("Enter Your Element to Delete : ");
    scanf("%d",&value);
    deletion(arr,size,value);
    printf("Array after Deletion\n");
    size=size-1;
    display(arr,size);    
    return 0;
}