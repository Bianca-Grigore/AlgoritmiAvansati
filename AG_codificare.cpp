#include<iostream>
#include<cmath>
using namespace std;
double a,b,p,m,d;

string scris_in_binar(int lungime, double alfa) {
    int x = (alfa - a)/d;
    string sir="";
    for (int i= lungime -1; i>=0; i--) {
        int bit = (x>>i) & 1;
        sir.push_back(bit + '0');
    }
    return sir;
}

double x_in_baza_10(string sir, int l) {
    int numar = 0;
    for (char c : sir) {
        numar=numar*2+(c-'0');
    }
    double k=a+numar * d;
    return k;
}

int main(){
    cin>>a>>b>>p>>m;
  int l = ceil(log2((b - a) * pow(10, p)));
  d = (b-a)/(pow(2,l));

  for (int i=0; i<2*m; i++) {
      string s; cin>>s;
      if (s == "TO") {
          double x; cin>>x;
          string k = scris_in_binar(l, x);
          cout<<k<<endl;
      }
      else
          if (s == "FROM") {
              string sir;
              cin>>sir;
              double k = x_in_baza_10(sir,l);
              cout<< k<<endl;
          }
  }

    return 0;
}