// Online C compiler to run C program online
//write a program to reverse parts in array
//ex arr={1,2,3,4,5,6,7}
//we want to revere only 1-5 index only 
//output arr={1,6,5,4,3,2,7}
#include <stdio.h>
void rotate(int arr[], int a,int b){
    for(int i=a,j=b;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
    }
    return;
}
int main() {
   int arr[7]={1,2,3,4,5,6,7};
   rotate(arr,1,5);
   for(int i=0;i<7;i++){
       printf("%d ",arr[i]);
   }

    return 0;
}

/*output 
1 6 5 4 3 2 7 
*/