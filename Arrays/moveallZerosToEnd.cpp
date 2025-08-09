/* Brute Force Approach*/
#include <iostream>
using namespace std;
#include <vector>

int main() {
  cout << "Enter the no of elements in the array :" << endl;
  int n ;
  cin >> n ;
  vector <int> arr(n);
  cout << "Enter the array elements :" <<endl;
  for(int i = 0 ; i < n ; i++) {
    cin >> arr[i];
  }
  vector <int> temp1;
  vector <int> temp2;
  for ( int i = 0 ; i < n ; i++) {
       if( arr[i] != 0){
        temp1.push_back(arr[i]);
       }
       else {
        temp2.push_back(arr[i]);
       }
  }
  int n1= temp1.size();
  int n2 = temp2.size();
  vector <int> finalArray(n);
  for ( int i = 0 ; i < n1 ; i++) {
    finalArray[i]= temp1[i];
  }
  for ( int j = n1 ;  j < n ; j++) {
    finalArray[j] = 0;
  }
  cout << "Array after moving all zeros to the end :" << endl;
  for ( int i = 0 ; i < n ; i++) {
    cout << finalArray[i] << " ";
  }
  return 0;
}


/* Optimal Solution*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n ;
  cout << "Enter the no of elements in the array :" << endl;
  cin >> n ;
  cout << "Enter the array elements :" << endl;
  vector <int> arr(n);
  for ( int i = 0 ; i < n ; i++) {
    cin >> arr[i];
  }
  int j = -1;
  for ( int i = 0 ; i < n ; i++ ) {
    if ( arr[i] = 0 ) {
      j = i ;
      break ;
    }
  }
  if( j == -1) {
    cout << "No zeros found in the array" << endl;
  }
  for ( int i = j +1 ; i < n ; i++) {
    if ( arr[i]  != 0) {
      swap(arr[i] , arr[j]);
      j++ ;
    }
  }
  cout << "Array after moving all zeros to the end :" << endl;
  for ( int i = 0 ; i < n ; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}