#include <iostream>
#include <iomanip>
#define Tab endl
using namespace std;

int main(int argc, char* argv[])
{
    const unsigned int a1 = 4;
    const unsigned int a2 = 5;

    double A[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    double Summ;

    cout << "First value: [ ";
    for (int i = 0; i < 9; ++i) {
        cout << A[i] << " ";
    }
    cout << "]" << Tab;

    Summ = 0;

    for (int i = 0; i < 9; i++)
        Summ = Summ + A[i];

    cout << "Summ: " << Summ << Tab;
    cout << "Average: " << Summ / 9 << Tab << Tab;

    int arr[a1][a2] = {
        { 1, 2, 3, 4, 5 },
        { 2, 4, 6, 8, 10 },
        { 3, 6, 9, 12, 15 },
        { 6, 7, 8, 9, 2 }
    };

    cout << "First value: " << Tab;

    for (int i = 0; i < a1; i++) {
        for (int j = 0; j < a2; j++) {
            cout << setw(4) << arr[i][j];
        }
        cout << Tab;
    }

    for (int i = 0; i < a1; i++)
    {
        for (int j = 0; j < a2; j++)
        {
            Summ += arr[i][j];
        }
    }

    cout << "Summ: " << Summ << Tab;
    cout << "Average: " << Summ / 15 << "\n" << Tab;

    getchar();
}
