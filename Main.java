import java.lang.*;
import java.util.*;

class MathematicsX
{
	public void Display(int iArr[])
	{

		for(int j = 0; j < iArr.length; j++)
		{
			if(iArr[j] % 11 == 0)
			{
				System.out.print(iArr[j]+"\t");
			}
		}
		System.out.println();
	}
}

class Main
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter Count of Elements");
		int iSize = sobj.nextInt();

		int iElements[] = new int[iSize];

		if(iElements.length == 0)
		{
			System.out.println("Unable to Allocate Memory");
			return;
		}

		System.out.println("Enter "+iSize+" Elements");

		for(int i = 0; i < iSize; i++)
		{
			iElements[i] = sobj.nextInt();
		}

		MathematicsX mobj = new MathematicsX();
		mobj.Display(iElements);
	}
}