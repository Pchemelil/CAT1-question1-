//137339 Peter Chemelil
//CAT 1 questions 1
#include <iostream>
using namespace std;

int main()
{
	//declaring
	float area, pie, volume, r, h;
	float result;
	char ap;
	pie = 3.141592;
	//computing
	cout << "Enter radius:\n";
	cin>> r;
	cout << "Enter height:\n";
	cin>> h;
	cout << "Enter 'a' to get area or 'v' for volume:\n";
	cin >> ap;
	if (ap=='a') result=2*pie*r*h+2*pie*r*r ; 
	if (ap=='v') result=pie*r*r*h ;
	cout << "\n"<<result ;
    return 0; 
}
