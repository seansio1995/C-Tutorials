import java.util.Arrays;
public class EmployeeSorter {
	private Employee[] employees; //initialize array
	public EmployeeSorter (int n)
	{
		this.employees=new Employee[n];
	} //constructor
	
	public void sort()
	{
		for(int i=1;i<employees.length;i++)
		{
			int j=i;
			while(j>=1 && employees[j-1].employeeNumber>employees[j].employeeNumber)
			{
				int tmp=employees[j-1].employeeNumber;
				employees[j-1].employeeNumber=employees[j].employeeNumber;
				employees[j].employeeNumber=tmp;
				j--;
			}
		}
	}




public static void main(String[] args)
{
	EmployeeSorter emp=new EmployeeSorter(4);
	Employee e1=new Employee(1003,"Sean","Lions");
	Employee e2=new Employee(1420,"Jenna","Fargo");
	Employee e3=new Employee(1120,"Lisbon","Tanson");
	Employee e4=new Employee(2100,"Bob","Taxes");
	emp.employees[0]=e1;
	emp.employees[1]=e2;
	emp.employees[2]=e3;
	emp.employees[3]=e4;
	emp.sort();
	
	System.out.println(Arrays.deepToString(emp.employees)); //deepToString convert multiple arrays to string
			}
}
