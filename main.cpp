#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int dim;
    cin >> dim;
    float array[dim];
    for (int i=0; i<dim ; i++){
        cin >> array[i];
    }
    float ris= max (dim,array);
    cout << ris << endl;
    return 0
    }
