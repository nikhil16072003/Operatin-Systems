//best fit
#include <stdio.h>
int main() {
  int n,m,i,j;
  scanf("%d",&n);
  scanf("%d",&m);
  int processsize[n];
  int allocated[n];
  int blocksize[m];
  for(i=0;i<n;i++){
      scanf("%d",&processsize[i]);
  }
  for(i=0;i<m;i++){
      scanf("%d",&blocksize[i]);
  }
  for(i=0;i<n;i++){
      allocated[i]=-1;
  }
  for(i=0;i<n;i++){
      int bestfit=-1;
       for (int j = 0; j < m; j++){
           if(blocksize[j]>=processsize[i]){
               if(bestfit==-1){
                   bestfit=j;
               }
               else if(blocksize[bestfit]>blocksize[j]){
                   bestfit=j;
               }
           }
           
             if (bestfit != -1){
                 allocated[i] = bestfit;
                 blocksize[bestfit] -= processsize[i];
        }
    
  }
}
for (int i = 0; i < n; i++){
    if (allocated[i] != -1)
            printf("%d\n",allocated[i] + 1); 
        else
          printf("Not Allocated\n") ;
       
    }
    return 0;
}
