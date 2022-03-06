#include<bits/stdc++.h>
using namespace std;

int size(string str){
    char* p;
    p= &str[0];
    int i=0;
    while(*p != '\0'){
        p++;
        i++;
    }
    return i;
}

void show_addr(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int n= size(str);
    for (int i=0; i<n; i++){
        cout<<"Address of "<<str[i]<<" is "<<static_cast<void*>(&str[i])<<endl;
    }
}

void to_lower(){
    string str;
    cout<<"Enter the upper character string: "<<endl;
    cin>>str;
    int n= size(str);
    string s= "";
    char temp;
    for (int i=0; i<n; i++){
        temp = str[i]+ 32;
        s= s + temp;
    }
    cout<<"Lower character string is "<<s<<endl;
}

void concat(){
    string str1, str2;
    cout<<"Enter 1st string: "<<endl;
    cin>>str1;
    cout<<"Enter 2nd string: "<<endl;
    cin>>str2;
    cout<<"Concatenated string is "<<str1+' '+str2<<endl;
}

void to_upper(){
    string str;
    cout<<"Enter the upper character string: "<<endl;
    cin>>str;
    int n= size(str);
    string s= "";
    char temp;
    for (int i=0; i<n; i++){
        temp = str[i] - 32;
        s= s+ temp;
    }
    cout<<"Upper character string of "<<str<< " is "<<s<<endl;
}

void reverse(){
    string str;
    cout<<"Enter the upper character string: "<<endl;
    cin>>str;
    string s="";
    int n= size(str)-1;
    for (int i=0; i<str.size(); i++){
        s= s + str[n];
        n--;
    }
    cout<<"Reverse string of "<<str<<" is "<<s<<endl;
}

void compare(){
    string str1, str2;
    cout<<"Enter the first string: "<<endl;
    cin>>str1;
    cout<<"Enter the second string: "<<endl;
    cin>>str2;
    int n1= size(str1);
    int i=0;
    int pos;
    int n2= size(str2);
    if (n1 > n2){
        cout<<"Result of comparison is: "<<pos<<endl;
    }else if(n2 > n1){
        cout<<"Result of comparison is: "<<-pos<<endl;
    }else{
       for (i=0; i<n1; i++){
           if (str1[i]!=str2[i]){
               cout<<"String "<<str1<<" and "<<str2<<" are not equal"<<endl;
               cout<<"Result of comparison is: -1"<<endl;
           }else{
               continue;
           }
       }
       if (i==n1){
           cout<<"String "<<str1<<" and "<<str2<<" are equal"<<endl;
       } 
    }

}

int main(){
    char i='\0';
    while(1){
        cout<<"What you want to do: \na. Show Address\nb. Concatenate two strings\nc. Compare two strings\nd. Calculate length of string\ne. Convert to upper\nf. Reverse the string\ng. Exit"<<endl;
        cin>>i;
        if (i=='g'){
            break;
        }
        else{
            switch(i){
                case 'a':{
                    show_addr();
                    break;} 
                case 'b':{
                    concat();
                    break;}
                case 'c':{
                    compare();
                    break;}
                case 'd': {
                    string str;
                    cout<<"Enter the string: ";
                    cin>>str;
                    cout<<"The size of string is "<<size(str)<<endl;
                    break;}
                case 'e': {
                    to_upper();
                    break;}
                case 'f': {
                    reverse();
                    break;}
                default: {
                    cout<<"Invalid option";
                    }
            }
        }
    }

    return 0;
}