namespace EmployeeList {
	class Manager : EmployeeList::Employee {

	public:
		vector<EmployeeList::Employee*> group;

		Manager();
	};
}
