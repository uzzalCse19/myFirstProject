#include<bits/stdc++.h>
using namespace std;
class B;
class A{
private:
    int num1=550;
    public:
 friend void operation(A x,B y);

};
class B{
private:
    int num2=500;
public:
 friend void operation(A x,B y);
};
void operation(A x,B y){
 if(x.num1>y.num2) cout<<x.num1<<endl;
 else cout<<y.num2<<endl;

}
int main(){
 A x;
 B y;
 operation(x,y);
return 0;
}
