#include <iostream>

#include "testlib.h"

int main() {
    registerValidation();

    int n = inf.readInt(1, 500);
    inf.readSpace();
    int m = inf.readInt(1, 500);
    inf.readChar('\n');
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            inf.readInt(0, 998244352);
            if (j + 1 != m) inf.readSpace();
        }
        inf.readChar('\n');
    }
    for (int i = 0; i < n; i++) {
        inf.readInt(0, 998244352);
        if (i + 1 != n) inf.readSpace();
    }
    inf.readChar('\n');
    inf.readEof();
    return 0;
}
