function CheckEven(iNo)
{
    if(iNo % 2 == 0)
    {
        console.log("It is Even Number");
    }
    else
    {
        console.log("It is odd Number");
    }
}

function main()
{
    let iValue = 10;
    CheckEven(iValue);
}

main()