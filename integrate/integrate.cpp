// integrate.cpp: определяет экспортированные функции для приложения DLL.
//

#include "integrate.hpp"

#include <stdio.h>
#include <math.h>

double f1(double x) {
	return log(x);
}

double f2(double x) {
	return 1 / (2 - x) + 6;
}

double f3(double x) {
	return -2 * x + 14;
}



double f(double x, tf f1, tf f2) {
	return f1(x) - f2(x);
}

double root(tf f1, tf f2, double a, double b, double eps) {
	//F(X)=0
	double c;
	while ((b - a)>eps) {
		c = (a + b) / 2;
		if (f(a, f1, f2)*f(c, f1, f2) <= 0) {
			b = c;
		}
		else {
			a = c;
		}
	}
	return (a + b) / 2;
}

/*
* {Integral variant 2}
* Формула трапеций: I  In =  h(0.5F0+F1+F2+...+Fn-1+0.5Fn),
* где Fi = F(a+ih), h=(b-a)/n
*/

double integral(tf f, double a, double b, double eps2) {
	long int n, i;
	double sum, h, h1, x, s1, s2;
	n = 1;
	h = (b - a) / n;
	sum = (f(a) + f(b)) / 2;
	do {
		n = n * 2;
		h1 = h;
		h = h / 2;
		s1 = sum*h1;
		x = a + h;
		for (i = 1; i<n / 2; i++) {
			sum = sum + f(x);
			x = x + h1;
		}
		s2 = sum*h;
	} while (!(fabs(s2 - s1)<eps2));
	return s2;
}


