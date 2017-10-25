#include<bits/stdc++.h>

/*
Trong gio toan hoc o truong hoc ve tinh chat chia het cua cac so.De dien giai ve tinh chia het,
giao vien viet len bang cac so nguyen tu 1->N vao cac nhom rieng biet.Trong do neu mot so ma chia het cho
so khac thi 2 so do phai nam o hai nhom khac nhau.vi du: N = 10, ta co 4 nhom:
N1: 1
N2: 2,7,9
N3: 3,4,10
N4: 5,6,8
vi rang moi so dieu chia het cho 1 ne luon co mot nhom chi chua so 1.nhung cac nhom con lai co the phan theo 
nhieu cach khac nhau.Ban can chi ra so luong it nhat cac nhom sao cho co the phan chia cac so tu 1 den N theo 
cach giao vien toan.
Dau vao: so nguyen duong N< 10^5, dau ra: so nhom it nhat.
vi du
input: 10
output: 4
*/
using namespace std;

int countDiv(int n)
{
	int count =1;
	for(int i =2;i<=n;++i)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	return count;
}
void maxDiv(int n)
{
	int temp =0;
	while(n){
		temp = max(temp,countDiv(n));
		n--;
		
	}
	cout<<temp;
	
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin>>n;
  // maxDiv(n);
  cout<<countDiv(n);
   return 0;
}

