#include <bits/stdc++.h>
using namespace std;
// bai 2.5
class oto
{
    char maoto[15];
    int giamuamoi;
    int sonamsd;
    double tlkh;
public:
 void nhap();
    void xuat();
};
void oto:: nhap(/* args */)
{
    cout<<" Ma oto :";fflush(stdin); gets(maoto);
    cout<<" gia oto mua moi :";cin>>giamuamoi;
    cout<<" So nam su dung la:";cin>>sonamsd;
    cout<<" Ti le khao hao /nam :";cin>>tlkh;
}
 void oto:: xuat()
{
    cout<<" Ma oto :"<<maoto<<endl;
    cout<<" gia oto mua moi :"<<giamuamoi<<endl;
    cout<<" So nam su dung la:"<<sonamsd<<endl;
     cout<<" Ti le khao hao /nam :"<<tlkh<<endl;
     double giaoto=giamuamoi;
     cout<<" gia mua xe la "<< giaoto-giaoto*tlkh<<endl;
}

int main()
{
    int n;
    cout<<"n=";cin>>n;
    oto *x=new oto[n];
    for (int i = 0; i <n; i++)
    {
       x->nhap();
       cout<<endl;
    }
    for (int i = 0; i <n; i++)
    {
        x->xuat();cout<<endl;
    }
    
    
    
    
    return 0;
}
