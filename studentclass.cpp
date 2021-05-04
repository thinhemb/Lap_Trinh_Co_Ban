#include <bits/stdc++.h>
using namespace std;
class student
{
        char Masv[10];
        char HoTen[30];
        int tuoi;
        int diem;

public:
   void input_student();
   void output_student();
};

void student::input_student()
{
    cout<<" Ma sv: ";fflush(stdin);gets(Masv);
    cout<<" HoTen: ";fflush(stdin);gets(HoTen);
    cout<<" Tuoi:  ";cin>>tuoi;
    cout<<" diem:  ";cin>>diem;
}

void student::output_student()
{
    cout<<setw(15)<<Masv<<setw(25)<<HoTen<<setw(15)<<tuoi<<setw(10)<<diem<<endl<<endl;
}


int main()
{
    student a,b;
    a.input_student();
    b.input_student();
    a.output_student();
    b.output_student();
    
    
    
    return 0;
}
