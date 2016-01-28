namespace EmployeeList {
	class EmployeeDatabase {

	private:
		vector<EmployeeList::Employee*> database;

	public:
		EmployeeDatabase();

		void AddRecord();

		void DisplayRecords();
	};
}
