#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n,a; cin >> n >> a;
        if(n == 1){
            if(a%2 == 0){
                cout << "Even" << endl;
            }else{
                cout << "Odd" << endl;
            }
        }else{
            if((a&1) == 1 and n%2==0){
                cout << "Even" << endl;
            }else if((a&1) == 1 and n%2!=0){
                cout << "Odd" << endl;
            }else{
                cout << "Impossible" << endl;
            }
        }
    }
    return 0;
}