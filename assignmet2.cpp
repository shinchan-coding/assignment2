// #include <iostream>
// using namespace std;
// int main()
// {
// int x;
// cout << "Enter first number\n";
// cin >> x; // user will give ‘x’ a value.
// int y, m;
// cout << "Enter second number and value for taking modulus\n";
// cin >> y >> m; // user will give ‘y’ a value.
// int Z = (x * y) % m;
// cout << "Output is: " << Z;
// }
// //here output will be 0
// #include <iostream>
// using namespace std;
// int main()
// {
// int x;
// cout<<"Enter first number\n";
// cin>>x; // user will give 'x' a value.
// int y;
// cout<<"Enter second number\n";
// cin>>y; // user will give 'y' a value.
// cout<<(x!=y)<<" "<<(x>=y);
// }
// here output will be 1 1 which true and true
// #include <iostream>
// using namespace std;
// int main()
// {
// int x,y;
// cin>>x>>y;
// x+=y;
// x-=y;
// x%=y;
// cout<<x;
// }
// //here output will be 2
//finding the volume of the cylinder by taking radius and height as input
#include<iostream>
using namespace std;
int main(){
int r,h,VofC;
cout <<"enter the radius:"<< r <<endl;
cin >> r;
cout <<"enter the height:"<< h <<endl;
cin >> h;
VofC = 3.14*(r*r)*h;
cout <<"volume of cylinder :"<<VofC << endl;
}