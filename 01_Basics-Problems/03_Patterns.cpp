#include <iostream>
using namespace std;

void printSquarePattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printRectanglePattern(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void printHollowSquare(int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row - 1)
            {
                cout << "*";
            }
            else if (j == 0 || j == col - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void printHalfPyramid(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    // int n = 4;
    // printSquarePattern(n);
    // printRectanglePattern(3, 5);
    // printHollowSquare(5, 5);
    // printHalfPyramid(5);
}