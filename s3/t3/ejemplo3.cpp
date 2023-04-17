#include <iostream>
#include <math.h>

using namespace std;

template<class T = int>
T raiz(int n){
    T num = n;
    return sqrt(num);
};

int main(){
    cout << raiz<float>(3) << endl; // Resultado: 1.73205
    cout << raiz<int>(3) << endl;   // Resultado: 1
    cout << raiz(5) << endl;        // Resultado: 2
}