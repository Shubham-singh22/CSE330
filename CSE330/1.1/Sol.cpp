#include <bits/stdc++.h>

using namespace std;

bool istrue(int n){

    for(int i=2;i*i<=n;i++){

        if(n%i==0)return true;

    }

    return false;

}

string res(int n){

    if(n<=3)return "No";

else { if(istrue(n))

        return "Yes";

    

    else return "No";}

}

int main(){

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

     cout<<res(n)<<"\n";  

    }

}
