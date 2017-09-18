#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    bool book[n + 1];
    int i;
    int j;
    int ans = 0;

    for (i = 0; i <= n; i++) {
        book[i] = false;
    }

    for (i = 2; i <= (int)sqrt(n); i++) {
        book[i * i] = true;
    }

    for (i = 1; i <= n; i++) {
        if (book[i]) {
            continue;
        } else {
            for (j = 2; j <= n; j++) {
                if (i % j == 0 && book[j]) {
                    cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b" 
                         << i << ':' << sqrt(j) << "根" << i / j << endl;
                    ans++;
                    break;
                }
            }
        }
    }

    cout << "ans=" << ans << endl;

    return 0;
}

