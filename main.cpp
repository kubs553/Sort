#include <bits/stdc++.h>
using namespace std;

vector < int > t1 = {5,1,2,3};
vector < int > t2 = {4,6,8,9,7};

int sortuj() {
  sort(t1.begin(), t1.end());
  sort(t2.begin(), t2.end());

  cout << "Tablica 1 po sortowaniu: ";
  for (int i = 0; i < t1.size(); i++)
    cout << t1[i] << " ";
  cout << endl;

  cout << "Tablica 2 po sortowaniu: ";
  for (int i = 0; i < t2.size(); i++)
    cout << t2[i] << " ";
  cout << endl;
}

int polacz() {
  vector < int > wektor(t1.size() + t2.size());
  vector < int > ::iterator iteratorr, liczby;
  iteratorr = set_union(t1.begin(),
    t1.end(),
    t2.begin(),
    t2.end(),
    wektor.begin());

  cout << "Po zlaczeniu: ";
  for (liczby = wektor.begin(); liczby != iteratorr; ++liczby)
    cout << * liczby << " ";
}

int main() {
  sortuj();
  polacz();
  return 0;
}
