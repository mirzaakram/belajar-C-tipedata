#include <iostream>

using namespace std;

int main()
{
    string var1 = "ayoo belajar c++";
    string* var2 = &var1; //ini akan mengakses alamat memori yaitu var1 ke dalam var2
    //tanda bintang untuk menandakan tipe data, tanda & menunjukkan untuk mengakses alamat memori dan var1
    cout << var1 << endl;
    cout << var2 << endl;

    return 0;
}
