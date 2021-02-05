#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    string save1, save2;
    for (int i = 0; i < a.length(); i++)
    {
        save1[i] = a[i] + 32;
    }
    for (int i = 0; i < b.length(); i++)
    {
        save2[i] = b[i] + 32;
    }
    if (a == "xiplus" && b == "jill")
    {
        cout << "Hello, Sister!" << endl;
        cout << "Hi, Sister!" << endl;
    }
    else if ((a != "xiplus" || a != "Xiplus") && (b != "Jill" || b != "jill"))
    {
        cout << "Hello, " << b << "!" << endl;
        cout << "Hi, " << a << "!" << endl;
    }
    else if (b == "xiplus" && a == "jill")
    {
        cout << "Hello, Sister!" << endl;
        cout << "Hi, Sister!" << endl;
    }
    else
    {
        cout << "Hello, " << b << "!" << endl;
        cout << "Hi, " << a << "!" << endl;
    }
}