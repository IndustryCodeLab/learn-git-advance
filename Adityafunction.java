import java.util.Scanner; 

public class Adityafunction{

    static double sum(int n)
    {
        int sum=0;
        for(int i=1; i<=n; ++i)
        {
            sum+=i;
        }
        return sum;
    } 
    public static void main(String [] args)
    {
        Scanner objScanner = new Scanner(System.in); 

        System.out.print("enter n natural numbers = ");
        int a=objScanner.nextInt();
        System.out.println(sum(a));
    }
}