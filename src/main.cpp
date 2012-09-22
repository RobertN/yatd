#include <iostream>
#include "map.h"
using std::cout;
using std::endl;

int main(int argc, char** argv)
{
	cout << "YATD" << endl;

	Position size = {100, 100};
	Position start = {0, 0};
	Position stop = {0, 100};
	Map map(size, start, stop);

	return 0;
}
