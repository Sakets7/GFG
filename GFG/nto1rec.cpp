#include<iostream>
using namespace std;
void fun(int n) {
    if (n==0)
        return;
    cout<<n<<endl;
    fun(n-1);
}

void fun2(int n) {
    if (n==0)
        return;
        fun2(n-1);
        cout<<n<<endl;
}

int main() {
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    fun(n);
    fun2(n);
    return 0;
}