
#include<bits/stdc++.h>
using namespace std;

void _reverse(string &s){
int i = 0;
int j = s.length() - 1;
    while(i <= j){
        swap(s[i],s[j]);
        i++;
        j--;
    }
}
int main(){
    string s;
    cout << "Enter the string : " ;
    cin >> s;
    _reverse(s);
    cout << "Reverse string : " << s;
}
