#include <iostream>
#include <limits>
using namespace std;

int maximise(int n, int x, int y, int z) {
    if (n == 0) {
        return 0;
    }
    if (n < 0) {
        return -1;  // Use -1 to indicate an invalid result instead of INT_MIN
    }

    int option1 = maximise(n - x, x, y, z);
    int option2 = maximise(n - y, x, y, z);
    int option3 = maximise(n - z, x, y, z);

    int maxOption = max(option1, max(option2, option3));

    if (maxOption == -1) {
        return -1;  // If all options are invalid, return -1
    }

    return 1 + maxOption;
}

int main() {
    int n = 20;
    int x = 3;
    int y = 5;
    int z = 7;
    int result = maximise(n, x, y, z);
    if (result == -1) {
        cout << "No solution" << endl;
    } else {
        cout << result << endl;
    }
    return 0;
}
