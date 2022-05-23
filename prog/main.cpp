#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <programmer.h>
#include <date.h>
#include <sstream>

using namespace std;

date make_date_from_string(string s)
{
    stringstream ss(s);
    int y, m, d;
    ss >> y >> m >> d;
    date result(y, m, d);
    return result;
}

programmer make_proger_from_string(string s)
{
    stringstream ss(s);
    vector<string> v;
    string field;
    while(ss >> field) {
        v.push_back(field);
    }
    date d = make_date_from_string(v[5] + " " + v[6] + " " + v[7]);
    programmer result(v[0], v[1], v[2], v[3], v[4], d, v[8], v[9]);
    return result;
}

vector<programmer> find_need_programmers(vector<programmer> progers)
{
    vector<programmer> result;
    for (int i = 0; i < progers.size(); i++) {
        if (progers[i].birthday.year <= 1997)
            result.push_back(progers[i]);
    }
    return result;
}

int main()
{
    vector<programmer> progers;

    ifstream fin("data.txt");
    ofstream fout("out.txt");

    for (string line; getline(fin, line);) {
        int pos;
        while ((pos = line.find(";")) != string::npos) {
            line.replace(pos, 1, "");
        }
        while ((pos = line.find(",")) != string::npos) {
            line.replace(pos, 1, "");
        }
        progers.push_back(make_proger_from_string(line));
    }

    vector<programmer> need_progers = find_need_programmers(progers);

    for (int i = 0; i < need_progers.size(); i++) {
        fout << need_progers[i].to_string() << endl;
    }

    return 0;
}
