#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalc{
    protected:
    float num1, num2;
    public:
    void getNum(){
        cout<<"Enter two numbers: "<<endl;
        cin>>num1>>num2;
    }
    void process1(){
        int a;
        cout<<"\nChoose: "<<endl;
        cout<<"\n1. Addition \n2. Substraction \n3. Multiplication \n4. Division"<<endl;
        cin>>a;

        switch (a)
        {
        case 1:
            cout<<"Addition: "<<num1+num2<<endl;
            break;

        case 2:
            cout<<"Substraction: "<<num1-num2<<endl;
            break;

        case 3:
            cout<<"Multiplication: "<<num1*num2<<endl;
            break;

        case 4:
            cout<<"Division: "<<num1/num2<<endl;
            break;
        
        default:
            cout<<"Invalid input!"<<endl;
            break;
        }

    }
};

class ScientificCalc{
    protected:
    float num3;
    public:
    void getNumber(){
        cout<<"Enter a number: "<<endl;
        cin>>num3;
    }
    void process2(){
        int a;
        cout<<"\nChoose:"<<endl;
        cout<<"\n1. Square Root \n2. Cube Root \n3. Log \n4. Square"<<endl;
        cin>>a;

        switch (a)
        {
        case 1:
            cout<<"Square: "<<sqrt(num3)<<endl;
            break;

        case 2:
            cout<<"Cube Root: "<<cbrt(num3)<<endl;
            break;

        case 3:
            cout<<"Log: "<<log(num3)<<endl;
            break;

        case 4:
            cout<<"Square: "<<(num3*num3)<<endl;
            break;
        
        default:
            cout<<"Invalid input!"<<endl;
            break;
        }

    }
};

class HybridClac : public SimpleCalc, public ScientificCalc{
    public:
    int mode;

    void setProcess(){
        cout<<"\nChoose Mode:"<<endl;
        cout<<"\n1) Simple Calculator \n2) Scientific Calculator"<<endl;
        cin>>mode;

        switch (mode)
        {
        case 1:
            getNum();
            process1();
            break;
        
        case 2:
            getNumber();
            process2();
            break;
        
        default:
            cout<<"Invalid input!"<<endl;
            break;
        }
    }
};

int main(){

    HybridClac calc;
    calc.setProcess();
    
    return 0;
}