#include <iostream>
using namespace std;

int main (){
	double bayam, ketumbar, garam, gula, kol, TotalBelanja;
	char lagi;
	
	system("cls");

	do{
	cout<<"|=========================================================|"<<endl;
	cout<<"|                     BARANG BELANJAAN                    |"<<endl;
	cout<<"|=========================================================|"<<endl;
	cout<<"|             1. Sayur Bayam = Rp. 5.000/ikat             |"<<endl;
	cout<<"|               2. Ketumbar = Rp. 1.000/biji              |"<<endl;
	cout<<"|                 3. Garam = Rp. 10.000/kg                |"<<endl;
	cout<<"|                 4. Gula = Rp. 12.500/kg                 |"<<endl;
	cout<<"|               5. Sayur Kol = Rp. 1.000/buah             |"<<endl;
	cout<<"|=========================================================|"<<endl;
	cout<<endl;
	cout<<"Jumlah Sayur Bayam Yang Di Beli (ikat) : ";
	cin>>bayam;
	cout<<"Jumlah Ketumbar Yang Di Beli (biji) : ";
	cin>>ketumbar;
	cout<<"Jumlah Garam Yang Di Beli (kg) : ";
	cin>>garam;
	cout<<"Jumlah Gula Yang Di Beli (kg) : ";
	cin>>gula;
	cout<<"Jumlah Sayur Kol Yang Di Beli (buah) : ";
	cin>>kol;
	
	TotalBelanja = bayam*5000 + ketumbar*1000 + garam*10000 + gula*12500 + kol*1000;
	
	cout<<endl;
	cout<<"Total Belanjaan Nano adalah Rp. "<<TotalBelanja;

	cout << "\n \n Apakah anda ingin mengulang lagi (Y/N) : ";
        cin >> lagi;

        lagi = tolower(lagi);

        if (lagi != 'y') {
            cout << "\n \n Terima Kasih Sudah Berkunjung \n \n";
            break; 
        }

    } while (lagi == 'y');
	
	return 0;
}
