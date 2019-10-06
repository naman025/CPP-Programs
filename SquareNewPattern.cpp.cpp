#include <iostream>
#define temp (n*i)+j
using namespace std;
void printPattern(int n){

    int i,j;

    for(i = 0; i < n; i += 2){
        for(j = 1; j <= n; j++){
            cout << temp << "\t";
        }
        cout<< endl;
    }

    i = ((n%2==0)?(n-1):(n-2));
    for( ; i>0 ; i -= 2){
        for(j=1 ; j <= n; j++){
            cout << temp << "\t";
        }
        cout << endl;
      }

}
int main()
{

    int n;
    cin >> n;
    printPattern(n);
    return 0;
}
