#include <bits\stdc++.h>
using namespace std;
int main()
{   // kono value replace kora 
    // vector<int> v1 = {1, 2,2, 3,2, 4, 5, 6,2};

    // replace(v1.begin(), v1.end(), 2, 100);

    // for (int val : v1)
    // {
    //     cout << val << " ";
    // }
  
    // topic == Find function deye ayyar er vitor kechu khoja r ki .
     vector<int> v = {1, 2, 3, 4, 5, 6};
    auto it = find( v.begin(), v.end(), 5);
    // auto it = find( v.begin(), v.end(), 100);

    if( it == v.end()) 
    cout<<"Not Found";
    else 
    cout<<"Found";
 

    return 0;
}