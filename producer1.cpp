#include<iostream>
#include<string>
using namespace std;

class Copy{
	public :
	int j,k,l;
	char point[100];
	
	Copy(int j,int k){
		this->j = j;
		this->k = k;
		cout<<" J = "<<j<<endl<<" K = "<<k<<endl;
	}
	Copy(Copy &n)
	{
		this->j = n.j;
		this->k = n.k;
		cout<<" j = "<<j<<endl<<" k = "<<k<<endl;
		
	}
	
	
};

int main(){
	Copy c(25,50);
	Copy d(c);
	
	Copy e(10,20);
	Copy n1 = e;
	return 0;
}

