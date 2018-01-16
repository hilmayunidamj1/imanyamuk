#include <iostream>
#include <string>
using namespace std;

class nyamuk{
	public:
		void bersuara(string bunyi);
		int jumlahnyamuk;
		string warnanyamuk;
};

int main()
{
	nyamuk nyamukaedesaegeypti,nyamukculexfatiqans;
	
	nyamukaedesaegeypti.warnanyamuk = "BERCAKHITAMPUTIH";
	nyamukculexfatiqans.warnanyamuk = "COKLAT";
	
	cout << (nyamukaedesaegeypti.warnanyamuk);
	nyamukaedesaegeypti.bersuara("ngettttteettetttt");
	
	nyamukculexfatiqans.bersuara("ngengggggngegggnn");
}

void nyamuk::bersuara(string bunyi){
	cout << "Bunyinya "<<bunyi<< " !!"<<endl;
}
