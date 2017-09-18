#include <iostream>
#include <math.h>

using namespace std;

int main()
{

    bool book[109];
    int i;
    int j;
    int ans = 0;

    for (i = 0; i <= 108; i++) {
        book[i] = false;
    }

    for (i = 2; i <= 10; i++) {
        book[i * i] = true;
    }

    for (i = 1; i <= 108; i++) {
        if (book[i]) {
            continue;
        } else {
            for (j = 2; j <= 108; j++) {
                if (i % j == 0 && book[j]) {
                    cout << "\b\b\b\b\b\b\b\b" << i << ':' << sqrt(j) << "根" << i / j << endl;
                    ans++;
                    break;
                }
            }
        }
    }

    cout << "ans=" << ans << endl;

    return 0;
}

