#include<bits/stdc++.h>

using namespace std;

class Car{
	private:
		string brand_;
		int year_;
		
	public:
		Car(string brand, int year){
			brand_ = brand;
			year_ = year;
		}
		
		void display_info(){
			cout<<"Brand: "<<brand_<<endl<<"Year: "<<year_<<endl;
		}
};

int main(){
	Car car1("Toyota", 2020);
	car1.display_info();
	return 1;
}
