// insertion sort


#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
   int a[n];
   int temp;
   for(i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
       temp=a[i];
       j=i-1;
       while(j>=0 && a[j]>temp){
           a[j+1]=a[j];
           j--;
       }

       a[j+1]=temp;

   }

   for(i=0;i<n;i++){
       printf("%d",a[i]);
   }

   return 0;
}
