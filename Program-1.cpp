#include<iostream>
using namespace std;
class Calculator {
public:
    double a,b;
    char s;
    Calculator(double a,double b,char s) {
        this->a = a;
        this->b = b;
        this->s = s;
    }
    void compute() {
        switch(s){
            case '+':
                cout<<"Result: "<<a+b<<endl;
                break;
            case '-':
                cout <<"Result: "<<a-b<<endl;
                break;
            case '*':
                cout <<"Result: "<<a*b<<endl;
                break;
            case '/':
                if(b!=0)
                    cout<<"Result: "<<a/b<<endl;
                else
                    cout<<"Error: Division by zero!"<<endl;
                break;
            default:
                cout<<"Invalid operator!"<<endl;
        }
    }
};
int main() {
    double a, b;
    char s;
    cout << "Enter a, b and operation (+ - * /): ";
    cin >> a >> b >> s;
    Calculator calc(a, b, s);
    calc.compute();
    return 0;
}
