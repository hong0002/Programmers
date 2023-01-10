#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int width_Max = 0;
    int height_Max = 0;
    if(sizes[0][0] > sizes[0][1]) {
        width_Max = sizes[0][0];
        height_Max = sizes[0][1];
    } else {
        height_Max = sizes[0][0];
        width_Max = sizes[0][1];
    }
    
    for(int i=1; i<sizes.size(); i++){
        if(sizes[i][0] > sizes[i][1]) {
            if(sizes[i][0] > width_Max) {
                width_Max = sizes[i][0];
            }
            if(sizes[i][1] > height_Max) {
                height_Max = sizes[i][1];
            }
        } else{
            if(sizes[i][1] > width_Max) {
                width_Max = sizes[i][1];
            }
            if(sizes[i][0] > height_Max) {
                height_Max = sizes[i][0];
            }
        }      
    }
    answer = width_Max * height_Max;
    return answer;
}
