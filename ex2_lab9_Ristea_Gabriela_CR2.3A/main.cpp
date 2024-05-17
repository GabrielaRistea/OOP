#include <iostream>
#include <vector>
#include "Matrix.h"
using namespace std;

int main() {
    
    vector<vector<int>> intMatrixData = { {1, 2}, {3, 4} };
    Matrix<int> intMatrix(intMatrixData);

    cout << "Matricea initiala:" << endl;
    intMatrix.display();

    Matrix<int> intResult = intMatrix.power(2);
    cout << endl << "Matricea la puterea 2:" << endl;
    intResult.display();

    
    vector<vector<double>> fracMatrixData = { {1.5, 2.5}, {3.5, 4.5} };
    Matrix<double> fracMatrix(fracMatrixData);

    cout << endl << "Matricea initiala (numere fractionare):" << endl;
    fracMatrix.display();

    Matrix<double> fracResult = fracMatrix.power(3);
    cout << endl << "Matricea la puterea 3 (numere fractionare):" << endl;
    fracResult.display();

    return 0;
}