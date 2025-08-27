#include<bits/stdc++.h>

using namespace std;

class Employee{
	private:
		string name_;
		double salary_;
	
	public:
		Employee(string name, double salary){
			name_ = name;
			salary_ = salary;
		}
		
		void display_info(){
			cout<<"Name: "<<name_<<endl<<"Salary: "<<salary_<<endl;
		}
};

int main(){
	Employee employee1("Alice", 50000);
	employee1.display_info();
	return 1;
}
