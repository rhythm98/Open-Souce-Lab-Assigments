#include <iostream>
#include <fstream>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //writing to my_file.txt
    fstream my_file;
    my_file.open("my_file.txt", ios::out);
    if (!my_file) {
        cout << "File not created!\n";
    }
    else {
        cout << "File created successfully!\n";
        my_file << "Hello World!!";
        my_file.close();
    }


    // reading from my_file.txt
    my_file.open("my_file.txt", ios::in);
    if (!my_file) {
        cout << "No such file\n";
    }
    else {
        char ch;

        while (1) {
            my_file >> ch;
            if (my_file.eof())
                break;

            cout << ch;
        }

    }
    my_file.close();
    return 0;
}
