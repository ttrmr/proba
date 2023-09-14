#include <iostream>

using namespace std;

int main()
{
    int line, column, size = 5;
    int* mass = new int[size];
    size--;
    for (int i = 0; i <= size; i++) {
        mass[i] = 1 + rand() % 10;
        cout << mass[i] << " ";
    }

    cout << "\nСтолбцы: ";
    cin >> column;
    cout << "Строки: ";
    cin >> line;
    int copySize = size;
    int** mass_copy = new int* [line];

    for (int i = 0; i != line; i++) {
        mass_copy[i] = new int[column];
        for (int j = 0; j != column; j++) {
            if (size >= 0) {
                mass_copy[i][j] = mass[copySize - size];
                size--;
            }
            else {
                mass_copy[i][j] = 1 + rand() % 10;

            }
            cout << mass_copy[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i != line; i++) {
        delete[]mass_copy[i];
    }
    delete[]mass_copy;

    return 0;
}