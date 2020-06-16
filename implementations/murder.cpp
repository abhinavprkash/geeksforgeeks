#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll sum = 0;
ll merge(ll A[], ll left, ll mid, ll right)
{
  ll i = left, j = mid, k = 0;
  int temp[right - left + 1];
  while (i < mid && j <= right)
  {
    if (A[i] < A[j])
    {
      sum += A[i] * (ll)(right - j + 1);
      temp[k++] = A[i++];
    }
    else
    {
      temp[k++] = A[j++];
    }
  }
  while (i < mid)
  {
    temp[k++] = A[i++];
  }
  while (j <= right)
  {
    temp[k++] = A[j++];
  }
  for (int i = left, k = 0; i <= right; i++, k++)
  {
    A[i] = temp[k];
  }
  return sum;
}

int main(int argc, char const *argv[])
{
  /* code */
  return 0;
}
