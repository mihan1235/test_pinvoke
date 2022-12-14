// Dll1.cpp: определяет экспортированные функции для приложения DLL.
//

#include <cstdio>
#include "Dll1.hpp"

struct A {
	int a;
	int* b;
};

A obj;

void print_int(int a) {
	obj.a = a;
	printf("print_int %i\n", obj.a);
}

void print_int_pointer(int* a) {
	obj.b = a;
	printf("print_int %i\n", obj.b);
}

char* make_string() {
	char* str = new char[15];
	return str;
}

int delete_str(char* str) {
	if (str != nullptr) {
		printf("str: [%s]\n", str);
		delete str;
		return 0;
	}
	return 1;
}
