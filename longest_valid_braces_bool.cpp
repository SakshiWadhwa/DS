#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    while(t--)
    {
        stack <int> s;
        string b;
        cin >> b;
        int count, k = 0;
        bool a[b.length()] = {0};
        
        for(int i = 0; i < b.length(); i++)
        {
            if(b[i] == '(')
            {
                s.push(i);
            }
            else if(b[i] == ')' && !s.empty())
            {
                a[i] = true;
                a[s.top()] = true;
                s.pop();
            }
        }
        
        for(int i = 0; i < b.length(); i++)
        {
            count = 1;
            if(a[i] == true)
            {
                int j = i;
                while(a[++j] != false)
                {
                    count++;
                }
                if(k < count)
                {
                    k = count;
                }
            }
        }
        cout << k << endl;
    }
    return 0;
}
