#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int array[10];
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        array[i] = rand();
    }
    cout << "Parzyste" << endl;
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        if(array[i] % 2 == 0) {
            cout << array[i];
            cout << " ";
        }
    }
    cout << "" << endl;
    cout << "Nieparzyste" << endl;
    for(int i = 0; i < sizeof(array) / sizeof(int); i++) {
        if(array[i] % 2 != 0) {
            cout << array[i];
            cout << " ";
        }
    }
    return 0;
}
