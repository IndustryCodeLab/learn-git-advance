import java.util.Scanner;
class Dtypes
{

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        // System.out.println("enter a value");
        // int a = sc.nextInt();
        System.out.println("enter a value");
        char c = sc.nextLine().charAt(0);
        System.out.println("enter a value");
        String s = sc.nextLine();
        System.out.println(c+" "+s);

    }


}