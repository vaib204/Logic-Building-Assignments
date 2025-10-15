
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
    char ch = 'A';
    char ch1 = 'a';

    for (i = 0;i<Arr.length;i++)
    {
      for(j = 0,ch='A',ch1= 'a';j<Arr[i].length;j++,ch++,ch1++)
      {
         if(i % 2 == 0)
         {
          System.out.print(ch + "\t");
         }
         else
         {
          System.out.print(ch1 + "\t");
         }
      }
      System.out.println();
    }
  }
}
class program462
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