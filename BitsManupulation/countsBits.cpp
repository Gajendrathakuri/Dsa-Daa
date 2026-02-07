#include <iostream>
using namespace std;
int countbits(int n)
{
    int count = 0;

    while (n > 0)
    {
        int last = n & 1;
        count += last;
        n = n >> 1;
    }
    cout << count << endl;
    return count;
}
int main()
{
    cout << countbits(3);
}