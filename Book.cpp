#include<bits/stdc++.h>

using namespace std;

class Book{
	private:
		string title_;
		string author_;
	
	public:
		Book(string title, string author){
			title_ = title;
			author_ = author;
		}
		
		void display_info(){
			cout<<"Title: "<<title_<<endl<<"Author: "<<author_<<endl;
		}
};

int main(){
	Book book1("C++ Programming", "Bjarne Stroustrup");
	book1.display_info();
	return 1;
}
