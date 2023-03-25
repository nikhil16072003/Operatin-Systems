//first fit
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
      
       for (int j = 0; j < m; j++){
           if(blocksize[j]>=processsize[i]){
                allocated[i] = j;
                blocksize[j] -= processsize[i];
                break;
           }
        }
}

for (int i = 0; i < n; i++){
    if (allocated[i] != -1){
            printf("%d\n",allocated[i] + 1); 
    }
        else{
          printf("Not Allocated\n") ;
        }
    }
    return 0;
}
