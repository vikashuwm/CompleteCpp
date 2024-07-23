#include <iostream>
#include <fstream>
using namespace std;
uint32_t swap16Bits(uint32_t num) {
    uint16_t high16 = (num >> 16) & 0xFFFF;  // Extract high 16 bits
    uint16_t low16 = num & 0xFFFF;           // Extract low 16 bits
    std::swap(high16, low16);                // Swap the high and low 16 bits
    return (high16 << 16) | low16;           // Combine them back into a 32-bit integer
}

int main() {
    fstream fout("input.txt");
    if(fout) {
        fout  << int32_t(20);
    }else {
        cerr<< "Error opening file to write the number !" << endl;
        return 1;
    }
    fout.close();

    ifstream fin("input.txt");
    int num = 0;
    if(fin) {
        fin >> num;
    }else {
        cerr<< "Error opening file to reading the number !" << endl;
        return 1;
    }
    fin.close();
    cout << "Number fetched from the file : " <<num <<endl;
    fout.open("input.txt" , ios::app) ;
    if(fout){
        fout << swap16Bits(num);
    }else  {
        cerr<< "Error opening file to write the number !" << endl;
        return 1;
    }
    string str;
    fout.close();
    return 0;
}