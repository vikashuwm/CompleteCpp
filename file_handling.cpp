#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("Input.txt", std::ios::app);

    if(!fout) {
        cerr << "Error opening file!";
        return 1;
    }
    fout.close();

    ifstream fin("Input.txt");
    if(!fin) {
        cerr << "Error opening file!";
        return 0;
    }

    string line;
    while(getline(fin, line)){
        cout << line << endl;
    }
    fin.close();

    cout << "\n\n\nReading using buffer \n";
    // reading using character buffer
    fin.open("Input.txt");
    fin.seekg(0, ios::end);
    if(!fin) return 1;

    int size = fin.tellg();
    fin.seekg(0, ios::beg);
    
    char *buffer = new char[size+1];
    if(!buffer){
        return 1;
    }

    fin.read(buffer, size);
    fin.close();
    buffer[size] = '\0';
    cout << buffer << endl;
    delete []buffer;
    return 0;
}
