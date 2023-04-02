//fifo-21BPS1345-AMBATI NIKHIL REDDY
#include<stdio.h>
void fifo(int string[20],int n,int size)
{
   
    int frames[n];
    for (int i=0;i<n;i++){
        frames[i]=-1;
    }
    int index=-1;
    int page_miss=0;
    int page_hits=0;
    for (int i=0;i<size;i++)
    {
        int symbol=string[i];
        int flag=0;

        for(int j=0;j<n;j++)
        {
            if (symbol==frames[j])
            {
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
            index=(index+1)%n;
            frames[index]=symbol;
            page_miss+=1;
            printf("\nSymbol: %d  Frame: ",symbol);
            for (int j=0;j<n;j++)
                printf("%d ",frames[j]);
        }
    }
    printf("\nPage hits: %d",page_hits);
    printf("\nPage misses: %d",page_miss);
}


int main(void)
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
    fifo(arr,no_frames,size);
    return 0;
}
