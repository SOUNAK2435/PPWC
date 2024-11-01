// Online C compiler to run C program online
/* Write a program to reverse the array without using any array:*/
#include <stdio.h>
void reverse(int arr[],int n){
// we can use both while and for to find reverse a number.
// case1: using while loop to reverse number

    // int i=0;
    // int j=n-1;
    // while(i<j){
    //     //use swap to revese the number
    //     int temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;
    //     i++;
    //     j--;
    // }        

//  case2: using  for loop to reverse the number 
    
   
    
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main() {
  int n;
  printf("Enter the size of array\n");
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
      printf("Enter the data in array\n");
      scanf("%d",&arr[i]);
  }
  printf("Array is :\n");
  for(int i=0;i<n;i++){
      
      printf("%d ",arr[i]);
  }
    printf("\n");
    
    reverse(arr,n);
    printf("After the reverse,Array is: \n");
    for(int i=0;i<n;i++){
      
       printf("%d ",arr[i]);
   }
   

    return 0;
}

/*output
Enter the size of array

5
Enter the data in array
5
Enter the data in array
4
Enter the data in array
3
Enter the data in array
1
Enter the data in array
2
Array is :
5 4 3 1 2
After the reverse,Array is:
2 1 3 4 5
*/