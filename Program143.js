function checkEven(iNo)
{
    if(iNo % 2 == 0)
    {
        console.log("even number");
    }
    else
    {
        console.log("Odd number");
    }
}

function main()
{
    let iValue = 10;

    checkEven(iValue);
}

main()