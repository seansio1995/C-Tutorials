package doubleLinkedList;

public class Node {
	private int data;
	private Node prev;
	private Node next;
	
	public Node (int data)
	{
		this.data=data;
		this.prev=null;
		this.next=null;
	}
	
	public int getData()
	{
		return this.data;
	}
	
	public Node getNextNode()
	{
		return this.next;
	}
	
	public Node getPrevNode()
	{
		return this.prev;
	}
	
	public void setData(int data)
	{
		this.data=data;
	}
	
	public void setNextNode(Node n)
	{
		this.next=n;
	}
	
	public void setPrevNode(Node n)
	{
		this.prev=n;
	}

	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return this.data+" ";
	}
	
	
}
