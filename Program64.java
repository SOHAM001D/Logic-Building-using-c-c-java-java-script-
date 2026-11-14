class Program63
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

        for(iCnt = 6; iCnt >= 1; iCnt--)        //infinite loop
        {
            System.out.println("Jay Ganesh...");
        }
    }
}