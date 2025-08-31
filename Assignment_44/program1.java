import java.util.*;

class Matrix
{
  private int Arr[][];

  public Matrix(int A,int B)
  {
    Arr = new int [A][B]; 
  }
  
  public void Accept()
  {
    int i = 0,j = 0;

    System.out.println("Enter the element of matrix:");
    Scanner sobj = new Scanner(System.in);

    for(i = 0;i<Arr.length;i++)
    {
       for(j = 0;j<Arr[i].length;j++)
       {
        Arr[i][j] = sobj.nextInt();
       }
    }
  }

  public void Display()
  {
    int i = 0,j = 0;

    System.out.println("Elements of the matrix:");
    Scanner sobj = new Scanner(System.in);

    for(i = 0;i<Arr.length;i++)
    {
       for(j = 0;j<Arr[i].length;j++)
       {
         System.out.print(Arr[i][j]+"\t");
       }
       System.out.println();
    }
  }

  public int AddDiagonal()
  {
    int i = 0,j = 0,isum = 0;

    for(i = 0;i<Arr.length;i++)
    {
      for(j = 0;j<Arr[i].length;j++)
      {
        if(i == j)
        {
          isum = Arr[i][j] + isum;
        }
      }
    }
    return isum;
  }
}

class program1
{
  public static void main(String a[])
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter number of rows:");
    int irow = sobj.nextInt();

    System.out.println("Enter number of rows:");
    int icol = sobj.nextInt();

    Matrix mobj = new Matrix(irow, icol);

    mobj.Accept();
    mobj.Display();

    int iret = mobj.AddDiagonal();

    System.out.println("Addition of diagonal element is:"+iret);

    
  }
}
