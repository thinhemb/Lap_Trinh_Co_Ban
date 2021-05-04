#include<bits/stdc++.h>
using namespace std;
int a[8]={0};
bool Ok(int x2,int y2)
{
    //kiểm tra cách đặt có thỏa mãn không
    for(int i = 1; i < x2 ;i++)
        if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2) )
            return false;
    //Nếu kiểm tra hết các trường hợp vẫn không sai thì trả về true
    return true;
}
void output(int n)
{
    //in ra một kết quả
    for(int i=1;i<=n;i++)
       cout<<a[i]<<" ";
   cout<<endl<<endl;
}
void Backtraching(int i)
{
    for(int j = 1;j<=8;j++)
	{
        // thử đặt quân hậu vào các cột từ 1 đến n
        if(Ok(i,j))
		{
            //nếu cách đặt này thỏa mãn thì lưu lại vị trí
            a[i] = j;
			//nếu đặt xong quân hậu thứ n thì xuất ra một kết quả
            if(i==8) output(8);
            else
            {
				Backtraching(i+1);
				a[i]=0;
            }
		}
    }
}
int main()
{
	Backtraching(1);


}
