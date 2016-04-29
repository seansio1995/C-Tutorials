package duplicateCount;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;
public class duplicateCount {
	public static void main(String[] args)
	{
		Map<Character,Integer> map=new HashMap<Character,Integer>();
		Scanner s=new Scanner(System.in);
		System.out.println("Enter a String:");
		String str=s.nextLine();
		for(int i=0;i<str.length();i++)
		{
			char c=str.charAt(i);
			if(map.containsKey(c))
			{
				int count=map.get(c);
				map.put(c, ++count);
			}
			
			else
			{
				map.put(c, 1);
			}
		}
		
		System.out.println("Enter the char occurence you want to know:");
		char c=s.next().charAt(0);
		System.out.println("The occurence of "+c+" is "+map.get(c));
	}

}
