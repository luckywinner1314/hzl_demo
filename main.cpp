#include<bits/stdc++.h>
using namespace std;

int main()
{
    string S="y#fo##f";
    string T="y#f#o##f";

    for(int i=0;i<S.size();i++){
        if(S[i]=='#')
        {
            if(i==0) {S.erase(i,1);i--;}
            else{
                S.erase(i-1,2);
                i=i-2;
            }
            
        }
        cout<<S<<"******"<<i<<endl;
    }
    for(int i=0;i<T.size();i++){
        if(T[i]=='#'){
            if(i==0) {
                T.erase(i,1);
                i=i-1;;
            }
            else{
                T.erase(i-1,2);
                i=i-2;
            }
        }
        cout<<T<<"&&&&&&&"<<i<<endl;
    }
    cout<<T<<endl<<S<<endl;



    system("pause");
    return 0;
}