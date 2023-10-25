#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int div,dir,q,r;
	cout<<"Enter the dividened and diviser"<<endl;
	cin>>div>>dir;
	q=div/dir;
	r=div%dir;
	cout<<"quoitent="<<q<<endl;
	cout<<"remainder="<<r<<endl;
	return 0;
}