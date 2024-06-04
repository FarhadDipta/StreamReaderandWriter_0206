#include <iostream>
using namespace std;

int main () {
    try {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah integer maka
        cout << "Pertanyaan tidak akan dieksekusi";
    }
    catch (int a) {
        // blok ini dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        /*jika selain integer maka block ini akan dieksekkusi*/
        cout << "default Pengecualian dieksekusi" << endl;
    }
}