#include<iostream>
#include<string>
#include<vector>
using namespace std;
int l, k;
string c;

int main(){
    cin>>l>>k;
    cin>>c;
    vector<int> poz_biti(k);
    string cromozom_rez=c;

    for (int i=0; i<k; i++) {
        cin>>poz_biti[i];
        int poz = poz_biti[i];
        cromozom_rez[poz] = (cromozom_rez[poz] == '0') ? '1' : '0';
    }
    cout<<cromozom_rez;
}