#include<bits\stdc++.h>
#include <vector>
// +++++++++++++++++++++not correct+++++++++++++++++
using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,x ;
        cin>>m>>x;
        vector<int>v;
        int k =1;


        //x = number of player
        //m = nober of moves
        while(x--){
            int z =1;
            for(int i =0 ; i<k ; i++){
                
                v.push_back(z);
                z++;
            }
            
            //cout<<v.size()<<"=="<<endl;
            if(v.size()==1){
                cout<<"1"<< " ";
            }
            else{
            for(int i = 0;v.size()>0 ; i++){
                if(v.size()==1){
                cout<<v[0]<<" ";

                }
                int t = (m-1)%v.size() ;
              // cout<< t << ";;" << "size " << v.size() << v[0] << v[1]<<endl;
              v.erase (v.begin()+t);

            }
            
            k++;
            }

        

        }
        
    }




}