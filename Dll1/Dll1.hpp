#pragma once



extern "C" {
	__declspec(dllexport) void print_int(int a);
	__declspec(dllexport) void print_int_pointer(int* a);
	__declspec(dllexport) char* make_string();
	__declspec(dllexport) int delete_str(char* str);
}

