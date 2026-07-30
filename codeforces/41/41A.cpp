#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin>>s>>t;
    int i=0,j=s.length()-1;
    while(i<j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
    
    if(s==t){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}