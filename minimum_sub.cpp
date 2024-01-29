class Solution {
public:
    bool check(map < char, int > mpt, map < char, int > mps) {
  for (auto i: mpt) {
    if (mps.find(i.first) == mps.end()) return false;
    if (mps[i.first] < i.second) return false;
  }
  return true;
}

string makeString(int i, int j, string s) {
  string str = "";
  while (i <= j) {
    str += s[i];
    i++;
  }
  return str;
}

string minWindow(string s, string t) {
  map < char, int > mpt;
  map < char, int > mps;
  for (int i = 0; i < t.length(); i++) {
    mpt[t[i]]++;
  }
  int i = 0, j = 0;
  int ans = INT_MAX;
  string str = "";
  while (j < s.length()) {
    if (mpt.find(s[j]) != mpt.end()) {
      if (mps.size() == 0) i = j;
      mps[s[j]]++;
    }
    if (j - i + 1 >= t.length()) {
      bool f = check(mpt, mps);
      if (f) {
        mps.clear();
        if (ans > j - i + 1) {
          str = makeString(i, j, s);
          ans = j - i + 1;
        }
        j = i + 1;
        i = j;
        continue;
      }
    }
    j++;
  }
  return str;
}
};