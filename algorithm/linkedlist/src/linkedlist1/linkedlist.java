package linkedlist1;

import java.util.*;

public class linkedlist {
	private Node head;
	public linkedlist()
	{
		this.head=null;
	}
	
	public boolean isEmpty()
	{
		return head == null;
	}
	
	
	public void addFirst(int data)
	{
		this.head=new Node(data, this.head);
	}
	
	
	public int getFirst()
	{
		if( head == null) throw new NoSuchElementException();
		{
			return head.getData();
		}
	}
	
	public int removeFirst()
	{
		int tmp= getFirst();
		this.head=this.head.getNext();
		return tmp;
		
	}
	public void addLast(int data)
	{
		if(head == null)
			addFirst(data);
		else
		{
			Node tmp=head;
			while(tmp.getNext()!=null)
			{
				tmp=tmp.getNext();
			}
			tmp.next=new Node(data, null);
		}
	}
	
	public int getLast()
	{
		if(head ==null) throw new NoSuchElementException();
		else
		{
			Node tmp=head;
			while(tmp.next!=null)
			{
				tmp=tmp.next;
			}
			return tmp.data;
		}
	}
	
	public void clear()
	{
		head=null;
	}
	
	public boolean contains(int data)
	{
		for(Node tmp: this)
		{
			if(tmp.data==data)
			{
				return true;
			}
		}
		return false;
	}
	
	public int getData(int pos)
	{
		if (head == null) throw new IndexOutOfBoundsException();
		Node tmp=head;
		for(int i=0;i<pos;i++)
		{
			tmp=tmp.next;
		}
		return tmp.data;
	}
	
	public String toString()
	{
		Node tmp=head;
		String res="";
		while(tmp.next!=null)
		{
			res+=tmp.toString();
			tmp=tmp.next;	
		}
		return res;
	}
	
	public void insertAfter(int pos, int data)
	{
		Node tmp=head;
		for(int i=0;i<pos;i++)
		{
			tmp=tmp.next;
			tmp.next=new Node(data, tmp.next);
		}
	}
	
	public void insertBefore(int pos, int data)
	{
		
	}
	
	public void remove(int pos)
	{
		
	}
	
	public linkedlist copy1()
	{
		
	}
	
	public linkedlist copy2()
	{
		
	}
	
	public linkedlist copy3()
	{
		
	}
	
	public linkedlist reverse()
	{
		
	}
	
	public Iterator iterator()
	{
		return new linkedlistiterator();
	}
	
	private class linkedlistiterator implements Iterator
	{
		private Node next;
		public linkedlistiterator()
		{
			next=head;
		}
		
		public boolean hasNext()
		{
			return next != null;
		}
		
		public int next()
		{
			if(!hasNext())
			{
				int res=next.getData();
				next=next.getNext();
				return res;
			}
		}
	}
	
			
}
