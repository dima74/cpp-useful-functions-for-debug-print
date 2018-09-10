#include "debug.h"

void example1() {
	int foo = 1;
	int bar = 2;
	string str = "abc";
	char ch = '#';
	dbg(foo, bar, str, ch);
}

void example2() {
	vector<int> simpleVector = {1, 2, 3};
	dbg(simpleVector);
}

void example3() {
	map<int, int> simpleMap = {{1, 10},
	                           {2, 20}};
	dbg(simpleMap);
}

void example4() {
	pair<int, int> simplePair = {1, 2};
	dbg(simplePair);
}

void example5() {
	vector<vector<int>> innerVector = {{1, 2, 3},
	                                   {4, 5, 6}};
	dbg(innerVector);
}

int main() {
	example1();
	example2();
	example3();
	example4();
	example5();
	return 0;
}