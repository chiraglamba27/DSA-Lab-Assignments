#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int flag=0;
        string str1;
        string str2;
        cin>>str1;
        cin>>str2;
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        for(int i=0;i<str1.length();i++){
            if(str1[i]==str2[i]){
                flag=1;
            }else{
                flag=0;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
