#include<iostream>
using namespace std;
int powerof2(int n){
   return n & 1;
}
int main()
{
 cout<<powerof2(9);

}