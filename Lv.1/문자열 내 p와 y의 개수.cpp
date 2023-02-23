#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pcount = 0, ycount = 0;
    for(int i=0; i<s.length(); i++) {
        if(s.substr(i, 1) == "p" || s.substr(i, 1) == "P") {
            pcount++;
        }
        else if(s.substr(i, 1) == "y" || s.substr(i, 1) == "Y") {
            ycount++;
        }
    }
    if(pcount == ycount) {
        answer = true;
    }
    else {
        answer = false;
    }

    return answer;
}
