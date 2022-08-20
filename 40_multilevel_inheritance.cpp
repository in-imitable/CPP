#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number()
{
    cout << "The roll number is: " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths, hindi, english, social_sci, science, sanskrit;

public:
    void set_marks(float, float, float, float, float, float);
    void get_marks();
};

void Exam ::set_marks(float m1, float m2, float m3, float m4, float m5, float m6)
{
    maths = m1;
    hindi = m2;
    english = m3;
    social_sci = m4;
    science = m5;
    sanskrit = m6;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths: " << maths << endl;
    cout << "The marks obtained in hindi: " << hindi << endl;
    cout << "The marks obtained in english: " << english << endl;
    cout << "The marks obtained in social_science: " << social_sci << endl;
    cout << "The marks obtained in science: " << science << endl;
    cout << "The marks obtained in sanskrit: " << sanskrit << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "The percentage is: " << (maths + hindi + english + social_sci + science + sanskrit) / 6 << "%" << endl;
    }
};

int main()
{

    int r;
    float m, h, e, ss, s, sk;

    cout << "Enter your Roll Number: " << endl;
    cin >> r;

    cout << "Enter your marks in maths: " << endl;
    cin >> m;

    cout << "Enter your marks in hindi: " << endl;
    cin >> h;

    cout << "Enter your marks in english: " << endl;
    cin >> e;

    cout << "Enter your marks in social-science: " << endl;
    cin >> ss;

    cout << "Enter your marks in science: " << endl;
    cin >> s;

    cout << "Enter your marks in sanskrit: " << endl;
    cin >> sk;

    Result atul;
    atul.set_roll_number(r);
    atul.set_marks(m, h, e, ss, s, sk);
    atul.display_result();

    return 0;
}