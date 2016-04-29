package linkedlist;

public class LinkedListDemo {
	public static void main(String[] args)
	{
		LinkedList list=new LinkedList();
//		list.insertAtHead(10);
//		list.insertAtHead(2);
//		list.insertAtHead(3);
//		list.insertAtHead(4);
//		list.insertAtHead(5);
//		list.insertAtHead(6);
//		list.insertAtHead(11);
		list.insertAtTail(1);
		list.insertAtTail(2);
		list.insertAtTail(3);
		System.out.println(list.toString());
//		list.deleteFromHead();
//		System.out.println(list.toString());
//		System.out.println("The length of list is "+list.length());
//		System.out.println(list.find(4));
	}

}
