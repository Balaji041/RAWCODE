#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >>s;
    int flag;
    int n=s.size();
    for(int i=0;i<n;i++){
        int cnt=0;
        while(s[i]=='x'){
            cnt++;
            i++;
        }
        int cnt1=0;
        while(s[i]=='y'){
            cnt1++;
            i++;
            
        }
        if(cnt!=cnt1){
            flag=0;
            cout<<0<<endl;
        }
        i--;
    }if(flag==1){
        cout<<1<<endl;
    }
}
