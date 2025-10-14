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
    int i = 0,j = 0;
    Scanner sobj = new Scanner(System.in);

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
    Scanner sobj = new Scanner(System.in);

   System.out.println("Enter The Values of the Matrix :");
    for(i = 0;i<Arr.length;i++)
    {
     for(j = 0;j<Arr[i].length;j++)
     {
       System.out.print(Arr[i][j]+"\t");
     }
     System.out.println();
    }
  }

  public boolean Sparse()
  {
    int i = 0,j = 0,iMax = 0;
    int Zerocount = 0;
    
    for(i = 0;i<Arr.length;i++)
    {
     for(j = 0;j<Arr[i].length;j++)
     {
      if(Arr[i][j] == 0)
      {
        Zerocount++;
      }
      if( Arr[i][j] > iMax)
      {
        iMax = Arr[i][j];
      }
     }
    }
    return Zerocount == iMax ;
  }
}


class program5
{
  public static void main(String a[])
  {
    Scanner sobj = new Scanner(System.in);
    int irows = 0,icol = 0;
    
    System.out.println("Enter Rows:");
    irows = sobj.nextInt();

    System.out.println("Enter Col:");
    icol = sobj.nextInt();

    Matrix mobj  = new Matrix(irows, icol);

    mobj.Accept();
    mobj.Display();

    boolean bret = mobj.Sparse();

    if(bret == true)
    {
      System.out.println("It is sparse matrix");
    }
    else
    {
      System.out.println("It  is not sparse matrix");
    }
  }

}
