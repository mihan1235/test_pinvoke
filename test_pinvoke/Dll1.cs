using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace test_pinvoke
{
    class Dll1
    {
        [DllImport("Dll1.dll")]
        static extern public void print_int(int a);
    }
}
