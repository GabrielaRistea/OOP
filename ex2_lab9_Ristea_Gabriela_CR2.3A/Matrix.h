#pragma once
#include<iostream>
#include <vector>
using namespace std;

template <typename T>
class Matrix 
{
private:
    vector<vector<T>> data;

public:
    Matrix(const vector<vector<T>>& input_data) : data(input_data) {}

    void display() const 
    {
        for ( int i = 0; i < data.size(); i++) 
        {
            for (int j = 0; j < data[i].size(); j++) 
            {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix<T> multiply(const Matrix<T>& other) const
    {
        if (data[0].size() != other.data.size())
        {
            cout << "Dimensiuni incorecte pentru înmulțirea matricelor";
        }

        vector<vector<T>> result(data.size(), vector<T>(other.data[0].size(), 0));
        for (int i = 0; i < data.size(); i++)
        {
            for (int j = 0; j < other.data[0].size(); j++)
            {
                for (int k = 0; k < other.data.size(); k++)
                {
                    result[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return Matrix<T>(result);
    }

    Matrix<T> power(int exponent) const 
    {
        if (exponent == 0) 
        {
            vector<vector<T>> identity(data.size(), vector<T>(data.size(), 0));
            for (int i = 0; i < data.size(); i++) 
            {
                identity[i][i] = 1;
            }
            return Matrix<T>(identity);
        }
        else if (exponent == 1) 
        {
            return *this;
        }
        else 
        {
            Matrix<T> result = *this;
            for (int i = 1; i < exponent; i++) 
            {
                result = result.multiply(*this);
            }
            return result;
        }
    }

    
};


