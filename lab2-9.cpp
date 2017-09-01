#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int s;
	float pow,a;
	cout<<"enter side of a triangle\n";
	cin>>s;
	pow=pow(3,0.5)/4;
	a=pow*s*s;
	cout<<"the area is="<<a<<endl;

	return 0;
}
