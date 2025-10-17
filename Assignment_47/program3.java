
import java.util.*;
class Matrix
{
  private int Arr[][];

  public Matrix(int A,int B)
  {
    Arr = new int[A][B];
  }

  public void  Pattern()
  {
    int i = 0,j = 0;
    int icount = 0;

    for(i = 0;i<Arr.length;i++)
    {
      for(j = Arr[i].length;j >= 1;j--)
      {
         System.out.print(j+"\t");
      }
      System.out.println();
    }
    
  }
}
class program3
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

    mobj.Pattern();

  }

}
