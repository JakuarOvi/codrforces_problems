//MD Jakuar Hossain Øvi 

#include<bits/stdc++.h>
using namespace std;

#define sort(x)        x.begin(),x.end()
#define yes            cout<<"YES"<<endl
#define no             cout<<"NO"<<endl
#define ll             long long int 
#define fl(i,a,b)      for(int i=a;i<=b;i++)
#define fr(i,b,a)      for(int i=b;i>=a;i--)
#define tc             int t; cin>>t;
#define w(t)           while(t--)
#define cin(n)         int n; cin>>n;
#define vi             vector<int>
#define input(a,n)     for(int i=0;i<n;i++) cin>>a[i];
#define mod            1000000007

int main() {
    // Your code here
  
    int t;
    cin >> t;
    while (t--) {
         int h, m;
    char colon;
    cin >> h >> colon >> m;
    string am = (h < 12 ? " AM" : " PM");

 //  h = (h % 12 ? h % 12 : 12);
if(h%12!=0)
{
    h%=12;
}
else{
    h=12;
}

if (h < 10) {
    cout << "0";
}
cout << h << colon;
if (m < 10) {
    cout << "0";
}
cout << m << am << endl;
      
    }
  


    return 0;
}
