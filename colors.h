#ifndef COLORS_H
#define COLORS_H

#include <bits/stdc++.h>
using namespace std;

//    usage: cout << ascii::red << "red text" << ascii::def << endl;
namespace ascii {
	struct Color {
		string modifier;

//    modifier:
//    "30 + <int>" for usual colors or
//    "30 + <int>;1" for bright colors
		Color(const string &modifier) : modifier(modifier) {}

		friend ostream &operator<<(ostream &out, Color color) {
			return out << "\033[" << color.modifier << "m";
		}
	};

	Color def("0");
	Color black("30;1");
	Color red("31;1");
	Color green("32;1");
	Color yellow("33;1");
	Color blue("34;1");
	Color magenta("35;1");
	Color cyan("36;1");
	Color white("37;1");

	template<typename T>
	struct Colored {
		T t;
		ascii::Color color;

		Colored(T t, ascii::Color color) : t(t), color(color) {}
	};

	template<typename T>
	ostream &operator<<(ostream &out, Colored<T> colored) {
		return out << colored.color << colored.t << ascii::def;
	}
}

template<typename T>
ascii::Colored<T> colored(T t, ascii::Color color) {
	return ascii::Colored<T>(t, color);
}

#endif