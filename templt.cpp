#include <bits/stdc++.h>
using namespace std;
#define pow5 100000
#define pow6 1000000
#define pow7 10000000
#define pow8 100000000
#define pow9 1000000000
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<string> vs;
template <class T>
void print(const T & a) {
    cout << a << endl;
}

template <class T>
void takeinput(T & a,const ll n) {
    for(ll i=0; i<n; i++) cin >> a[i];
}

template <class T>
void print(const T & a,const ll n,const bool b=0) {   /* if you set b==1 then each element will print on the new line
                                                    else they will print on the same line with spaces between them */
    for(ll i=0; i<n; i++) {
        if(!b) cout << a[i] << " ";
        if(b) cout << a[i] << endl;
    }
    if(!b) cout << endl;
}


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
                cout << a[i][j] << " ";
            cout << endl;
        }
    }
    void takeinput(ll x1=-1, ll y1=-1) {
        if(x1==-1 && y1==-1) {
            x1 = x; y1 = y;
        }
        for(ll i=0; i<x1; i++) 
            for(ll j=0; j<y1; j++) cin >> a[i][j];
    }
};

/*--------------------------------------------------------------------------------------------------------*/



int main(int argc, char const *argv[]) {
}
