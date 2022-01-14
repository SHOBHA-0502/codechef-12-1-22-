#include<bits\stdc++.h>
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        long long int k1 = a1+a2;
        long long int k2 = b1+b2;
        long long int k3 = c1+c2;
        long long int m1 = max(k1,k2);
        long long int m2 = max(k2,k3);
        cout<<max(m1,m2)<<endl;

    }

}