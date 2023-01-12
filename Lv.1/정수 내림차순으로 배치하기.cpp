#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> v;
    int tmp = 0;
    string s = to_string(n);
    
    for(int i=0; i<s.length(); i++) {
        v.push_back(stoi(s.substr(i, 1)));
    }
    for(int i=0; i<v.size(); i++) {
        for(int j=i; j<v.size(); j++) {
            if(v[i] < v[j]) {
                tmp = v[i];
                v[i] = v[j];
                v[j] = tmp;
            }
        }
    }
    s = "";
    for(int i=0; i<v.size(); i++) {
        s.append(to_string(v[i]));
    }
    answer = stoll(s); 
    
    return answer;
}
