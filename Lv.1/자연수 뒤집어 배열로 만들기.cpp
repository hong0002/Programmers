#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    string s = to_string(n);
    for(int i=s.length()-1; i>=0; i--) {
        answer.push_back(stoi(s.substr(i,1)));    
    }
    return answer;
}
