
using namespace std;

#include <iostream>
#include "tests.h"
#include "production.h"
#include "LFDName.h"

int main(int argc, char* argv[])
{
	cout << "" << endl;
	if(tests()) {
		production(argc, argv);
	}
	else {
		cout << "" << endl;
	}
	return EXIT_SUCCESS;
}
