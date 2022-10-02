//
// Created by Alex on 02.10.2022.
//

#include "Praktika9.h"
#include <iostream>
#include <fstream>
#include <cmath>
#include "../utils/ArrayUtils.h"

using namespace std;


//7.Удвоить каждое слово во введённом предложении.
// in_text.txt >> out_text.txt
void Praktika9::run() {

    ifstream fin("C:\\in_text.txt");
    ofstream fout("C:\\out_text.txt");

    if (!fin) {
        cout << "error!\n";
        return;
    }

    std::string word;
    while (!fin.eof()) {
        fin >> word;
        word += " ";
        cout << word;
        fout << word<< word;
    }


    fout.flush();
    fout.close();
}
