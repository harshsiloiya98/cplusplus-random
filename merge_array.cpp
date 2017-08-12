#include <iostream>


using namespace std;

int main () {

    int A[20] = {6,4,1,9,2,7,5,8};
    int B[10] = {10,20,30,40};
    int C[20];
    //          B  A B  A A B  A A A B  A A
    // C[20] = {10,6,20,4,1,30,9,2,7,40,5,8}.

    int to_copy = 1;
    int a = 0, b = 0, c = 0;

    while (a < 20 && b < 10 && c < 20) {
        C[c++] = B[b++];
        if (c == 20) break;
        for (int i = 0; i < to_copy; i++) {
            C[c++] = A[a++];
            if (c == 20 || a == 20) break;
        }
        to_copy++;
    }

    cout << "A = { ";
    for (int i = 0; i < 20; i++) {
        cout << A[i] << " ";
    }
    cout << " }" << endl;

    cout << "B = { ";
    for (int i = 0; i < 10; i++) {
        cout << B[i] << " ";
    }
    cout << " }" << endl;

    cout << "C = { ";
    for (int i = 0; i < 20; i++) {
        cout << C[i] << " ";
    }
    cout << " }" << endl;

    return 0;

}
