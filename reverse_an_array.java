import java.util.Scanner;
class printing_array_reverse{
      public static void main(String[] args){
        int n=5;
        int i;
        int a[]=new int[n];
        Scanner ab=new Scanner(System.in);
        for(i=0;i<n;i++){
            a[i]=ab.nextInt();
            
        }
        for(i=n-1;i>=0;i--){
            System.out.print(""+a[i]+"  ");
        }
    
        
    }
    
}
