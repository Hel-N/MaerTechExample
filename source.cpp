#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    vector<int> v(500);
    generate(v.begin(), v.end(), rand);
    
    for(int i = 0; i< v.size(); ++i){
        cout << v[i] << " ";    
    
    }
    
    return 0;
}
