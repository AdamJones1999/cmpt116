#include <iostream>

using namespace std;

class Fraction
{
public:
	
	/*constructor*/
	
	//makes default fraction
	Fraction () {
		num = 0;
		denom = 1;
	}
	//initializes the fraction
	Fraction (int n, int d) {
		num = n;
		denom = d;
	}
	
	/*methods*/
	void print() {
		cout << num << "/" << denom << "\n";
	}
	//assigns input values to the class variables n and d
	void assign(int n, int d) {
		n = num;
		d = denom;
	}
	
	int numerator() {
		return num;
	}
	
	int denominator() {
		return denom;
	}	
	
	bool isWhole() {
		if (num % denom == 0) {
		return true;
		}
		else {
			return false;
		}
	}
	
	//this is what is causing my ouptuts to not work i think
	void reduce() {
		int temp = num;
		num = num / GCD(num, denom);
		denom = denom / GCD(temp, denom);
	}
	
	void add(const Fraction &f) {
		//case for if only the fraction f needs to be changed in order for two fractions to have common denominators
		if ( denom == LCM(denom, f.denom) ) {
			num = num + (f.num * (denom / f.denom));
			denom = LCM(denom, f.denom);
		}
		//case for if only the fraction f needs to be changed in order for two fractions to have common denominators
		else if ( f.denom == LCM(denom, f.denom) ) {
			num = f.num + (num * (f.denom / denom));
			denom = LCM(denom, f.denom);
		}
		//case if both fractions need to have denominators changed in order to have common denominator
		else {
			num = ( num * f.denom ) + ( f.num * denom );
			denom = LCM(denom, f.denom);
		}
	}
	
	void subtract(const Fraction &f) {
		//see comments for add method
		if ( denom == LCM(denom, f.denom) ) {
			num = num - (f.num * (denom / f.denom));
			denom = LCM(denom, f.denom);
		}
		else if ( f.denom == LCM(denom, f.denom) ) {
			num = f.num - (num * (f.denom / denom));
			denom = LCM(denom, f.denom);
		}
		else {
			num = ( num * f.denom ) - ( f.num * denom );
			denom = LCM(denom, f.denom);
		}
	}
	
	void multiply(const Fraction &f) {
		num = num * f.num;
		denom = denom *f.denom;
	}
	
	void divide(const Fraction &f) {
		//preform division by inverting one fraction and preforming the inverse operation: multiplication
		num = num * f.denom;
		denom = denom * f.num;
	}
	
private:
	
	int num;
	int denom;
	
	//each pair of integers has a common denom of 1, which is the base case this will reach if the 
	//two arguments share no other common divisor
	int GCD(int n, int d) {
		if (n == 0) {
			return d;
		}
		else if (d == 0) {
			return n;
		}
		else if (n == d) {
			return n;
		}
		else if (n > d) {
			return GCD(n - d, n);
		}
		else {
			return GCD(n, d - n);
		}
	}
	
	//a LCM of two numbers a, b is a*b unless the two numbers have common factors, in which case
	// the LCM is then divided by said GCD
	int LCM(int n, int d) {
		return (n * d) / GCD(n, d);
	}
};

int main() {
  cout << "Enter numerator and denominator for fraction" << endl;
  int n, d;

  cin >> n >> d;

  Fraction a(n,d);

  cout << "You entered: ";

  a.print();
  cout << endl;

  int i, j;
  char option;

  Fraction b;

  cout << "Enter operation to perform: a(dd), s(ubtract), m(ultiply), d(ivide),\ r(educe), q(uit)" << endl;
  cin >> option;

  while (option != 'q') {

    cout << "Enter numerator and denominator for operation " << option << endl;
    cin >> i >> j;

    b.assign(i,j);

    switch(option) { /* switch does a different thing depending on the value of the parameter (option in this case).  The cases 
                             * The cases below represent the scenarios.  For each case other than the final default one, we have to
                             * explicitly break out of the switch statement (i.e., get to the code after the right curly bracket) after
                             * doing what we need to do. */

    case 'a': a.add(b); break;
    case 's': a.subtract(b); break;
    case 'm': a.multiply(b); break;
    case 'd': a.divide(b); break;
    case 'r': a.reduce(); break;
    default: cout << "No match!!";
    }
	
    a.reduce();
    cout << "Result of the operation is: ";
    a.print();
    cout << endl;

  cout << "Enter operation to perform: a(dd), s(ubtract), m(ultiply), d(ivide),\ r(educe), q(uit)" << endl;
  cin >> option;
  }

}



		
			
		
	
	
	
		
		
		
