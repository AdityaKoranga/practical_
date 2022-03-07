#include <bits/stdc++.h>
using namespace std;

class Matrix
{
public:
    void transpose(vector<vector<int>> matrix)
    {

        for (int i = 1; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        cout << "The Transpose matrix is: \n";
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }

    void sum(vector<vector<int>> matrix1, vector<vector<int>> matrix2)
    {
        vector<vector<int>> matrix3;
        cout << "The addition of the two matrixes : \n";
        for (int i = 0; i < matrix1.size(); i++)
        {
            vector<int> temp;
            for (int j = 0; j < matrix1[i].size(); j++)
            {
                int var;
                var = matrix1[i][j] + matrix2[i][j];
                temp.push_back(var);
            }
            matrix3.push_back(temp);
        }

        for (int i = 0; i < matrix3.size(); i++)
        {
            for (int j = 0; j < matrix3[i].size(); j++)
            {
                cout << matrix3[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }

    void product(vector<vector<int>> matrix1, vector<vector<int>> matrix2)
    {
        vector<vector<int>> matrix3;
        int sum = 0;
        cout << "The multiplication of the two matrices: \n";

        for (int i = 0; i < matrix1.size(); i++)
        {
            vector<int> temp;
            for (int j = 0; j < matrix2.size(); j++)
            {
                sum = 0;
                for (int k = 0; k < matrix1[i].size(); k++)
                {
                    sum += matrix1[i][k] * matrix2[k][j];
                }
                temp.push_back(sum);
            }
            matrix3.push_back(temp);
        }

        for (int i = 0; i < matrix3.size(); i++)
        {
            for (int j = 0; j < matrix3[i].size(); j++)
            {
                cout << matrix3[i][j] << " ";
            }
            cout << endl;
        }
        system("pause");
    }
};

int main()
{
    Matrix obj;
    int var;
    int x, y;
    cout << "Enter the size of the matrix 1 : ";
    cin >> x >> y;

    vector<vector<int>> matrix1;

    cout << "Enter the matrix1 elements" << endl;
    for (int i = 0; i < x; i++)
    {
        vector<int> temp;
        for (int j = 0; j < y; j++)
        {
            cin >> var;
            temp.push_back(var);
        }
        matrix1.push_back(temp);
    }

    int n, m;
    cout << "Enter the size of the matrix 2 : ";
    cin >> n >> m;
    vector<vector<int>> matrix2;
    cout << "Enter the matrix2 elements" << endl;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            cin >> var;
            temp.push_back(var);
        }
        matrix2.push_back(temp);
    }

    unsigned choice;

    while (1)
    {
        system("cls");
        cout << "Enter 1 to get the Sum of matrix1 and matrix2. \n";
        cout << "Enter 2 to get the Product of matrix1 and matrix2.  \n";
        cout << "Enter 3 to get the Transpose of matrix1 and matrix2.  \n";
        cout << "Enter any other value to exit. \n";
        cin >> choice;

        switch (choice)
        {
        case 1:
            try
            {
                if (x == n && y == m)
                    obj.sum(matrix1, matrix2);
                else
                    throw -1;
            }
            catch (int i)
            {
                cout << "Disobey properties of matrix\n\n";
                system("pause");
            }

            break;

        case 2:
            try
            {
                if (y == n)
                    obj.product(matrix1, matrix2);
                else
                    throw -1;
            }
            catch (int i)
            {
                cout << "Disobey properties of matrix\n\n";
            }

            break;

        case 3:
            unsigned int key;
            cout << "Press 1 for matrix1 and 2 for matrix2 : ";
            cin >> key;

            if (key == 1)
                obj.transpose(matrix1);
            else if (key == 2)
                obj.transpose(matrix2);

            break;

        default:
            return 0;
        }
    }

    return 0;
}
