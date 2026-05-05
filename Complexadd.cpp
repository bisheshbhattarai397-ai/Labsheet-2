#include<iostream>
#include<conio.h>
using namespace std;
class Complex{
float r;
float i;
public:
void getdata(){
	cout<<"Enter real and imaginary parts:"<<endl;
	cin>>r>>i;
}
void add(Complex c1,Complex c2){
r=c1.r+c2.r;
i=c1.i+c2.i;
}
void display(){
cout<<"Complex no is:"<<r<<"+"<<i<<"i"<<endl;
}
};
int main(){
	Complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3.add(c1,c2);
	c3.display();
	getch();
	return 0;
}

