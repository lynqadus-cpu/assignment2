

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;

    while (a--) {
        int x, y, z;
        cout << "enter 3 numbers: ";
        cin >> x >> y >> z;

        if (x + y == z || x + z == y || y + z == x) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }

    return 0;
}