
#include<iostream>
#include<math.h>
using namespace std;

class sophuc

{
	private:
		int phanthuc;
		int phanao;
	public:
		//set
		void setPhanthuc(int pt)
		{
			this->phanthuc=pt;
		}
		void setPhanao(int pa)
		{
			this->phanao=pa;
		}
		void setall(int pt,int pa)
		{
			this->phanthuc=pt;
			this->phanao=pa;
		}
		//get
		int getPhanthuc()
		{
			return this->phanthuc;
		}
		int getPhanao()
		{
			return this->phanao;
		}
		// cong sophuc
		sophuc cong(sophuc b)
		{
			sophuc kq;
			kq.setPhanthuc(this->phanthuc+b.getPhanthuc());
			kq.setPhanao(this->phanao+b.getPhanao());
			return kq;
		}
		// tru sophuc
		sophuc tru(sophuc b)
		{
			sophuc kq;
			kq.setPhanthuc(this->phanthuc-b.getPhanthuc());
			kq.setPhanao(this->phanao-b.getPhanao());
			return kq;
		}
		// nhan sophuc
		sophuc nhan(sophuc b)
		{
			sophuc kq;
			kq.setPhanthuc(this->phanthuc*b.getPhanthuc()+(this->phanao*b.getPhanao()*(-1)));
			kq.setPhanao(this->phanao*b.getPhanthuc()+this->phanthuc*b.getPhanao());
			return kq;
		}
		// gia tri tuyet doi
		float trituyetdoi()
		{
			float kq=sqrt(this->phanthuc*this->phanthuc+this->phanao*this->phanao);
			return kq;
		}
};
int main()
{
	sophuc a,b;
	int g,h,j,k;
	
	cout<<"nhap phan thuc so thu 1: "; cin>>g;
	cout<<"nhap phan ao so thu 1: "; cin>>h;
	cout<<"nhap phan thuc so thu 2: "; cin>>j;
	cout<<"nhap phan ao so thu 2: "; cin>>k;
	
	a.setall(g,h);
	b.setall(j,k);
	
	sophuc kq=a.cong(b);
	
	cout<<kq.getPhanthuc()<<"+"<<kq.getPhanao()<<"i"<<endl;
	
	float c=a.trituyetdoi();
	cout<<c;
}