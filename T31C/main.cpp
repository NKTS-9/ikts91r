#include <iostream>
#include <fstream>

using namespace std;

struct Name {
    int id;
};

int n = 4;

void Read (Name arr[]) {
    ifstream input;
    input.open("m.txt");

    for (int i = 0; i < n; i++)
        input >> arr[i].id;

    input.close();
}

void Display (Name arr[]) {
    for (int i = 0; i < n; i++)
        cout << arr[i].id;
}

void Correct (Name arr[]) {
    int i = 0;
    cin >> i;
    cin >> arr[i].id;
}

int Search (Name arr[]) {
    return 0;
}

void Write (Name arr[], int m) {
    ofstream out;
    out.open("out.txt");
    for (int i = 0; i < n; i++)
        out << arr[i].id;

    out << arr[m].id;

}

int main()
{
    Name *name = new Name[4];

    Read(name);
    Display(name);
    Correct(name);
    int s_id = Search(name);
    Display(name);
    Write(name, s_id);

    cout << "Hello world!" << endl;
    return 0;
}
