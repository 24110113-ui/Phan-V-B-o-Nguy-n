#include<bits/stdc++.h>

using namespace std;

class Rectangle{
	private:
		int width_;
		int height_;
	
	public:
		Rectangle(int width, int height){
			width_ = width;
			height_ = height;
		}
		
		int calculateArea(){
			return width_ * height_;
		}
};

int main(){
	Rectangle rect1(5, 10);
	cout<<"Area: "<<rect1.calculateArea()<<endl;
}
