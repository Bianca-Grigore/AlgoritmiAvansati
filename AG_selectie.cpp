 #include<iostream>
 #include<vector>
 #include<cmath>
 #include <iomanip>
 using namespace std;
 double a,b,c;
 int n;

 double f(double x) {
     double f_x = a*pow(x,2) + b*x + c;
     return f_x;
 }

 int main() {
     cin>>a>>b>>c;
     cin>>n;
     double F=0;
     double x;
     vector<double> crom(n);
     for (int i=0; i<n; i++) {
         cin>>x;
         crom[i]=x;
         F+= f(x);
     }
     double suma =0;
     cout<<0<<"\n";
     for (int i=0; i<n; i++) {
         suma+=f(crom[i]);
         if ( i==n-1) {
             cout<<1<<"\n";
         }
         else {
             double p = suma/F;
             cout<<fixed<<setprecision(5)<<p<<"\n";
         }
     }

 }