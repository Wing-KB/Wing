/*Wing 12
xinchangyong
C++*/
#include <iostream>
#include <string>
#include "new.h"
using namespace std;

int main () {
	wing *wnew = new wing("d", 4, 0);
	wnew->Hi();
	cout << wnew->What() << endl;
	delete wnew;
	return 0;
}