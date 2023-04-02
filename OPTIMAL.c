#include<stdio.h>
void optimal(int string[20],int n,int size)
{
   
    int frames[n];
    for (int i=0;i<n;i++)
        frames[i]=-1;
    
    int index=-1;
    int page_miss=0;
    int page_hits=0;
    int full=0;
    for (int i=0;i<size;i++){
        int symbol=string[i];
        int flag=0;
        for(int j=0;j<n;j++){
            if (symbol==frames[j]){
                flag=1;
                break;
            }
        }

        if (flag==1)
        {
            printf("\nSymbol: %d  Frame: ",symbol);
            for (int j=0;j<n;j++)
                printf("%d ",frames[j]);
            page_hits+=1;
        }
        else
        {
    
            if (full==0)
            {
                index=(index+1)%n;
                frames[index]=symbol;
                page_miss+=1;
                printf("\nSymbol: %d  Frame: ",symbol);
                for (int j=0;j<n;j++)
                    printf("%d ",frames[j]);

               
                if (i==n-1)
                    full=1;
            }

           
            else
            {
                
                int pos=-1;
                int index=-1;

              
                for(int j=0;j<n;j++)
                {
                   
                    int found=0;
                    for (int k=i+1;k<size;k++)
                    {
                       
                        if (frames[j]==string[k])
                        {
                            found=1;
                            if (pos<k)
                            {
                                pos=k;
                                index=j;
                            }
                            break;
                        } 
                    }
                   
                    if (found==0)
                    {
                        pos=size;
                        index=j;
                    }
                }

                
                frames[index]=symbol;

                printf("\nSymbol: %d  Frame: ",symbol);
                for (int j=0;j<n;j++)
                    printf("%d ",frames[j]);
            }
        }
    }
  
    printf("\nTotal Page faults:  %d",page_miss);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int no_frames;
    scanf("%d",&no_frames);
    int size=n;
    optimal(arr,no_frames,size);
    return 0;
}
