#include <iostream>
#include <exception>
// untuk obyek exeception yang akan digunakan
#include <array>
// untuk obyek array yang akan kita gunakan
using namespace std;
int main () {
    try {
        array<int, 3> data = {3, 5, 7};
        // pesan array integer 3 elemen
        cout << data.at(5) << endl;
        // memanggil array elemen ke 5
    }
    catch (exception& e) {
        // penagkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya 
        memiliki 3 elemen*/
    }
    cout << "Baris Program yang terakhir" << endl;
    /*penanada 2 : bahwa program berjalan tanpa berhenti 
    meskipun terjadi kesalahan*/
    return 0;
}