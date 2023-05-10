import java.util.Scanner;

class palyndrome {
    public static void main(String[] args) {
      String a=new String();
      Scanner ab= new Scanner(System.in);
      a=ab.nextLine();
      int i,count=0;
      int n=a.length();
      int m;
      
      for(i=0;i<n;i++){
          if(a.charAt(i)==a.charAt(n-1-i)){
              count++;
          }
          else{
              break;
          }
      }
      if(count==n){
          System.out.println("palyndrome");
      }
      else{
            System.out.println("not palyndrome");
      }
    }
}
