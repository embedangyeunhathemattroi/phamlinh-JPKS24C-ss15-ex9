#include <iostream>
#include <string>
using namespace std;

int main(){
    string gioithieu = "hello word,o";
    cout << gioithieu << endl;
     gioithieu.erase(10, 2);
    cout <<  gioithieu << endl;
    return 0;
}
