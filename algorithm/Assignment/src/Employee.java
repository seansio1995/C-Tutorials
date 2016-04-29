
public class Employee {
	public int  employeeNumber;
	public String  firstName;
	public String lastName;
	//public String email;
	
	public Employee (int employeeNumber, String firstName, String lastName)
	{
		this.employeeNumber=employeeNumber;
		this.firstName=firstName;
		this.lastName=lastName;
	}
	
	public String toString()
	{
		return this.firstName+" "+this.lastName+" : "+this.employeeNumber;
	}

}
