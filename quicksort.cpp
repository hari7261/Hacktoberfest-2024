#include<bits/stdc++.h>
#include<vector>
using namespace std;

int partition(vector<int>& a, int p,int r) {
    int x = a[p];
    int l=p+1;
    for(r; r >= l; r--) {
        if(a[r] <= x) {
            swap(a[r],a[p]);
            p=r;

            for(l; l<=r; l++) {
                if(a[l] >= x) {
                    swap(a[l],a[p]);
                    p=l;
                    break;
                }
            }
        }
    }
    return p;
}
void quickSort(vector<int> &a, int p, int r)
{
    if(p==r || p>r){
        return;
    }
    int q = partition(a, p, r);
    quickSort (a,p,q-1);
    quickSort (a,q+1,r);
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int j=0; j<n; j++) {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    return 0;
}
