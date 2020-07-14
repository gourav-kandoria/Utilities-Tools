#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    ifstream in; string str;
    char* ch = argv[1];
    in.open(ch);
    if(!in.fail()) {in.close(); goto place;}
    //replace the text "path-to-template-file/templt.txt" in the following line with the path to your template file
    str = (string)"cp " +  (string)"path-to-template-file/templt.txt " + (string)argv[1]; 
    system(str.c_str());
    place:
    //replace the name of your editor with name "code" in the following line
    str = (string)"code " + (string)argv[1];
    system(str.c_str());
}
