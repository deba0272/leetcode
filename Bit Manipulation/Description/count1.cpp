class solution{
public:
    int setBits(int N) {
        // Write Your Code here
        int l;
        int cnt=0;
        while(N!=0){
            l=N&1;
            cnt+=l;
            N=N>>1;
        }
        return cnt;
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
     int N;
    cin>>N;
    solution obj;
    int cnt= obj.setBits(N);
    cout<<cnt<<endl;
    }
    return 0;
}