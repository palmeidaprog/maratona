#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

struct Path {
    bool start;
    bool end;

    Path();
    bool const isValid();
};

Path::Path(): start(false), end(false) { }

bool const Path::isValid() {
    return (start && end);
}

void fillPath(std::vector<Path> &v, int const start, int const end);

int main() {
    int n, end;

    cin >> n >> end;
    vector<Path> path(end+1, Path());
    path.at(0).end = true;
    path.at(end).start = true;

    while(n--) {
        int s, e;
        cin >> s >> e;
        if(s != e) {
            fillPath(path, s, e);    
        }
    }

    // validate path
    for(auto p : path) {
        if(!p.isValid()) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}

void fillPath(std::vector<Path> &v, int const start, int const end) {

    v.at(start).start = true;
    v.at(end).end = true;
    for(int i = start+1; i < end; i++) {
        v.at(i).start = true;
        v.at(i).end = true;
    }
}

