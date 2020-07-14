#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back;

void print(auto a, auto b, string end="\n") {
    for_each(a,b,[](auto & i){cout << i << " ";});
    cout << end;
}

template <typename T>
class matrix{
public:
    vector<vector<T> > vec;   
    // constructor
    matrix(size_t i, size_t j = -1) {
        if(j==-1) j = i;
        vec.resize(i);
        for(auto & v : vec) {
            v.resize(j);
            fill(v.begin(),v.end(),0);
        }
    }

    matrix() {
    }

    vector<T> & operator[](size_t x) {
        return  vec[x];
    } 
    // methods
    void resize(size_t i, size_t j=-1) {
        if(j==-1) j = i;
        vec.resize(i);
        for(auto & v : vec) {
            v.resize(j);
        }
    }
    size_t row_size() {
        return vec.size();
    }
    size_t column_size() {
        return vec[0].size(); 
    }
    void print(size_t i=-1, size_t j=-1) {
        if(i==-1 && j==-1) { i = this->row_size(); j = this->column_size();}
        else if(j==-1) {j = min(i,this->column_size());}
        else {
            i = min(i, this->row_size());
            j = min(j, this->column_size());
        }
        for(size_t a=0; a<i; a++) {
            for(size_t b=0; b<j; b++) cout << vec[a][b] << " "; 
            cout << endl;
        }
    }
    // operator overloading for mathematical operations
    matrix<T> operator*(matrix<T> & b) {
        auto a = *this;

        if(a.column_size() != b.row_size()) {
            cout << "incompatible dimensions\n";
            return matrix(0);
        }

        matrix<T> c(a.row_size(),b.column_size());

        for(size_t i=0; i<a.row_size(); i++) {
            for(size_t j=0; j<b.column_size(); j++) {
                for(size_t k=0; k<a.column_size(); k++) {
                    c[i][j] = c[i][j] + (a[i][k])*(b[k][j]);
                }
            }
        }
        return c;
    }
};

int main() {

}
