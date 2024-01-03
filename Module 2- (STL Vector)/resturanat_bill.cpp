#include <bits\stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);
    int flag = 1;
    for (int i = 0, j = s.size() - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        cout << "palindrom" << endl;
    }
    else if ( flag == 0)
    {
        cout << "Not palindeom" << endl;
    }

    return 0;
}