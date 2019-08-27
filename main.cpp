#include <iostream>

using namespace std;

int main()
{
    int findFibonacci;

    cout << "Enter Fibonacci series limit:";
    cin >> findFibonacci;

    int fibonacci[findFibonacci];
        fibonacci[0] = 0;
        fibonacci[1] = 1;

    for(int i = 2; i < findFibonacci - 1; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    cout << "Fibonacci Series: ";
    for(int i = 0; i < findFibonacci - 1; i++){
        cout << fibonacci[i] << " ";
    }
    cout << endl;
    return 0;
}
