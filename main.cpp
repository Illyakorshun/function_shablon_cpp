#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

template <typename T>
void masiv(T arr[], int size, bool descending = false)
{
    if (descending) {
        sort(arr, arr + size, greater<T>());
    }
    else {
        sort(arr, arr + size);
    }
}

void processArray()
{
    const int numM = 10;
    array<double, numM> J;

    for (int i = 0; i < numM; ++i) {
        cout << "Enter: " << i + 1 << ": ";
        cin >> J[i];
    }

    masiv(J.data(), numM);

    cout << "Masiv +: ";
    for (int i = 0; i < numM; ++i) {
        cout << J[i] << " ";
    }
    cout << endl;

    masiv(J.data(), numM, true);

    cout << "Masiv -: ";
    for (int i = 0; i < numM; ++i) {
        cout << J[i] << " ";
    }
    cout << endl;
}

int main()
{
    processArray();
    return 0;
}

