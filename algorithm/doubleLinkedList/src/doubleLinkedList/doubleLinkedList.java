package doubleLinkedList;

public class doubleLinkedList {
	private Node head;
	
	public void insertAtHead(int data)
	{
		Node newNode=new Node(data);
		newNode.setNextNode(this.head);
		if(this.head!=null)
		{
			this.head.setPrevNode(newNode);
		}
		this.head=newNode;
	}
	
	public int length()
	{
		if(head==null)
			return 0;
		int count=0;
		Node curr=this.head;
		while(curr!=null)
		{
			curr=curr.getNextNode();
			count++;
		}
		return count;
	}
	
	public void deleteHead()
	{
		this.head=this.head.getNextNode();
	}

	@Override
	public String toString() {
		// TODO Auto-generated method stub
		Node curr=this.head;
		String res="";
		while(curr!=null)
		{
			res+=curr.toString();
			curr=curr.getNextNode();
		}
		return res;
	}
	
	
}
