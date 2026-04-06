class Solution {
public:
char tolowercase(char ch){
    if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
    bool validchar(char ch){
        if(ch>='a' && ch<='z'|| ch>='A' && ch<='Z'|| ch>='0' && ch<='9'){
            return 1;
        }
        else{
            return 0;
        }
    }

bool checkpalindrome(string a){
    int s=0;
    int e=a.length()-1;
    while(s<e){
        if((a[s])!=(a[e])){
            return false;
        }
        else{
            s++;
            e--;
        }
    }
    return true;
}
    bool isPalindrome(string s) {
        //remove faltu character
        int i=0;
        string temp="";
        for(int j=0;j<s.length();j++){
            if(validchar(s[j])){
               temp.push_back(s[j]);
            }
        }
        //lowercase me krdo
        for(int j=0;j<temp.length();j++){
            temp[j]=tolowercase(temp[j]);
        }
        return checkpalindrome(temp);
    }
};