#include <bits/stdc++.h>
//#include <cstdio>
using namespace std;
int s[5];
int main(){
    int a,b;
    set<int> se;
    cin>>a>>b;
    b^=a;
    a^=b;
    b^=a;
    se.insert(a);
    s[0]=a;
    se.insert(b);
    s[1]=b;
    int c;
    c=a*b;
    se.insert(c);
    s[2]=c;
    printf("%d %d %d\n",a,b,c);
    for(auto it=se.begin();it!=se.end();++it){
        printf("%d is in set\n",*it);
    }
    return 0;
}