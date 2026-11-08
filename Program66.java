import java.util.Scanner;

class Program66
{
    
    public static void main()
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;


        Iteration iteration = new Iteration();

        System.out.println("Enter the Frequency : ");
        iValue = scanner.nextInt();

        iteration.Display(iValue);
    }
}

class Iteration
{
public void Display(int iNo)
    {
        int iCnt = 0;  // default value

        iCnt = 1;  // starting value

        while(iCnt <= iNo)
        {
            System.out.println("--------------");
            System.out.println(iCnt + " Jay Ganesh...");
            System.out.println("--------------");
            iCnt++;
        }

    }

}
