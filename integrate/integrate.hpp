#pragma once

extern "C" {
	__declspec(dllexport) double f1(double x);
	__declspec(dllexport) double f2(double x);
	__declspec(dllexport) double f3(double x);
	__declspec(dllexport) typedef double(*tf) (double);
	__declspec(dllexport) double f(double x, tf f1, tf f2);
	__declspec(dllexport) double root(tf f1, tf f2, double a, double b, double eps);
	__declspec(dllexport) double integral(tf f, double a, double b, double eps2);
}





