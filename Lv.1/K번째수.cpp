#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> v;
    int tmp;
    
    for(int i=0; i<commands.size(); i++) {
        for(int j=commands[i][0] - 1; j<commands[i][1] ; j++) {
            v.push_back(array[j]);
        }
        for(int j=0; j<v.size(); j++) {
            for(int k=j; k<v.size(); k++) {
                if(v[j] > v[k]) {
                    tmp = v[j];
                    v[j] = v[k];
                    v[k] = tmp;
                }
            }
        }
        answer.push_back(v[commands[i][2] - 1]);
        v.clear();
    }
    
    return answer;
}
