
/**
 * Write a description of class LuckyNumberAlternative here.
 * Finding series of lucky numbers
 * @author (your name) Eeshan Dutta
 * @version (a version number or a date)
 */
import java.util.Scanner;
public class LuckyNumberAlternative
{
    public static void main (String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("\f\nEnter the upper limit of the range :- ");
        int n=sc.nextInt();
        int a[]=new int[n],b[]=new int[n],j,k,i,alter=1,p;
        for(i=0;i<n;a[i]=i+++1);
        for(;alter<a.length;alter++)
        {
            for(p=k=0,j=0;j<a.length;j++)
            {
                if(p<alter)
                {
                    b[k++]=a[j];
                    p++;
                }
                else
                    p=0;
            }
            a = new int[k];
            for(j=0;j<k;j++)
                a[j]=b[j];
            Print(a);
        }
        System.out.print("\nThe lucky numbers are as follows : ");
        Print(a);
    }

    public static void Print(int a[])//to print the Lucky Numbers
    {
        System.out.println("\nThe array content :- ");
        int i;
        for(i=0;i<a.length-1;i++)
        {
            System.out.print(a[i]+",");
        }
        System.out.print(a[i]+".");
    }
}
