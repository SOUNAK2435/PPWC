// Online C compiler to run C program online
//count the number of Triplet in the array whose sum is equal to the the given value x.
#include <stdio.h>

int main() {
   int arr[8]={1,2,3,4,5,6,7,8};
   int x=12;
   int totalTriplet=0;
   
   for(int i=0;i<8;i++){
       for(int j=i+1;j<8;j++){  
           for(int k=j+1;k<8;k++){
               if (arr[i]+arr[j]+arr[k]==x){
               printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
               totalTriplet +=1;
               
           }
           
           }
       }
   }
   printf("count %d ",totalTriplet);

    return 0;
}


/*output
(1,3,8)
(1,4,7)
(1,5,6)
(2,3,7)
(2,4,6)
(3,4,5)
count 6 */