import java.util.Scanner;
class In{
    public static void main (String args[]){
        System.out.print("enter a number:- ");
        Scanner sc=new Scanner(System.in);
        int a = sc.nextInt();
            // char a = sc.next().charAt(0);
        System.out.print("output is :- "+a);

        //unary pre and post inc nad dec

        System.out.println(++a);
        System.out.println(--a);
        System.out.println(a++);
        System.out.println(a--);

    }
}