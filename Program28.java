import java.util.Scanner;

class Program28
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks = 0.0f; 

        scanner = new Scanner(System.in);

        System.out.println("Enter your name :");
        sName = scanner.next();     //Exception if full name is entered

        System.out.println("Enter your age : ");
        iAge = scanner.nextInt();

        System.out.println("Enter your Marks : ");
        fMarks = scanner.nextFloat();

        System.out.println("Welcome " + sName);        
        System.out.println("Your Age is : " + iAge);
        System.out.println("Your Marks is : " + fMarks);
    }
}