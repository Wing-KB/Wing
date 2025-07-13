/*Wing 12
xinchangyong
C++.h*/
#include <iostream>
#include <string>
using namespace std;

class wing {
	public:
		string name;
		int age;
		bool YN;

		wing(string wname, int wage, bool wYN);
		~wing();


		void Hi();
		bool What();
};

wing::wing(string wname, int wage, bool wYN) {
	wage = age;
	wname = name;
	wYN = YN;
}

void wing::Hi() {
	cout << "Hi!" << endl;
}

bool wing::What() {
	if (YN = 0) {
		return 0;
	} else {
		return 1;
	}
}

wing::~wing() {
	cout << "OK" << endl;
}