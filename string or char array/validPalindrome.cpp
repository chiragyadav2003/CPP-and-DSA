#include<bits/stdc++.h>
using namespace std;

bool validCharacter(char ch){
    if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z') || (ch>='0'&&ch<='9')){
        return 1;
    }

    else{
        return 0;
    }
}

char toLowerCase(char ch){
    if((ch>='a'&&ch<='z')||(ch>='0'&&ch<='9')){
        return ch;
    }

    else{
       char temp = ch-'A'+'a';
       return temp;
    }
}

bool checkPalindrome(string a){
    int s=0, e=a.length()-1;
    while(s<e){
        if(a[s]!=a[e]){
            return 0;
        }

        else{
            s++;
            e--;
        }
    }
}

bool isPalindrome(string s){
    string temp = "";
    
    //faltu character removr kar diye
    for(int j=0; j<s.length(); j++){
        if (validCharacter(s[j])){
            temp.push_back(s[j]);
         }
       
    //to lower case
    for(int j=0; j<temp.length(); j++){
        temp[j] = toLowerCase(temp[j]);
    }

    }   

    //check palindrome 
    checkPalindrome(temp);

}

int main(){
    string str = "babbar";

    cout<<"string is palindrome or not "<<isPalindrome(str);

 
}