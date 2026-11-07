import java.util.Scanner;

class Program58filter
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
        int iCnt = 0;

        // Input Filter
        if(iNo <= 0)
        {
            System.out.println("Invalid input");
            return ;
        }

        for(iCnt = 1; iCnt<= iNo; iCnt++)
        {
            System.out.println("Jay Ganesh...");
        }

    }

}
