int sum=0;
    for(int i=0;i<v.size();i++){
        int x=1;
        for(int j=i+1;j<v.size();j++){
            sum+=v[i][j]*x;
            x*=2;
        }
    }