package anagram;
import java.util.Scanner;
public class anagram {
	public static boolean isAnagram(String str1, String str2)
	{
		int[] primes=new int[]{2,3,5,7,11,13,17, 19, 23, 29, 31,
		        37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103,
		        107, 109, 113 };
		int pro1=1;
		int pro2=1;
		for(char c: str1.toCharArray())
		{
			int pos=c-97;
			
			pro1*=primes[pos];
		}
		
		for(char c: str2.toCharArray())
		{
			int pos=c-97; //asii code a starts from 97
			
			pro2*=primes[pos];
		}
		
		if(pro1==pro2)
		{
			return true;
		}
		return false;
	}


public static void main(String[] args)
{
//	char c='A';
//	int res=c-65;
//	System.out.println(res);
	Scanner s=new Scanner(System.in);
	System.out.println("Enter string 1: ");
	String str1=s.nextLine();
	System.out.println("Enter string 2: ");
	String str2=s.nextLine();
	
	if(isAnagram(str1,str2))
	{
		System.out.println("They are anagrams");
	}
	else
	{
		System.out.println("They are not anagrams");
	}
  }
}