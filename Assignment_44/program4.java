import java.util.*;

class Matrix
 {
    private int Arr[][];

    public Matrix(int A, int B)
     {
        Arr = new int[A][B];
     }

    public void Accept()
     {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < Arr.length; i++)
         {
            for (int j = 0; j < Arr[i].length; j++)
             {
                Arr[i][j] = sobj.nextInt();
             }
        }
    }

    public void Display() 
    {
        System.out.println("Elements of the matrix:");
        for (int i = 0; i < Arr.length; i++) 
        {
            for (int j = 0; j < Arr[i].length; j++) 
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
        
    }

    public void Addcolumn() 
    {
        System.out.println("Sum of each column:");
        for (int j = 0; j < Arr[0].length; j++) 
        {
            int Addition = 0;
            for (int i = 0; i < Arr.length; i++) 
            {
                Addition = Addition + Arr[i][j];
            }
            System.out.println("Column " + j + ": " + Addition);
        }
    }
}

class program4 
{
    public static void main(String a[]) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int irow = sobj.nextInt();

        System.out.println("Enter number of columns:");
        int icol = sobj.nextInt();

        Matrix mobj = new Matrix(irow, icol);

        mobj.Accept();
        mobj.Display();
        mobj.Addcolumn();
    }
}