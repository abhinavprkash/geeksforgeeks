

void traverse(int *arr, int n){
    for (int i = 0; i < n; ++i)
    {
      cout<<arr[i];
    }
    cout<<"\n";
    int *p;
    for (int p = arr[0]; p <= &arr[n]; ++p)
    {
      cout<<p;
    }
  }

  int main()
  {
    std::ios::sync_with_stdio(false);
    traverse();
    return 0;
  }
