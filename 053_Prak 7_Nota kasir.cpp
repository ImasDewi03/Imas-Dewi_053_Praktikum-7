#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	
    int jmlbl, bayar, jumlah[100], harga[100], brglain, total[50];
    float total_semua;
    string namabrg[100];

    cout<<"==============================================\n";
    cout<<"				Program Nota Kasir				 \n";
    cout<<" 		Toko Buku My Universe			 	 \n";
    cout<<"=============================================\n\n";

    cout<<"Masukan Jumlah Beli :";
    cin>> jmlbl; 

    for (int i=0;i<jmlbl;i++){
        cout<<"\nMasukan Barang ke- "<<i+1<<"\n\n";
        cout<<"Nama Barang : ";
        cin>>namabrg[i];

        cout<<"Harga Barang : ";
        cin>>harga[i];
        
        cout<<"Jumlah Barang : ";
        cin>>jumlah[i];
        
        cout<<"Ada barang lain yang dibeli -- maks 5 --(Y/N)? Y";
        cin>>brglain;


        total[i] = jumlah[i]*harga[i];
        total_semua += total[i];
		
    }
        return 0;
}
