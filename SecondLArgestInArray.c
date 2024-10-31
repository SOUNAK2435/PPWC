// Online C compiler to run C program online
//find the third largest element in the array:
#include <stdio.h>
#include <limits.h>
int main() {
    int arr[7]={10,35,32,45,45,67,67};
    int max=INT_MIN;
    int smax=INT_MIN;
    
    for(int i=0;i<7;i++){
        if(max<arr[i]){
           
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i]&& max!=arr[i]){
            smax=arr[i];
        }
    }
    printf(" largest element in the array  is %d\n",max);
    printf(" Second largest element in the array is %d\n",smax);
     
    return 0;
}