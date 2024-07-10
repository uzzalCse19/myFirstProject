#include<iostream>
using namespace std;
class student
{
public:
const int ad_fee;
student(int x)
:ad_fee(x)
{
cout<<ad_fee<<endl;
}
void display()
{
cout<<ad_fee<<endl;
}
};

int main()
{
student s1(5000);
s1.display();
}

