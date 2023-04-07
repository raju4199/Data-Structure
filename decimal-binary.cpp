//header

#include<iostream>
#include<math.h> // library to use math function
using namespace std;
// main function
int main(){
    int n;
    cin >> n;
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
     }
     cout << "convert in binary term" << ans;
}
