#include<iostream>
using namespace std;
bool isPrime(int n){
        bool ans=0;

    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            ans=1;
        }
       
        
        /* code */
    }
     if(ans==1){
            return 0;
        }
        else{
            return 1;
        }
    
}
int main(){
     int n;
    cout << "enter n :" << endl;
    cin >> n;
    if(isPrime(n)){
        cout<<"It is prime"<<endl;
    }
    else{
        cout<<"It is not Prime";
    }

return 0;
}