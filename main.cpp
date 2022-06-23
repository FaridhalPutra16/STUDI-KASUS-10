#include <iostream>
using namespace std;
class point {
public:
    void data_mhs(){
      string nama[10];
      int nim[10], *y;
      int x, n;

      // Input
      cout << "Program Menghitung jumlah mahasiswa lomba Parmatika\n";
      cout << "---------------------------------------------------\n";
      cout << "Masukan Jumlah Data Mahasiswa : ";
      cin >> n;
      for (int i=1; i<=n; i++){
        cout << endl;
        cout << "No : " << i << endl;
       // cin >> i;
        cout << "Masukan NAMA Mahasiswa : "; cin.ignore();
        getline(cin,nama[i]);
        cout << "Masukan NIM Mahasiswa  : ";
        cin >> nim[i];
        cout << endl;
      }
    cout << endl;

    // Output dan proses
    cout << "----------------------------------------------------------------\n";
    cout << "No\t" << "Nama\t\t\t" << "NIM\t\t\t" << "Alamat NIM\n";
    cout << "-----------------------------------------------------------------\n";
    for (int i=1; i<=n; i++){
      y = &nim[i];
      cout << i << "\t" << nama[i] << "\t\t" << *y << "\t\t\t" << y << "\t";
      cout << endl;
    }
    cout << endl;
    }
};

int main(){
    point a;
    a. data_mhs();
}
