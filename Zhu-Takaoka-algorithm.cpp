#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct node {
    int x, y;
};

bool cmp_x(const node& a, const node& b) {
    return a.x < b.x;
}

bool cmp_y(const node& a, const node& b) {
    return a.y < b.y;
}

int main() {
    vector<node> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        node t;
        cin >> t.x >> t.y;
        v.push_back(t);
    }
    sort(v.begin(), v.end(), cmp_x);
    int ans = 0x7fffffff;
    for (int i = 0; i < n; i++) {
        int ymin = 0x7fffffff;
        for (int j = i; j < n; j++) {
            ymin = min(ymin, v[j].y);
            ans = min(ans, (v[j].x - v[i].x) * (ymin - v[i].y));
        }
    }
    cout << ans << endl;
    return 0;
}