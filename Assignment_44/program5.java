import java.util.*;

class Matrix {
    private int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements of the matrix:");
        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of the matrix:");
        for (int i = 0; i < Arr.length; i++) {
            for (int j = 0; j < Arr[i].length; j++) {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    public void SwapRows(int row, int col)
    {
        if (row >= 0 && col >= 0 && row < Arr.length  && col < Arr.length)
        {
           int[] temp = Arr[row];
           Arr[row] = Arr[col];
           Arr[col] = temp; 
        }
        System.out.println("Swapped rows " + row + " and " + col);
    }
}

class program5 {
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows:");
        int irow = sobj.nextInt();

        System.out.println("Enter number of columns:");
        int icol = sobj.nextInt();

        Matrix mobj = new Matrix(irow, icol);

        mobj.Accept();
        mobj.Display();

        mobj.SwapRows(0, 1);
        mobj.SwapRows(2, 3);
        mobj.Display(); 
    }
}