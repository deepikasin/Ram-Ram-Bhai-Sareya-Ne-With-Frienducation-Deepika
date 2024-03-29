    int square_root(int a)
    {
        int r=(int)sqrt(a);
        if(r*r==a)
            return 1;
        return 0;
    }
    int numSquares(int n) {
      int count=0;
       while(n%4==0)
       {
           n/=4; 
       }
        if(n%8==7)
            return 4;
        if(square_root(n))
            return 1;
        for(int i=1;i*i<=n;i++ )
        {
            if(square_root(n-i*i))
                return 2;
        }
        return 3;
    }
    //tc=O(under root N)