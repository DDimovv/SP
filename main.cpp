#include <iostream>

using namespace std;

int main() {
    int a[100][100], b[100][100], m, n, k, t;
    cin >> m >> n;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            k = i;
            t = j;

            if (m == n) {
                while (k < m && t >= 0 &&
                       b[k][t] != 1 &&
                       i + j <= m - 1) {
                    cout << a[k][t] << " ";
                    b[k][t] = 1;
                    k++;
                    t--;

                }
            } else if (m == 1) {
                while (k < m) {
                    cout << a[k][t];
                    k++;

                }
            } else if (n == 1) {
                while (t < n) {
                    cout << a[k][t];
                    t++;
                }
            } else
                while (k < m && t >= 0 &&
                       b[k][t] != 1 &&
                       i + 1 < m) {
                    cout << a[k][t] << " ";
                    b[k][t] = 1;
                    k++;
                    t--;

                }
            cout << endl;

        }
    }
    
    return 0;
}

