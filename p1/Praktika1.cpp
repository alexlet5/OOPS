//
// Created by Alex on 01.10.2022.
//

#include <iostream>
#include "Praktika1.h"

using namespace std;

void Praktika1::run() {

    int i, k, M[15], M_new[15];
    cout << "Vvedite kolichestvo eleventov massiva M. k=";
    cin >> k;

    for (i = 1; i <= k; i++) {
        cout << "Vvedite M[" << i << "]="; // Vvod elementov odnomernogo
        cin >> M[i]; // massiva
    }
    cout << endl;

    for (i = 1; i <= k; i++)
        cout << M[i] << endl; // Vyvod elementov odnomernogo
    // massiva kak vektor-stolbec
    cout << endl;

    for (i = 1; i <= k; i++)
        cout << M[i] << " \t"; // Vyvod elementov odnomernogo
    // massiva kak vektor-stroka

    cout << endl;

    for (i = 1; i <= k; i++)
        if (M[i] < -10) M_new[i] = 0;
        else M_new[i] = M[i];

    cout << "Obrabotanny massiv" << endl;

    for (i = 1; i <= k; i++)
        cout << M_new[i] << "\t"; // Vyvod elementov novogo massiva
    cout << endl;
}
