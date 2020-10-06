#include <stdio.h>
 int partition(int A[],int start,int end){
     int pivot=A[end];
     int partitionindex=start;
     for(int i=start;i<end;i++){
         if(A[i]<=pivot){
             int temp=A[i];
             A[i]=A[partitionindex];
             A[partitionindex]=temp;
             partitionindex++;
         }
     }
     int temp=A[partitionindex];
             A[partitionindex]=A[end];
             A[end]=temp;
     return partitionindex;
     
 }
void bs(int arr[],int n){
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }

int quicksort(int A[], int start, int end){
    if(start<end){
        int partitionindex=partition(A,start,end);
        quicksort(A,start,partitionindex-1);
        quicksort(A,partitionindex+1,end);
    }
}

int main()
{ int t;
    int A[]={2,1,3,6,8,5,7,4};
    printf("enter the sorting method");
    scanf("%d",&t);
    switch(t){
        case 1:
            bs(arr,n);
            break;
        case 2:
            quicksort(A,0,7);
            break;
    }

    for(int i=0;i<8;i++) printf("%d ",A[i]);
  
}
