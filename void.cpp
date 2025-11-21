#include <iostream>

using namespace std;

void sayHello() {
cout << "Haloo, ini void" << endl;
}
    void sapa(string nama) {
    cout << "Haloo, " << nama << "!" << endl;
}

int main(){
    sayHello();
    sapa("karla");

    return 0;
}
