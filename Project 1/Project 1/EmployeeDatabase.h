class EmployeeDatabase {

protected:
        vector<Employee*> database;

public:
        EmployeeDatabase();

        void AddRecord();
        void DisplayRecords();
};