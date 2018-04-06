using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

using static System.Console;

namespace test_pinvoke
{
    using static Integrate;
    class Program
    {
        static void Main(string[] args) 
        {
            //WriteLine("Hello world\a\r");
            //System.Threading.Thread.Sleep(5000);
            //WriteLine("Hello world\v\a");
            //test_integration();
            test_Dll1();
        }

        static void test_integration()
        {
            double x1, x2, x3, s, int1, int2, int3;
            x1 = root(f1, f3, 4, 8, 0.001);
            WriteLine("Пересечение g(x)=ln(x) с h(x)=-2*x+14 на [4..8]: x1 = {0}\n", x1);
            x2 = root(f2, f3, 3.5, 7, 0.001);
            WriteLine("Пересечение f(x)=1/(2-x)+6 с h(x)=-2*x+14 на [3.5..7]: x2 = {0}\n", x2);
            x3 = root(f2, f1, 2.01, 4, 0.001);
            WriteLine("Пересечение g(x)=ln(x) с f(x)=1/(2-x)+6 на [2..3]: x3 = {0}\n", x3);
            int1 = integral(f1, x3, x1, 0.001);
            WriteLine("Интеграл ln(x) на [x1..x3]: {0}\n", int1);
            int2 = integral(f3, x2, x1, 0.001);
            WriteLine("Интеграл -2*x+14 на [x2..x1]: {0}\n", int2);
            int3 = integral(f2, x3, x2, 0.001);
            WriteLine("Интеграл 1/(2-x)+6 на [x3..x2]: {0}\n", int3);
            s = -int1 + int2 + int3;
            WriteLine("S={0}\n", s);
        }

        static void test_Dll1()
        {
            Dll1.print_int(4);
        }
    }
}
