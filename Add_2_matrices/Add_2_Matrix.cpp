#include <bits/stdc++.h>
using namespace std;

void main()
{
   int t, c, n1[20][20], n2[20][20], s[20][20];

   cout<<"Enter the number of rows(should be >1 and <20): ";
   cin>>t;
   cout<<"Enter the number of column(should be >1 and <20): ";
   cin>>c;
   cout << "Enter the elements of first 1st matrix: ";
   for (int i = 0;i<t;i++ ) {
     for (int j = 0;j < c;j++ ) {
       cin>>n1[i][j];
     }
   }
   cout << "Enter the elements of first 1st matrix: ";
   for (int i = 0;i<t;i++ ) {
     for (int j = 0;j<c;j++ ) {
       cin>>n2[i][j];
     }
   }

   cout<<"Output: ";
   for (int i = 0;i<t;i++ ) {
      for (int j = 0;j<c;j++ ) {
        s[i][j]=n1[i][j]+n2[i][j];
        cout<<s[i][j]<<" ";
      }
   }

}
