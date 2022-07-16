#include <vector>
using namespace std;

void reOrderArray(vector<int> &array) {
    vector<int> arraytemp(array);
    int n = array.size();
    int odd_index = 0;
    int even_index = n - 1;
    for (int i = 0; i < n; ++i){
        if(arraytemp.at(i)%2 == 1){
            array.at(odd_index++) = arraytemp.at(i);
        }
        else{
            array.at(even_index--) = arraytemp.at(i);
        }
    }
}