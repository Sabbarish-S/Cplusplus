int main() {//+
    string n;
    getline(cin, n);
    // use stringstream to convert string to word by word conversion//-
    stringstream iss(n);
    string word;

    while (iss >> word) {
        cout << word << endl;
    }

    return 0;//+
}