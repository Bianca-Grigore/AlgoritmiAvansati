#include <iostream>
#include <string>
using namespace std;
int l, numar;
string x0, x1;

int main() {
    cin>>l;
    cin>>x0>>x1;
    cin>>numar;
    string sir1=x0.substr(0, numar) + x1.substr(numar);
    string sir2=x1.substr(0, numar) + x0.substr(numar);
    cout<<sir1<<"\n";
    cout<<sir2<<"\n";
    return 0;
 }