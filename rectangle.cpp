#include<iostream>. 
using namespace std;

class Rectangle{


	public:
		double length;
		double width;
		
			double Area()
			{
				return length*width;
				
			}
			 double Perimeter()
			 {
			 	return 2*(length+width);
			 	
			 }
			 void display()
			 {
			 	cout<<"the Area of the Rectangle:"<<Area()<<endl;
			 	cout<<"the Perimeter of the Rectangle:"<<Perimeter()<<endl;	
			 }
			 
			 
};
 
 int main(){
 
 
      Rectangle rect1,rect2;
      rect1.length =3;
      rect2.width=6;
	  
	  rect2.length=2;
	  rect2.width=4;
	  
	  
	  
	  cout<<"Rectangle 1:"<<endl;
	  rect1.display();
	  
	  cout<<endl;
	  
	  cout<<"Rectangle 2:"<<endl;
	  rect2.display();
	  
	  	  
 }
 
 
 
