#include <bits\stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // cout << v.max_size() << endl;
    // vector<int> v;
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(20);
    // cout << v.capacity() << endl;
    // v.push_back(30);
    // cout << v.capacity() << endl;
    // v.push_back(40);
    // cout << v.capacity() << endl;
    // v.push_back(50);
    // cout << v.capacity() << endl;

    // topic 2-
    //  vector<int> v = {1, 2, 3, 4, 5, 6, 7};

    // v.resize(2);
    // v.resize( 5, 19);
    // for (int val : v)
    // {
    //     cout << val << endl;
    // }
    //  topic 3- vector modifires just ekta theke arekta copy and pop back
    //  kora mane shesh thek eekta kore delete kore deya.
    // vector<int> v1 = {1, 2, 3, 4, 5, 6};
    // vector<int> v2(v1);
    // v2.pop_back();
    // v2.pop_back();

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << endl;
    // }

    // topic 4; vector insert and vector erase kora
    // vector<int> v = {1, 2, 3, 4, 5, 6};
    // vector<int> v2 = {10, 20, 30, 40};
    // v.insert(v.begin() + 2, v2.begin(), v2.end());
    // for (int val : v)
    // {
    //     cout << val << " ";
    // }

    //  ekhon vector erase;
    // vector<int> v1 = {1, 2, 3, 4, 5, 6};
    // vector<int> v2 = {10, 20, 30, 40, 50, 60};
    // v1.erase(v1.begin() + 2);
    // for (int val : v1)
    // {
    //     cout << val << " ";
    // }
    // abar
    vector<int> v1 = {1, 2, 3, 4, 5, 6};

    v1.erase(v1.begin() + 1, v1.begin() + 5);
    for (int val : v1)
    {
        cout << val << " ";
    }

    return 0;
}