#include <iostream>
using namespace std;

int main() {
  /*

  int n;
  cin >> n; // this acts like a prompt taking from the user nothing will execute
            // until prompt is provided

  cout << "value of N " << n << endl;

  // cin when we use this as propmt it does not include space tabs and enter as some propmt but cin.get() does and result the ascii value of corresponding buttons

*/

// int a,b;

// cout << "Enter the value of a" << endl;
// cin >> a ;
// cout << "Enter the value of b" << endl ;
// cin>> b ;
// if (a > b){
//     cout <<"The greater number is a = "<< a <<endl;
// }else{
//     cout <<"The greater number is b = "<< b <<endl;

// }


int n;
cout << "Enter the value for summing up" << endl;
cin >> n ;
int i = 1;
int sum = 0;

while(i<=n){

  if(i%2 == 0){

    sum += i;
   
  }
  ++i;
}
 cout << sum << endl;
}