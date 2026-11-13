class Program56
{
    public static void main(String A[])
    {
        Iteration iteration = new Iteration();      //created object of Iteration so that we can acces non static method

        iteration.Display();
    }
}

class Iteration
{
    public void Display()
    {
        int iCnt = 0;       //count

        for(iCnt = 1; iCnt <= 6; iCnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    }
}