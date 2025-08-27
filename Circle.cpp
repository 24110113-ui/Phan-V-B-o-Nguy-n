#include<bits/stdc++.h>

using namespace std;

double PI = 3.14;

class Circle{
    private:
	double radius_;
	string color_;
		
	public:
		Circle(double radius, string color){
			radius_ = radius;
			color_ = color;
		}
		
		bool validradius(){
			return radius_>0;
		}
		
		double circumference(){
			return 2 * PI * radius_;
		}
		
		double area(){
			return PI * radius_ * radius_;
		}
		
		void showcolor(){
			cout<<"Mau cua hinh tron: "<<color_<<endl;
		}
};

int main(){
	double r;
	cout<<"Nhap ban kinh hinh tron: ";
	cin>>r; cout<<endl;
	string c;
	cout<<"Nhap mau cua hinh tron: ";
	cin>>c; cout<<endl;
	Circle circle1(r, c);
	if(!circle1.validradius()){
		cout<<"Ban kinh khong hop le"<<endl;
	}
	cout<<"Chu vi hinh tron: "<<circle1.circumference()<<" don vi"<<endl;
	cout<<"Dien tich hinh tron: "<<circle1.area()<<" don vi vuong"<<endl;
	circle1.showcolor();
}
