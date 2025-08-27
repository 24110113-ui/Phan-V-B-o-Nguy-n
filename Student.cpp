#include<bits/stdc++.h>

using namespace std;

class Student{
	private:
		string name_;
		double grade_;
		
	public:
		Student(string name, double grade){
			name_ = name;
			grade_ = grade;
		}
		
		void display_info(){
			cout<<"Name: "<<name_<<endl<<"Grade: "<<grade_<<endl;
		}
};

int main(){
	Student student1("John", 8.5);
	student1.display_info();
	return 1;
}
