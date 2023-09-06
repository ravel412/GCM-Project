

#include <iostream> 
using namespace std;
int main() {
    int a, b, max, ebob;
    cout << " Birinci sayiyi giriniz.. ";
    cin>>a;    
    cout << " İkinci sayiyi giriniz.. ";
    cin>> b;
    
    ebob = 0;
    
    if(a>=b) 
    max = a;
    
    else 
    max = b;
    
    
    for(int i=1 ; i<=max ; i++) {
       
       if(a%i==0 && b%i==0 ) 
       ebob = i;
        
    }
    
    cout <<" Ebob degeri, "<<ebob<<" dur.";
    
}