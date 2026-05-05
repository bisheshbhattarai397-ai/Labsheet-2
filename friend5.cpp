#include<iostream>
#include<conio.h>
using namespace std;
class Sample{
	float a,b;
	public:
	void getdata(){
	cout<<"enter two no:";
	cin>>a>>b;
	}
	friend float mean(Sample s);
};
float mean(Sample s){
		return (s.a+s.b)/2.0;

}
int main(){
	Sample s;
	s.getdata();
	float result=mean(s);
	cout<<"result:"<<result;
	getch();
	return 0;
}
