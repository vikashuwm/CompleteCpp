#include <iostream>
#include <fstream>
using namespace std;

struct Record  
{
    /* data */
    int id;
    string name;
};
int main() {
    fstream f("record.dat", ios::out | ios::binary);
    Record r{1, "Vikash Kumar"};
    if(f) {
        f.write(reinterpret_cast<char*>(&r) ,sizeof(r));
        f.close();
    }else {
        cerr << "Can not open file for writing" <<endl;
    }
    Record r2;
    fstream f2("record.dat", ios::in | ios::binary);
    if(f2) {
        f2.read(reinterpret_cast<char*>(&r2) , sizeof(r2));
        f2.close();
    }else {
        cerr << "Can not open file for reading" <<endl;
    }
    cout << r.id << " " << r.name <<endl;
    cout << r2.id << " " << r2.name <<endl;
    return 0;
}
