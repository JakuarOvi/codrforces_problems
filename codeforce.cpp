//MD Jakuar Hossain Øvi 

#include<bits/stdc++.h>
using namespace std;

#define sort(x)        x.begin(),x.end()
#define yes            cout<<"YES"<<endl
#define no             cout<<"NO"<<endl
#define ll             long long int 
#define fl(i,a,b)      for(int i=a;i<=b;i++)
#define fr(i,b,a)      for(int i=b;i>=a;i--)
#define tc             int t; cin>>t; while(t--)
#define cin(n)         int n; cin>>n;
#define vi             vector<int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007

int main() {
    // Your code here
    string s,t;
    cin>>s;
    t="hello";
    int k=0;
    for(int i=0;i<s.length();i++)
    {

        if(s[i]==t[k])
        {
            k++;
        }
    }
    if(k==t.length()) yes;
    else no;

    return 0;
}

/*
ahhellllloou

YES


hlelo
No

*/

