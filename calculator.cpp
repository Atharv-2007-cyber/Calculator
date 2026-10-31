#include<iostream>
using namespace std;

class Calculator
{
    private:
    int a,b,sum;
    public:
    void input()
    {
        cout<<"Enter A and B"<<endl;
    }
    void add()
    {
        input();
        cin>>a>>b;
        sum = a + b;
        cout<<"Addition is "<<sum<<endl;
    }
    void sub()
    {
        input();
        cin>>a>>b;
        sum = a - b;
        cout<<"subtraction is "<<sum<<endl; 
    }
    void mul()
    {
        input();
        cin>>a>>b;
        sum = a * b;
        cout<<"Multiplication is "<<sum<<endl;
    }
    void div()
    {
        input();
        cin>>a>>b;
        sum = a / b;
        cout<<"Divison is "<<sum<<endl;
    }
};
int main()
{
    Calculator calc;
    int n;
    cout<<"---------------Calculator menu-------------"<<endl;
    cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"5.exit"<<endl;
    cin>>n;

    switch (n)
    {
     case 1:calc.add();break;
     case 2:calc.sub();break;
     case 3:calc.mul();break;
     case 4:calc.div();break;
     case 5: cout<<"Exiting from calculator "<<endl;break;
     default:cout<<"invalid choice";
    }  
}