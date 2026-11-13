class Program54
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
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
    }
}