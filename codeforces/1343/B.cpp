// Problem: B. Balanced Array
// Contest: Codeforces - Codeforces Round #636 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1343/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 

//~"~"~"~"~"~"~"~"~"~"~"~"~  ♥ B I S M I L L A H I R  R A H M A N I R  R A H I M ♥   ~"~"~"~"~"~"~"~"~"~"~"~"~//  

// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //
// ##                                                                         ## //
// ##          Yousuf Hassan || CSE,IUBAT || yousufhassan04@gmail.com         ## //
// ##                                                                         ## //
// ##                        CF Handle : Yousuf7902                           ## //
// ##                                                                         ## //
// +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ //

#include <bits/stdc++.h>
using namespace std;

//===============================================================================
//
#define         FAST ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define         vc vector
#define         pair pair<int, int>
#define         st set<int>
#define         ll long long
#define         eb emplace_back
#define         prec(n) fixed<<setprecision(n)
#define         py      cout << "Yes\n";
#define         pn      cout << "No\n";
#define			endl     "\n"
#define         rn return 0;
//
//===============================================================================

int main(){
    FAST
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vc<int>vec;
        
        int even=2,sum=0,odd=1,s_odd=0;
        for(int i=1;i<=(n/2);i++){
            vec.eb(even);
            sum=sum+even;
            even+=2;
        }
        
        for(int i=1;i<=(n/2);i++){
            
            if(i==n/2){
                if(i==1){
                    vec.eb(sum -1);
                    s_odd=s_odd+1;
                }
                else{
                    vec.eb(sum -s_odd);
                    s_odd=s_odd+(sum-s_odd);
                }
                
            }
            else{
                vec.eb(odd);
                s_odd=s_odd+odd;
                odd+=2;
            }
            
        }
        
        int size=vec.size();
        
        if(sum==s_odd && (vec[size-1]%2!=0)){
            cout<<"YES"<<endl;
            
            for(auto it:vec){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
           
        
    }
    
    rn;
}