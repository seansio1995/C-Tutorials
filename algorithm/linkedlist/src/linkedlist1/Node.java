package linkedlist1;

public class Node {
	public int data;
	public Node next;
	public Node(int data, Node next)
	{
		this.data=data;
		this.next=next;  //constructors
	}
	
	public int getData()
	{
		return this.data;
	}
	
	public Node getNext()
	{
		return this.next;
	}
	
	public String toString()
	{
		return this.data+" ";
	}
}
