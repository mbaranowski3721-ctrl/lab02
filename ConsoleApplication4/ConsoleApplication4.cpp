#include <iostream>
using namespace std;

int main()
{
    //Zadanie 1
    cout << "Zadanie 1" << endl;
    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }
    cout << endl;

    for (int i = 5; i <= 7; i++) {
        cout << i << endl;
    }
    cout << endl;

    for (int i = 5; i < 7; i++) {
        cout << i << endl;
    }
    cout << endl;
    for (int i = 0; i <= 10; i = i + 2) {
        cout << i << endl;
    }
    cout << endl;
    
    //Zadanie 7
    cout << "Zadanie 7" << endl;
    int a;
    for (int i = 0; i <= 9; i++) {
        cout << "Podaj liczbe rzeczywista: ";
        cin >> a;
        if (a > 0) {
            cout << a << endl;
        }
    }
    cout << endl;

    //Zadanie 8
    cout << "Zadanie 8" << endl;
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }
    cout << endl;

    //Zadanie 9
    cout << "Zadanie 9" << endl;
    int n;
    cout << "Podaj liczbe n: ";
    cin >> n;
    for (int i = 0; i <= 100; i++) {
        if (i % n == 0) {
            cout << i << endl;
        }
    }
    cout << endl;

    //Zadanie 10
    cout << "Zadanie 10" << endl;
    int m;
    int l = 0;
    cout << "Podaj liczbe m: ";
    cin >> m;
    for (int i = 0; i <= 100; i++) {
        if (i % n == 0) {
            l++;
        }
    }
    cout << "Liczb podzielnych przez " << m << " jest " << l;
    cout << endl;

    //Zadanie 11
    cout << "Zadanie 11" << endl;
    int x, d;
    cout << "Podaj x: ";
    cin >> x;
    cout << "Podaj d: ";
    cin >> d;
    if (x > d) {
        for (int i = d; i <= x; i++) {
            if (i % 3 == 0) {
                cout << i << endl;
            }
        }
    }
    else if(d > x) {
        for (int i = x; i <= d; i++) {
            if (i % 3 == 0) {
                cout << i << endl;
            }
        }
    }
    else {
        cout << "Podane liczby nie moga byc takie same";
    }
    cout << endl;



    

}

