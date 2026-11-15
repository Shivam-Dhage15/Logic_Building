import java.util.Scanner;  // problem based on digit logic

class Digit
{
    public void DisplayDigit()
    {
        int iNo = 9752;
        int iDigit = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;   
            iNo = iNo / 10;                 
            System.out.println(iDigit); 
        }

    }
}

class Program122
{
    public static void main(String A[])
    {
        Digit digit = new Digit();

        digit.DisplayDigit();
    }
}