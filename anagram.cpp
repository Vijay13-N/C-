#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n1,n2,c=0;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    n1=s1.size();
    n2=s2.size();
    unordered_map<char,int> v1,v2;
    if(n1!=n2){
        cout<<"\nNot an anagram";
    }
    else{
        for(i=0;i<n1;i++){
            v1[s1[i]]++;
        }
        for(i=0;i<n2;i++){
            v2[s2[i]]++;
        }
        if(v1==v2){
            cout<<"\nAnagram";
        }
        else{
            cout<<"\nNot an anagram";
        }
    }
    return 0;
}
