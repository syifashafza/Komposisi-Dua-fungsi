#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    int jumlah;
    string f[100][100];
    string g[100][100];

    cout << "Masukan jumlah f(x): ";
    cin >> jumlah;

    cout << "Masukan fungsi f -> x" << endl;
    for(int i = 1; i <= jumlah; i++) {
        cout << "f(x): ";
        cin >> f[0][i];
        cout << "x: ";
        cin >> f[i][0];
    }

    cout << "Masukan fungsi g -> x" << endl;
    for(int i = 1; i <= jumlah; i++) {
        cout << "g(x): ";
        cin >> g[0][i];
        cout << "x: ";
        cin >> g[i][0];
    }

    cout << "f(x)={";
    for(int i = 1; i <= jumlah; i++) {
        cout << "(" << f[0][i] << ", " << f[i][0] << "), ";
    }
    cout << "}" << endl;

    cout << "g(x)={";
    for(int i = 1; i <= jumlah; i++) {
        cout << "(" << g[0][i] << ", " << g[i][0] << "), ";
    }
    cout << "}" << endl;

    cout << "fog(x)={";
    for(int i = 1; i <= jumlah; i++) {
        for(int j = 1; j <= jumlah; j++) {
            if(f[i][0] == g[0][j]) {
                cout << "(" << f[0][i] << ", " << g[j][0] << "), ";
            }
        }
    }
    cout << "}" << endl;

    return 0;
}
