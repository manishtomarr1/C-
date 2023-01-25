#include<algorithm>
#include<vector>
#include<string>
using namespace std;

string StringChallenge(string str) {

    sort(str.begin(), str.end());
    vector<int>vec;
    vector<char>vec1;
    int i = 0;
    int count = 0;

    while (i < str.size()) {

        if (i < str.size() - 1) {
            if (str[i] == str[i + 1]) {
                count++;
                i++;
            }
            else if (str[i] <= str[i + 1]) {
                vec.push_back(count);
                vec1.push_back(str[i]);
                count = 0;
                i++;
            }
        }

    }

    cout << str << endl;

    // code goes here  

    return str;
}

int main() {

    StringChallenge("aabbcde");
}