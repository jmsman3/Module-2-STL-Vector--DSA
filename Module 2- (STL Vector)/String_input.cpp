#include <bits\stdc++.h>
using namespace std;
int main()
{ // top[ic 1st is string input neyar
    // logic shidu sentence input neya ]
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (string val : v)
    {
        cout << val << " ";
    }

    // Topic 2 - string input for multiples line er jonno
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {    
        
        getline(cin, v[i]);
    }
    for (string val : v)
    {
        cout << val << endl;
    }

    return 0;
}