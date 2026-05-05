#include<iostream>
#include<conio.h>
using namespace std;
class Interest{
	float p;
	int t;
	float r;
	float si;
	public:
	float interest(float pp, int tt,float rr=0.15){
		p=pp;
		t=tt;
		r=rr;
		return si=p*t*r;
	}
	};
	int main(){
	float x;
	int y;
	Interest i;
	cout<<"Enter principle and interest:";
	cin>>x>>y;
    float result=i.interest(x,y);
	cout<<"SI is:" <<result;
	getch();
	return 0;
	}
