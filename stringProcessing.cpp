#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string str="Discover interesting projects and people to populate your personal news feed";

    // add in the end
    str.append(" Azad Khan");

    str.push_back('a');

    //insert githut helps in the start
    str.insert(0,"Github helps ");
    str.erase(4,5);

    //replace github with Github
    str.replace(str.find("interesting"),11,"Amazon AWS");
    reverse(str.begin(),str.end());
    string num="12345678";
    rotate(num.begin(),num.begin()+1,num.end());
    cout<<num;

    cout<<str;



    }
