using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace test_pinvoke
{
    class Integrate
    {
        public delegate double tf(double x);
        [DllImport("integrate.dll")]
        static extern public double root(tf f1, tf f2, double a, double b, double eps);
        [DllImport("integrate.dll")]
        static extern public double f1(double x);
        [DllImport("integrate.dll")]
        static extern public double f2(double x);
        [DllImport("integrate.dll")]
        static extern public double f3(double x);
        [DllImport("integrate.dll")]
        static extern public double integral(tf f, double a, double b, double eps2);
    }
}
