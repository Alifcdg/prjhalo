#include <iostream>
#include <string>
using namespace std;

//int main() {
  //cout << "PERUBAHAN!";
  //return 0;
//}

//INI ADALAH CODING ARRAY STRING VERSI MANUAL
int main() {
  string nama1, nama2, nama3, nama4, nama5;
  cout << "Masukkan 5 nama sesuai keperluan anda: \n";
  
  cout << "Nama 1: ";
  getline(cin, nama1);
  cout << "Nama 2: ";
  getline(cin, nama2);
  cout << "Nama 3: ";
  getline(cin, nama3);
  cout << "Nama 4: ";
  getline(cin, nama4);
  cout << "Nama 5: ";
  getline(cin, nama5);

  cout << "\nSelamat Datang Di Resort Jungjae Sekeluarga:\n";
  cout << "1. " << nama1 << endl;
  cout << "2. " << nama2 << endl;
  cout << "3. " << nama3 << endl;
  cout << "4. " << nama4 << endl;
  cout << "5. " << nama5 << endl;
  return 0;
}