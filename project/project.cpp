#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand(time(nullptr));
    int a, b;
    cin >> a >> b;
    double c = a / b;
    cout << "Результат: " << c<<endl;
    for (int i = 0; i < 5; i++) {
        int num = 1 + rand() % 110;
        cout << num << " ";
    }
    return 0;
}