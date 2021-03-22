#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
    system("cls");
    ifstream fin;
    string x;
    cin >> x; // = "Data.csv";
    ofstream fout("Data.json");
    fin.open(x);
    if (!fin)
    {
        cout << "No\n";
        return 0;
    }
    else
        cout << "Ok\n";

    string str;

    while (fin.eof() == false)
    {
        getline(fin, str);
        if (str.empty())
            continue;
        int n = str.size();
        int i = 0;
        fout << "{ ";
        fout << '"' << "number" << '"' << " : " << '"';
        while (str[i] != ',' && i < n)
        {
            fout << str[i];
            i++;
        }
        i++;
        fout << '"' << " , ";
        fout << '"' << "Roll No." << '"' << " : " << '"';
        while (str[i] != ',' && i < n)
        {
            fout << str[i];
            i++;
        }
        i++;
        fout << '"' << " , ";
        fout << '"' << "Name" << '"' << " : " << '"';
        while (str[i] != ',' && i < n)
        {
            fout << str[i];
            i++;
        }
        fout << '"';
        fout << " }";
        fout << "\n";
    }
}
