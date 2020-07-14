#include <iostream>
typdefine long long ll
template<class T>
class matrix{
private:
    ll x; ll y;
    T** a;   
public:
    matrix() {
        x = 0; y = 0;
    }
    matrix(ll x1, ll y1) {
        if(x1<=0 || y1<=0) return;
        x = x1; y = y1;
        a = new T*[x];
        for(ll i=0;i<x; i++) {
            a[i] = new T[y]; 
        }
    }
    T* operator[] (ll x) {
          return *(a+x);
    } 
    void print(ll x1=-1, ll y1=-1) {
        if(x1==-1 && y1==-1) {
            x1 = x; y1 = y;
        }
        for(ll i=0; i<x1; i++) {
            for(ll j=0; j<y1; j++) 
                std::cout << a[i][j] << " ";
            std::cout << endl;
        }
    }
    void takeinput(ll x1=-1, ll y1=-1) {
        if(x1==-1 && y1==-1) {
            x1 = x; y1 = y;
        }
        for(ll i=0; i<x1; i++) 
            for(ll j=0; j<y1; j++) std::cin >> a[i][j];
    }
};
