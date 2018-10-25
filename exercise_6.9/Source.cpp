#include <iostream>
#include <cmath>

using namespace std;

void powers(int x, double &recip, double &square, double &cube){
    recip = (double) 1/x;
    square = (double) pow(x,2);
    cube = (double) pow(x,3);

}
int main(){

    int n;
    double recip;
    double square;
    double cube;
    cout << "Enter a positive integer: " ;
    cin >> n;
    
    powers(n, recip, square, cube);
    cout << " Reciprocal: " << recip << "   " ;
    cout << "Square: " << square << "   ";
    cout << "Cube: " << cube << "   "<< endl;

    return 0;
}