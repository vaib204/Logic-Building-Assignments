
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
      for(j = 1 ; j <= Arr[i].length;j++)
      {
         if( j % 2 == 0)
         {
          System.out.print("#" + "\t");
         }
         else
         {
          System.out.print("*" + "\t");
         }
      }
      System.out.println();
    }
    
  }
}
class program4
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
