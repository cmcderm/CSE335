namespace EmployeeList {
	class Employee {

	private:
		string firstName;
		string lastName;
		int hireYear;
		int salary;

	public:
		Employee();

		void getFirstName();

		void getLastName();

		void getHireYear();

		void getSalary();
	};
}
