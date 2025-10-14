import java.util.*;
class Matrix
{
  private int Arr[][];

  public Matrix(int A,int B)
  {
      Arr = new int[A][B];
  }

  public void Accept()
  {
    Scanner sobj = new Scanner(System.in);
    int i = 0,j = 0;

    System.out.println("Enter The Values of the Matrix :");
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

    System.out.println("Values From The Matrix are :");
    for(i = 0;i<Arr.length;i++)
    {
      for(j = 0;j<Arr[i].length;j++)
      {
         System.out.print(Arr[i][j] + "\t");
      }
       System.out.println();
    }
  }

  public void Transpose()
  {
    int i = 0,j = 0,Transpose = 0;

    System.out.println("Tanspose of matrix");
    for(i = 0;i<Arr.length;i++)
    {
      for(j = 0;j<Arr[i].length;j++)
      {
        System.out.print(Arr[j][i]+"\t");
      }
      System.out.println();
    }
  }
}

class program1
{
  public static void main(String a[])
  {
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter Rows:");
    int irow = sobj.nextInt();

    System.out.println("Enter Column");
    int icol = sobj.nextInt();

    Matrix mobj = new Matrix(irow, icol);

    mobj.Accept();
    mobj.Display();
    mobj.Transpose();
   
  }
}
