/*Find the difference between the sum of element at even indices
to the sum of element at odd indices. */

#include <stdio.h>

int main() {
    int arr[5]={5,7,9,10,11};
    int sumeven=0;
    int sumodd=0;
    for(int i=0;i<5;i++){
        if(i%2==0){
            sumeven +=arr[i];   
            }
            else {
                sumodd +=arr[i];
            }
    }
    int difference =sumeven-sumodd;
    printf("%d ",difference);
   
    return 0;
}