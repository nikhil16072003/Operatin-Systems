#include <stdio.h>
int main() 
{ 
    int m,n,i,j;
    printf("Enter number of blocks: ");
    scanf("%d",&m);//block
    printf("Enter number of processes: ");
    scanf("%d",&n);//process
    int blockSize[m],processSize[n];
    printf("Enter all processessizes: ");
   for(i=0;i<n;i++){
      scanf("%d",&processSize[i]);
  }
   printf("Enter all blocksizes: ");
  for(i=0;i<m;i++){
      scanf("%d",&blockSize[i]);
  }
  
    int allocation[n];

    
    for (int i=0;i<n;i++)
    {
        allocation[i]=-1;
    }

    
    for (int i=0;i<n;i++)
    {
       
        int best_idx=-1;
        
        int diff;
        
        
        for (int j=0;j<m;j++)
        {
            if (blockSize[j]>=processSize[i])
            {
               
                if (best_idx==-1)
                {
                    diff=blockSize[j]-processSize[i];
                    best_idx=j;
                }
                else
                {
                    int inter=blockSize[j]-processSize[i];
                    
                    if (diff<inter)
                    {
                        diff=inter;
                        best_idx=j;
                    }
                }
            }
        }

        if (best_idx==-1)
            continue;

       
        blockSize[best_idx]=processSize[i];
        allocation[i]=best_idx;
    }
    
    
    for(int i=0;i<n;i++)
    {
        if (allocation[i]!=-1)
            printf("\nBlock for Process No %d with Size %d is %d",i+1,processSize[i],allocation[i]+1);
        else
            printf("\nBlock for Process No %d with Size %d cannot be allocated",i+1,processSize[i]);
    }
   
  
    return 0 ; 
} 
