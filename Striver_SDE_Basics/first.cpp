#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 2; i < 100000; ++i) {
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
    return 0;
}
