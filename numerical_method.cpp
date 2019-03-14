#include <iostream>

using namespace std;

int main() {
	/* Ax + Bx + Cx = D */
	
	int a1, b1, c1, d1;
	int a2, b2, c2, d2;
	int a3, b3, c3, d3;
	
	/* mx + ny = v */
	
	float m1, n1, u1;
	float m2, n2, u2;
	
	float x, y, z;
	
	// values for first equation
	cout<< "Enter the value for first equ a1\n";
	cin>>a1;
	cout<< "Enter the value for first equ b1\n";
	cin>>b1;
	cout<< "Enter the value for first equ c1\n";
	cin>>c1;
	cout<< "Enter the value for first equ d1\n";
	cin>>d1;
	
	// values for second equation
	cout<< "Enter the value for second equ a2\n";
	cin>>a2;
	cout<< "Enter the value for second equ b2\n";
	cin>>b2;
	cout<< "Enter the value for second equ c2\n";
	cin>>c2;
	cout<< "Enter the value for second equ d2\n";
	cin>>d2;
	
	// values for third equation
	cout<< "Enter the value for third equ a3\n";
	cin>>a3;
	cout<< "Enter the value for third equ b3\n";
	cin>>b3;
	cout<< "Enter the value for third equ c3\n";
	cin>>c3;
	cout<< "Enter the value for third equ d3\n";
	cin>>d3;
	
	
	 m1 = (c1*a2)-(c2*a1);
	 n1 = (c1*b2)-(c2*b1);
	 u1 = (c1*d2)-(c2*d1);
	 
	 m2 = (c2*a3)-(c3*a2);
	 n2 = (c2*b3)-(c3*b2);
	 u2 = (c2*d3)-(c3*d2);
	 
	 
	 x = ((n1*u2) - (n2*u1)) / ((n1*m2) - (n2*m1));
	 
	 y = (u1-(m1*x)) / n1;
	 
	 z = (d1 - (a1*x) - (b1*y)) / c1;
	 
	 
	// check
	
	cout<<a1;cout<<"x"
	
	cout<< "x = "; cout<<x; cout<< ", ";
	cout<< "y = "; cout<<y; cout<< ", ";
	cout<< "z = "; cout<<z; cout<< ", ";
	 
	 
	 
	return 0;
}
