#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int main() {
    srand((unsigned int)time(NULL));
    vector<int> v(500);
    generate(v.begin(), v.end(), rand);
    
    int res = 0;
    int mult = 1;
    
    for(int i = 0; i< v.size(); ++i){
        cout << v[i] << " ";    
        res += v[i];
    }
    
    for(int i = 0; i< v.size(); ++i){   
        mult *= v[i];
    }
    
    int del = mult / res;
    cout << endl << "Del: " << del << endl;
    cout << endl << "Result: " << res << endl;
    cout << endl << "Multiplex: " << mult << endl;
    
    return 0;
}
