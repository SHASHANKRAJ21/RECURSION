#include<iostream>
#include<string>
using namespace std;

void findsubsequences(string str, string output, int index, int &count) {
    if(index >= str.length()) {
        cout << "->" << output << endl;
        count++;
        return;
    }
    char ch = str[index];
    findsubsequences(str, output, index + 1, count);
    output.push_back(ch);
    findsubsequences(str, output, index + 1, count);
}

int main() {
    string str = "ankish";
    string output = "";
    int index = 0;
    int count = 0;
    findsubsequences(str, output, index, count);
    cout << "Total number of subsequences: " << count << endl;
    return 0;
}
