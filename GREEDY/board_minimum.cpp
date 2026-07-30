#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int square(vector<int> &vert, vector<int>& hori){
    sort(vert.begin(), vert.end(), greater<int>());
    sort(hori.begin(), hori.end(), greater<int>());

    int hz = 1; // horizontal pieces
    int vr = 1; // vertical pieces

    int v = 0, h = 0;
    int ans = 0;

    while(h < hori.size() && v < vert.size()){
        if(vert[v] > hori[h]){
            ans += vert[v] * hz; // vertical cut
            vr++;
            v++;
        }
        else{
            ans += hori[h] * vr; // horizontal cut
            hz++;
            h++;
        }
    }

    // remaining horizontal cuts
    while(h < hori.size()){
        ans += hori[h] * vr;
        hz++;
        h++;
    }

    // remaining vertical cuts
    while(v < vert.size()){
        ans += vert[v] * hz;
        vr++;
        v++;
    }

    return ans;
}

int main(){
    vector<int> vert = {2,1,3,1,4};
    vector<int> hori = {4,1,2};

    cout << square(vert, hori);
}