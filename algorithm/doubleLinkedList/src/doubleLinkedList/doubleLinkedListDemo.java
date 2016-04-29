package doubleLinkedList;

public class doubleLinkedListDemo {
	public static void main(String[] args)
	{
		doubleLinkedList list=new doubleLinkedList();
		list.insertAtHead(1);
		list.insertAtHead(2);
		list.insertAtHead(3);
		System.out.println(list.toString());
		System.out.println(list.length());
		list.deleteHead();
		System.out.println(list.toString());
	}

}
