#include<iostream>
using namespace std;

void f(int i,int n){
   if(i>n)
   return;
   cout<<i<<endl;
   f(i+1,n);  
}
// A better approach to this
void backt(int i ,int n){
    if(i<1) return;
    backt(i-1,n);
    cout<<i;
}


void rev(int i, int n){
    if(i<1)
    return;
    cout<<i;
    rev(i-1,n);
}
// A better approach to this
void revbt(int i, int n){
    if(i>n) return;
    revbt(i+1,n);
    cout<<i<<endl;
}



int main(){
    int n;
    cin>>n;
   int i=1;
 //   f(i,n);
 //int i=n;
 // backt(i,n);
 revbt(i,n);
 //rev(i,n);
    return 0;
}