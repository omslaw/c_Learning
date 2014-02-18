#include <iostream>

using namespace std;

int digitSum(int n);
int main()
{
    cout << "Hello World!" << endl;
    cout << "Finally got this to work from QT creator, but utimately, will just use Git shell." << endl;
    cout << "Fucking pain in the ass!!!" << endl;
    cout << "Output of digitSum: " << digitSum(34) << endl;
    return 0;
}
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
        cout << "In while Loop " << sum << endl;
    }
    return sum;
}


