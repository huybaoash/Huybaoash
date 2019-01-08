#include <iostream>
using namespace std;
int main()
{
	int i=0;
	float tienbd,tienmm,tam,lai;
	cout << "Moi nhap tien ban dau:";
	cin >> tienbd;
	cout << "Moi nhap tien mong muon:";
	cin >> tienmm;
	cout << "Moi nhap lai hang nam:";
	cin >> lai;
	tam=tienbd;
	while (tam < tienmm)
	{
		tam= tam+tam*lai/100 ;
		i=i+1 ;
	}
	cout << "So nam can la: " << i ;
	return 0;
}
