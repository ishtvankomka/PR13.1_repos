#include "dod.h"
#include "var.h"
using namespace nsVar;
void nsDod::dod()
{
    double R = (2 * n - 1.) / ((2 * n + 1.) * (x * x));
    a *= R;
}
