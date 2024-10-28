// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int n;
   printf("Enter the number to check whether prime or not:\n");
   scanf("%d",&n);
   int a=0;
   for(int i=2;i<n;i++){
       if(n%i==0){
           a=1;
           break;
       }
   }
   if(n==1){
       printf("%d is neithe prime and composit");
   }
   else if (a==0){
       printf("%d is  prime number",n);
       
   }
   else {
       printf("%d is not prime number",n);
   }
    return 0;
}