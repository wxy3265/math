#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long n;
    cin >> n;

    bool book[n + 1];
    bool flag = false;
    long i;
    long j;
    long ans = 0;
    long out;

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
                    out = j;
                    if (!flag)
                        ans++;
                    flag = true;
                }
            }
            if (flag)
                cout << i << ':' << sqrt((double)out) << "根" << i / out << endl;
            flag = false;
        }
    }

    cout << "ans=" << ans << endl;

    return 0;
}

