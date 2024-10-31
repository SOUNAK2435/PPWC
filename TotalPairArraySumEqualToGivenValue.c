// Online C compiler to run C program online
//find the total of pairs in the array whose sum is equal to the the given value x.
#include <stdio.h>

int main() {
   int arr[8]={1,2,3,4,5,6,7,8};
   int x=12;
   int count=0;
   
   for(int i=0;i<8;i++){
       for(int j=i+1;j<8;j++){  // we does not count (6,6) and repeted things like (4,8) and (8,4) are same we count as 1 or (5,7)and (7,5) are count as 1.so inistilize j as i+1
           if (arr[i]+arr[j]==x){
               printf("(%d,%d)\n",arr[i],arr[j]);
               count +=1;
           }
       }
   }
   printf("count %d ",count);

    return 0;
}