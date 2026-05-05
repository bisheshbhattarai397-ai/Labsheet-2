#include<iostream>
#include<conio.h>
using namespace std;
class Private{

class P1{private:
	int a;
	friend int show(P1 p);
};
public:
friend int show(P1 p){
 return a;
}
class P2{private:
	int b;
	friend int sh(P2 pp);
};
public:
	friend int sh(P2 pp){
	return b; 
	}
};
float sum(Private p){
	return P1+P2;
}
	int main(){
	Private p,P1,P2,P3;
		P1.int show(p);
		P2.int sh(pp);
	result=	P3.sum(p);
	
	cout<<"Result:"<<result<<endl;
	}
