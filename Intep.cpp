#include <iostream>
#include<fstream>
#include<math.h>
using namespace std;
bool KTSNT(int n)
{
    if(n<2) return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
    fstream infile("Input.txt");
    //ifs.open("Input.txt");
    fstream outfile("Output.txt");
    size_t n;
    infile>>n;
    int *a=new int[n];
    for (size_t i = 0; i < n; i++)
    {
        infile>>a[i];
    }
  /* for (size_t i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }*/
    cout<<"\n";
    size_t dem=0;
    size_t tong=0;
    for (size_t i = 0; i <n; i++)
    {
        if(KTSNT(a[i])==1)
        {
            dem++;
            tong+=a[i];
            cout << a[i] <<endl;
        }
    }
    outfile<<"\ntrong tep co "<<dem<<" chu so nguyen to";
    outfile<<"\n TBC cac so nguyen to la: "<<float(tong)/dem<<endl;
    cout<<"\ntrong tep co "<<dem<<" chu so nguyen to";
    cout<<"\n TBC cac so nguyen to la: "<<float(tong)/dem<<endl;
    cout<<"\nDone";
    infile.close();
    outfile.close();
    return 0;
}
