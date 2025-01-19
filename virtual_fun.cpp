#include <iostream>
using namespace std;

class A{
    public:
        void f(){ cout<<"f ka Base"<<endl;}
        virtual void g(){ cout<<"g ka Base"<<endl;}
        virtual void h(){ cout<<"h ka Base"<<endl;}
        void i(){ cout<<"i ka Base"<<endl;}
    
};
class B:public A{
        public:
            void f(){ cout<<"f ka Derived"<<endl;}
            void g(){ cout<<"g Ka Derived"<<endl;}
            void j(){ cout<<"j ka Derived"<<endl;}
};
int main()
{
A *ptr;
ptr=new A;
ptr->f();
ptr->g();
ptr->h();
ptr->i();
delete ptr;
ptr=new B;
ptr->f();
ptr->g();
ptr->j();
    return 0;
}
