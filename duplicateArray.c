// Online C compiler to run C program online
// write a program to find a duplicate element from the given array of interger.
#include <stdio.h>

int main() {
   int arr[7]={1,2,3,2,5,1,7};
   for(int i=0;i<7;i++){
       for(int j=i+1;j<7;j++){
           if(arr[i]==arr[j]){
               printf("%d is duplicate in Array\n",arr[i]);
           }
       }
   }
  

    return 0;
}

/*
1 is duplicate in Array
2 is duplicate in Array 
*/