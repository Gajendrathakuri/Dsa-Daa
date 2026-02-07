#include <iostream>
using namespace std;
int fastExponent(int x, int n)
{
    int ans = 1;
  
    while (n > 0)
    {    int lastbit = n & 1;
        if (lastbit)
        {
            ans = ans * x;
        }
        x = x * x;
        n = n >> 1;
    }

    return ans;
}
int main()
{
    int res = fastExponent(3, 5);
    cout << res;
}