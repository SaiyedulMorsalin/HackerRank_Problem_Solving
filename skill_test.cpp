#include <bits/stdc++.h>
using namespace std;
void fizbuzz(int n){
    if(n%3== 0 && n%5 == 0){
        cout<<"FizzBuzz"<<endl;
    }
    else if(n%3 == 0){
        cout<<"Fizz"<<endl;
    }
    else if(n%5 == 0){
        cout<<"Buzz"<<endl;
    }
    else {
        cout<<n<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        fizbuzz(i);
    }
    return 0;
}