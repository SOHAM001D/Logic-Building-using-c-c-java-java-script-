import java.util.Scanner;

class Program62
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;

        Iteration iteration = new Iteration();      //created object of Iteration so that we can acces non static method

        System.out.println("Enter the Freuency : ");
        iValue = scanner.nextInt();

        iteration.Display(iValue);
    }
}

class Iteration
{
    public void Display(int iNo)
    {
        int iCnt = 0;       //count

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.println("=============");
            System.out.println(iCnt + " : Jay Ganesh...");

            // printf("%d Jay Ganesh...\n",iCnt);  for c
            
            System.out.println("=============");
        }
    }
}
