#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
class UnionFind {
private:
    vector<int> p, rank, setSize;
    int numSets;
public:
    UnionFind(int N) {
        p.assign(N, 0);
        // To begin with, everyone is their own parent:
        for (int i = 0; i < N; i++)
            p[i] = i;

        // the height of all trees are zero:
        rank.assign(N, 0);

        // the sizes of the individual sets are one:
        setSize.assign(N, 1);

        // the number of sets is N:
        numSets = N;
    }

    // FindSet(i): return the representative element of the set that i belongs to.

    int findSet(int i) {
        // if already at a representative element,
        // signified by the fact that the parent pointer points to the element itself,
        // return;

        if (p[i] == i)
            return i;

        // otherwise find the representative of the parent,
        // but also perform path compression by pointing the current element
        // to the final representative:

        else
            return p[i] = findSet(p[i]);
    }

    // isSameSet(i,j): returns true if and only if i and j belong to the same set.

    bool isSameSet(int i, int j) {
        // Observe that i and j belong to the same set
        // if and only if they have the same representative.
        return findSet(i) == findSet(j);
    }

    // sizeOfSet(i): returns the size of the set that the element i belongs to.

    int sizeOfSet(int i) {
        return setSize[findSet(i)];
    }

    // numDisjointSets(): returns the number of sets being maintained currently.

    int numDisjointSets() {
        return numSets;
    }

    void unionSet(int i, int j) {
        if (isSameSet(i, j))
            return;

        int x = findSet(i);
        int y = findSet(j);

        if (rank[x] > rank[y])
            swap(x, y);

        p[x] = y;

        if (rank[x] == rank[y])
            rank[y]++;

        setSize[y] += setSize[x];
        numSets--;

    }


};
vector<int> terrorist(int n, int m, vector<vector<int>>&adj) {
    if (n == 1 && m == 0)return {0};
    for (int x = n; x >= 1; x--) sort(adj[x].rbegin(), adj[x].rend());
    vector<int> ans;
    UnionFind dsu(n);
    for (int x = n - 2; x >= 1; x--) {
        for (int nb : adj[x + 1]) {
            if (nb < x + 1) break;
            dsu.unionSet(x, nb - 1);
        }
        int ncc = dsu.numDisjointSets();

        ans.push_back(ncc - x);

    }
    reverse(ans.begin(), ans.end());
    ans.push_back(1);
    ans.push_back(0);
    // for(int x:ans) cout<<x<<' ';
    //   cout<<'\n';
    return ans;

}


int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>>v(n + 1);

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    vector<int>ans = terrorist(n, m, v);
    for (int i : ans)
    {
        cout << i << "\n";
    }

}
