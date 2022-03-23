#include <iostream>
#include <fstream>
using namespace std;

void display()
{
	cout << "Selamat datang di kedai ayam kota X\n";
	cout << "Daftar harga \n1. Ayam goreng\tRp. 17.000\n2. Ayam bakar\tRp.21.000";
}
int tot(int a,int b)
{
	int juml;
	switch(a)
	{
		case 1:
			{
				juml=17000*b;
				break;
			}
		case 2:
			{
				juml=21000*b;
				break;
			}
	}
	return juml;
}

void struk()
{
	
}

int main()
{
	int menu,jumlah,total,sebdis,harmen;
	string nama;
	
	display();
	cout << "\nSilahkan masukkan menu yang ingin anda pesan : ";
	cin >> menu;
	switch (menu)
	{
		case 1:
			{
				nama = "Ayam Goreng";
				harmen = 17000;
				break;
			}
		case 2:
			{
				nama = "Ayam Bakar";
				harmen = 21000;
				break;
			}
	}
	cout << "Masukkan jumlah pesanan yang anda inginkan : ";
	cin >> jumlah;
	
	total += tot(menu,jumlah);	
	if (total > 45000)
	{
		cout << "\n\nKarena total anda melebihi Rp. 45000 maka anda mendapatkan Diskon sebesar 10% :3";
		cout << "\nSebelum diskon : Rp."<< total;
		sebdis = total;
		sebdis = (total*0.1);
		total = total - (total *0.1);
		cout << "\nTotal Harga setelah diskon 10% = Rp."<< total;
		cout << "\nYEY anda hemat : Rp."<<sebdis;
		cout << "\nStruk anda akan kami cetak";
		
	}
	else 
	{
		cout << "Total Harga = Rp."<< total;
		cout << "\nStruk anda akan kami cetak";
	}
	
	ofstream kasir;
	kasir.open("Struk.txt");
	kasir<< "\n========================================================";
	kasir << "\n\t\tKedai Ayam Kota X				   ";
	kasir<< "\n========================================================";
	kasir << "\nNama Menu 				Harga			\n";
	kasir << nama << "\t\t\t\t" << "Rp."<<harmen;
	kasir<< "\n========================================================";
	kasir << "\nTotal \t\t\t\t\tRp."<< total;
	kasir<< "\n===================Terima Kasih=========================";
	return 0;
	
	
}
