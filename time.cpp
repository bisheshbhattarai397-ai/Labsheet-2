#include<iostream>
#include<conio.h>
using namespace std;
class Time{
	int hr,min,sec;
	public:
	void gettime(){
		cout<<"Enter the hour,min and sec";
		cin>>hr>>min>>sec;
	}
	void sum(Time t1,Time t2){
	sec=t1.sec+t2.sec;
	min=t1.min+t2.min+(sec)/60;
	sec=sec%60;
	hr=t1.hr+t2.hr+(min)/60;
	min=min%60;
	}
	void display(){
cout << "Time is: " << hr << ":" << min << ":" << sec << endl;
	}
	};
    int main(){
    	Time tt3,tt2,tt1;
    	tt1.gettime();
    	tt2.gettime();
        tt3.sum(tt1,tt2);
    	tt3.display();
    	getch();
    	return 0;
	}
