#include <iostream>

using namespace std;

string products[6][2] = {
    {
        "Nasi goreng",
        "11000"
    }, {
        "Mie Goreng",
        "12000"
    }, {
        "Bihun",
        "15000"
    }, {
        "Es Jeruk",
        "5000"
    }, {
        "Es Teh",
        "4000"
    }, {
        "Aqua",
        "2000"   
    }
};

int productCount() {
    return sizeof(products)/sizeof(products[0]);
}

int main() {
    cout<<"--------------------------------------"<<endl;
    cout<<"|         Warung Maspirman           |"<<endl;
    cout<<"--------------------------------------"<<endl;
    for (int i = 0; i < productCount(); i++) {
        cout << i+1 << ". ";
        cout << products[i][0] << " ";
        cout << "Harga: Rp. " << products[i][1] << endl;
    }
    cout << "--------------------------------------" << endl;
    
    int choose;
    int amount;
    cout << "Pilih nomor menu: ";
    cin >> choose;
    cout << "Jumlah barang yang di beli : ";
    cin >> amount;
    
    cout << endl << "Beli " << amount << " " << products[choose-1][0];
    cout << " Total belanja = Rp." << stoi(products[choose-1][1]) * amount << endl;
    
    return 0;
}
