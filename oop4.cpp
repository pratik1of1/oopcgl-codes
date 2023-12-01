#include <iostream>
#include <fstream>
using namespace std;
const int MAX = 10;
int array1[MAX] = {10, 20, 30, 40, 50};
int array2[MAX];
int main()
{
    cout << "Pratik Ashok Goriwale SE AIDS A2 [22535]" << endl;
    ofstream os;
    os.open("myfile.txt", ios::trunc | ios::binary);
    if (!os)
    {
        cerr << "Could not open output file\n";
        exit(1);
    }
    cout << "Writing the contents to the file...\n\n";
    os.write((char *)&array1, sizeof(array1));
    if (!os)
    {
        cerr << "Could not write to file\n";
        exit(1);
    }
    os.close();
    ifstream is;
    is.open("myfile.txt", ios::binary);
    if (!is)
    {
        cerr << "Could not open input file\n";
        exit(1);
    }
    cout << "Reading the contents from the file ...\n";
    is.read((char *)&array2, sizeof(array2));
    if (!is)
    {
        cerr << "Could not read from file\n";
        exit(1);
    }
    for (int j = 0; j < MAX; j++)
        cout << " " << array2[j];
    cout << endl;
    return 0;
}
