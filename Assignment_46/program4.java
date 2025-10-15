
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

    for(i = Arr.length;i>0;i--)
    {
      for(j = 0;j<Arr.length;j++)
      {
        System.out.print(i+"\t");
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
