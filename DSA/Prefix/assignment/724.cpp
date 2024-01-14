int main(){
    int n=nums.size();
    int leftsum=0,rightsum=0;
    for(auto x:arr)rightsum+=x;
    for(int i=0;i<n;i++)
    {
        rightsum-=arr[i];
        if(leftsum==rightsum)return i;
        leftsum+=arr[i];
    }return -1;
}