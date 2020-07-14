#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    ifstream infile; 
    infile.open(argv[1]);
    if(!infile) {
        cout << "error copying file. Possible reasons might be ";
        cout << "File may not exist in the directory you are looking in.\n";
        return 0;
    }
    infile.close();
    string str = "xclip -selection clipboard " + (string)argv[1];
    system(str.c_str());
    return 0;
}