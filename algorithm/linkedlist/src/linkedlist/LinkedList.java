package linkedlist;

public class LinkedList {
	private Node head;
	//private Node tail;
	public void insertAtHead(int data)
	{
		Node newNode=new Node(data);
		newNode.setNextNode(this.head);
		this.head=newNode;
	}
	
	public void deleteFromHead()
	{
		this.head=this.head.getNextNode();
	}
	
	public Node find(int data)
	{
		Node curr=this.head;
		while(curr!=null)
		{
			if(curr.getData()==data)
			{
				return curr;
			}
			curr=curr.getNextNode();
		}
		return null;
	}
	
//	public void insertAtTail(int data)
//	{
//		Node newNode=new Node(data);
//		if(tail==null)
//		{
//			tail=newNode;
//			tail.setNextNode(null);
//		}
//		else
//		{
//			tail.setNextNode(newNode);
//			tail=newNode;
//			tail.setNextNode(null);
//		}
//	}
	
	public int length()
	{
		int count=1;
		Node curr=this.head;
		while(curr.getNextNode()!=null)
		{
			curr=curr.getNextNode();
			count++;
		}
		return count;
	}
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		Node curr=this.head;
		String result="";
		while(curr!=null)
		{
			result+=curr.toString();
			curr=curr.getNextNode();
		}
		return result;
	}
	
	
}
