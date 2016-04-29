package reverse;

public class linkedList {
	public static Node head;
	public static class Node {
		int data;
		Node next;
		public Node(int data)
		{
			this.data=data;
			this.next=null;
		}
	}
	
	public Node reverse(Node n)
	{
		Node prev=null;
		Node curr=n;
		Node next=null;
		while(curr!=null)
		{
			next=curr.next; //current's next is connected to the last line
			curr.next=prev; //reverse order
			prev=curr;//curr.next...
			curr=next;
		}
		n=prev;
		return n; //draw the pic
		
	}
	
	public void printList(Node n)
	{
		while(n!=null)
		{
			System.out.print(n.data+" ");
			n=n.next;
		}
	}
	
	public static void main(String[] args)
	{
		linkedList list=new linkedList();
		list.head=new Node(1);
		list.head.next=new Node(2);
		list.head.next.next=new Node(3);
		list.head.next.next.next=new Node(4);
		list.printList(list.head);
		list.head=list.reverse(list.head);
		list.printList(list.head);
		
	}
}
