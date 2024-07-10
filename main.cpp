#include <iostream>
#include "myfirstclass.h"
using namespace std;

int main()
{
   myFirstClass ob;
   myFirstClass *p=&ob;
   p->display();
    return 0;
}
