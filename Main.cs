using System;

class MathematicsX
{
    public void Display(int []iArr)
    {
        for(int j = 0; j < iArr.Length; j++)
        {
            if(iArr[j] % 11 == 0)
            {
                Console.Write(iArr[j]+"\t"); 
            }
        }
        Console.WriteLine();
    }
}

class main
{
    public static void Main(string[] args)
    {
        Console.WriteLine("Enter Count of Elements");

        int iSize = Convert.ToInt32(Console.ReadLine());

        int []iElements = new int[iSize];

        if(iElements.Length == 0)
        {
            Console.WriteLine("Unable to allocate memory");

            return;
        }

        Console.WriteLine("Enter "+iSize+" Elements");

        for(int i = 0; i < iSize; i++)
        {
            iElements[i] = Convert.ToInt32(Console.ReadLine());
        }

        MathematicsX mobj = new MathematicsX();

        mobj.Display(iElements);
    }
}