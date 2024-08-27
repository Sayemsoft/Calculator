#include <bits/stdc++.h>

using namespace std ;

int main ()
{
      // ios::sync_with_stdio(false), cin.tie(0), cout.tie(0) ;
      cout << "Enter Cr and Point, enter 0 0 as cr and point to finish entering data and see result" << endl ;
      cout << endl ;

      cout << "Cr  Point" << endl ;
      double a = 1 , b ;
      double A = 0, B = 0 ;

      while (a != 0)
      {
            cin >> a >> b ;
            A+=a ; B+=b ;
      }

      cout << "Your cgpa = " << B/A  ;
      
      return 0 ;
}