#include<bits/stdc++.h>
using namespace std;


int main(){
    ifstream in("input.txt");
    ofstream out("outputt.txt");
    string str="", temp;
    
    while (in.good()){
        in>>temp;
        str.append(temp);
    }
    cout<<str<<endl;
    out<<str;
    in.close();
    out.close();
    
    return (0);
}   