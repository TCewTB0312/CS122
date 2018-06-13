#include<iostream>
using namespace std;

class Phanso

{
	private:
		int tuso;
		int mauso;
	public:
		void SetTuso(int ts)
		{
			this->tuso=ts;
		}
		void SetMauso(int ms)
		{
			this->mauso=ms;
		}
		void SetAll(int ts, int ms)
		{
			this->tuso=ts;
			this->mauso=ms;
		}
		
		int getTuso()
		{
			return this->tuso;
		}
		int getMauso()
		{
			return this->mauso;
		}
		//Cong 2 phan so
		Phanso Cong(Phanso b)
		{
			Phanso kq;
			kq.SetTuso(this->tuso*b.getMauso()+this->mauso*b.getTuso());
			kq.SetMauso(this->mauso*b.getMauso());
			return kq;
		}
		//cong 1 ps voi 1 so nguyen
		Phanso Cong(int n)
		{
			Phanso kq;
			kq.SetTuso(this->tuso*n+this->mauso);
			kq.SetMauso(this->mauso);
			return kq;
		}
		// tru 2 phan so
		Phanso Tru(Phanso b)
		{
			Phanso kq;
			kq.SetTuso(this->tuso*b.getMauso()-this->mauso*b.getTuso());
			kq.SetMauso(this->mauso*b.getMauso());
			return kq;
		}
		// Tru 1 ps voi 1 so nguyen
		Phanso Tru(int n)
		{
			Phanso kq;
			kq.SetTuso(this->tuso*n-this->mauso);
			kq.SetMauso(this->mauso);
			return kq;
		}
		//nhan 2 phan so
		Phanso Nhan(Phanso b)
		{
			Phanso kq;
			kq.SetTuso(this->tuso*b.getTuso());
			kq.SetMauso(this->mauso*b.getMauso());
			return kq;
		}
		// nhan 1 ps voi 1 so nguyen
		Phanso Nhan(int n)
		{
			Phanso kq;
			kq.SetTuso(this->tuso*n);
			kq.SetMauso(this->mauso);
			return kq;
		}
		// toi gian phan so
		int UCLN (int a, int b)
		{
			while(a!=b)
			{
				if(a>b)
					a=a-b;
				else
					b=b-a;
			}
			return a;
		}
		Phanso ToiGian()
		{
			Phanso kq;
			int uc=UCLN(this->tuso,this->mauso);
			kq.SetTuso(this->tuso/uc);
			kq.SetMauso(this->mauso/uc);
			return kq;
		}
};
int main()
{
	
	Phanso a,b,c;
	int e,f,g,h;
	cout<<"tu so cua a la: "; cin>>e;
	cout<<"mau so cua a la: "; cin>>f;
	cout<<"tu so cua b la: "; cin>>g;
	cout<<"mau so cua b la: "; cin>>h;
	a.SetAll(e,f);
	b.SetAll(g,h);
	
	Phanso kq=a.Cong(b);
	c=kq.ToiGian();
	cout<<c.getTuso()<<"/"<<c.getMauso()<<endl;

}