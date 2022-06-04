#include "template.h"
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <functional>

using namespace std;

bool raven(int a, int b) 
{
    return a == b;
}


int main() 
{
    vector<int> M;
    for (int i = 0; i < 5; i++) 
    {
        int b;
        cin >> b;
        M.push_back(b);
    }
    
    cout << all_Of(M.begin(), M.end(), raven);
    cout << one_of(M.begin(), M.end(), raven);
    cout << find_backward(M.begin(), M.end(), raven);
}
