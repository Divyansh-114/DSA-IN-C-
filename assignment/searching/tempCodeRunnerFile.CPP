 now calcualting the discount 
        vector<int>dis;
        for(int i=0;i<n;i++){
            if(NSE[i]==-1)
            dis[i]=prices[i];
            else
            dis[i]=(prices[i]-NSE[i]);
        }
        
        for(int i=0;i<dis.size();i++){
            cout<<dis[i]<<" ";
        }