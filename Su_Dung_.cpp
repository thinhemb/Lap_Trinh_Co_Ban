#include <iostream>
#include<string>
#include<string.h>
#include<fstream>
using namespace std;

int main()
{
    char str[100];
    fstream infile("Instring.txt");
    fstream outfile("Outstring.txt");
    infile>>str;
    cout<<str<<endl;
    outfile<<" Chuoi vua nhap la: ";
    outfile<<str<<endl;
    outfile.close();
    infile.close();
    return 0;
}
