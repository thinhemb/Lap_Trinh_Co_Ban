#include <bits/stdc++.h>
using namespace std;
class RECTANGLE
{
private:
    int dai;
    int rong;
public:
    void nhap();
    void ve();
    void dientich();
    void chuvi();
};

void RECTANGLE::nhap()
{
    cout<<" chieu dai= ";cin>>dai;
    cout<<" chieu rong=";cin>>rong;
}
void RECTANGLE::ve()
{
    for (int i = 0; i< dai; i++)
    {   
        for (int j = 0; j <rong; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"\n";
}
void RECTANGLE::dientich()
{
    cout<<" dien tich hcn la: "<<dai*rong<<"\n";
}
void RECTANGLE::chuvi()
{
    cout<<" chu vi hcn la: "<<(dai+rong)*2<<"\n";
}
int main()
{
    RECTANGLE x;
    x.nhap();
    x.ve();
    x.dientich();
    x.chuvi();

    return 0;
}
