#include<bits/stdc++.h>
using namespace std;

bool sus[1000006];
void in(string s){
    cout << s << " ";
}
void dmm(string &n,const string &m, int i){
    for(int j=0;j<m.size();j++){
        if(!sus[j]){
            sus[j]= true;
            n[i] = m[j];
        if(i == n.size()-1){
            in(n);
        }
        else{
            dmm(n,m,i+1);
        }sus[j]= false;
        }
        
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int test; cin>> test;
    cin.ignore();
    while(test--){
        string tmp;
        string a;
        getline(cin,a);
        for(int i=0;i< a.size();i++){
            tmp.push_back('z');
        }
        dmm(tmp,a,0);
        cout << endl;
    }
    return 0;
}




