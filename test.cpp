#include "debug.h"

template<typename T>
void testDbgFunction(const T &t, string expected) {
	ostringstream out;
	out << t;
	assert(out.str() == expected);
}

int main() {
	testDbgFunction(vector<int>{1, 2, 3}, "{1, 2, 3}");
	testDbgFunction(set<int> {1, 2, 3}, "{1, 2, 3}");
	testDbgFunction(map<int, int> {{1, 10},
	                               {2, 20}}, "{{1, 10}, {2, 20}}");
	testDbgFunction(pair<int, int>{1, 2}, "{1, 2}");
	testDbgFunction(string{"abc"}, "abc");
	testDbgFunction("abc", "abc");
	testDbgFunction(7, "7");
	testDbgFunction('7', "7");
	testDbgFunction(atomic_int{7}, "7");
	testDbgFunction((void *) 7, "0x7");
	return 0;
}