#include<iostream>
using namespace std;
int main () {
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++){
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    for (int i=0;i<5;i++) {
        for (int j=0;j<=i;j++) {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;

    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            if (i+j > 3) {
                cout << "*";
            }
            else 
            cout << " ";
        }
        cout << endl;
    }
}