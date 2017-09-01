#include <iostream>
using namespace std;

int main() {
	float c=0.0,m=0.0,k=0.0;
	cout<<"enter length in centimeters:";
	cin>>c;
	m=c/100;
	k=m/1000;
	cout<<"the equivalent length in meter:"<<m<<endl;
	cout<<"the equivalent length in kilometer:"<<k<<endl;

	return 0;
}
