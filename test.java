import java.util.*;

public class First {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.println("Welcome to Hospital!");
        System.out.println("Choose What kind of disease you have ? \n 1. Cough/Cold/Fever \n 2. Sugar/Stomach ache \n 3. High BP/Low BP/Heart attack ");
        System.out.print("Option: ");
        int n = sc.nextInt();

        if(n==1){
            int count = 0;
            
            System.out.println("Doctor Prescribe general ward for normal condition");
            //String doc = sc.nextLine();
            System.out.print("for how many days = ");
            int days = sc.nextInt();
            //count = days;
            int amt = days*1200;
            sc.nextLine();
            System.out.println("Doctor's checkup round after treatment");
            System.out.println("Choose option according to condition - Cured, bad , Critical \n Doctor report: ");
            String str = sc.nextLine();
            if(str.equals("Cured")){
                System.out.println("Payable amount " + amt + " then you will discharge");
            }
            else if(str.equals("bad")){
                System.out.println("Doctor Prescribe Private ward for emergency condition for how many days = ");
                days = sc.nextInt();
                System.out.println("Payable amount " + (amt + days*2400) + " then you will discharge");
            }
            else if(str.equals("very Critical")){
                System.out.println("Doctor Prescribe ICU ward for severe condition for how many days = ");
                days = sc.nextInt();
                System.out.println("Payable amount " + (amt + days*3600) + " then you will discharge");
            }
            else{
                System.out.println("Invalid");
            }
            
        }
        else if(n==2){
             int count = 0;
            
            System.out.println("Doctor Prescribe Private Ward");
            //String doc = sc.nextLine();
            System.out.print("for how many days = ");
            int days = sc.nextInt();
            //count = days;
            int amt = days*2400;
            sc.nextLine();
            System.out.println("Doctor's checkup round after treatment");
            System.out.println("Choose option according to condition - Cured, bad , Critical \n Doctor report: ");
            String str = sc.nextLine();
            if(str.equals("Cured")){
                System.out.println("Payable amount " + amt + " then you will discharge");
            }
            else if(str.equals("bad")){
                System.out.println("Doctor Prescribe Private ward for emergency condition for how many days = ");
                days = sc.nextInt();
                System.out.println("Payable amount " + (amt + days*2400) + " then you will discharge");
            }
            else if(str.equals("very Critical")){
                System.out.println("Doctor Prescribe ICU ward for severe condition for how many days = ");
                days = sc.nextInt();
                System.out.println("Payable amount " + (amt + days*3600) + " then you will discharge");
            }
            else{
                System.out.println("Invalid");
            }

        }
        else if(n==3){
             int count = 0;
            
            System.out.println("Doctor Prescribe ICU ");
            //String doc = sc.nextLine();
            System.out.print("for how many days = ");
            int days = sc.nextInt();
            //count = days;
            int amt = days*3600;
            sc.nextLine();
            System.out.println("Doctor's checkup round after treatment");
            System.out.println("Choose option according to condition - Cured, bad , Critical \n Doctor report: ");
            String str = sc.nextLine();
            if(str.equals("Cured")){
                System.out.println("Payable amount " + amt + " then you will discharge");
            }
            else if(str.equals("bad")){
                System.out.println("Doctor Prescribe Private ward for emergency condition for how many days = ");
                days = sc.nextInt();
                System.out.println("Payable amount " + (amt + days*2400) + " then you will discharge");
            }
            else if(str.equals("very Critical")){
                System.out.println("Doctor Prescribe ICU ward for severe condition for how many days = ");
                days = sc.nextInt();
                System.out.println("Payable amount " + (amt + days*3600) + " then you will discharge");
            }
            else{
                System.out.println("Invalid");
            }
        }
    }
}