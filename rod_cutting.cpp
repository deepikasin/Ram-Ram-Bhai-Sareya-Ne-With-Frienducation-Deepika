  if (n <= 0){
        return 0;
    }
    int maxCost = 0;
    for (int i = 0; i < n; i++) {
        maxCost = max(maxCost, price[i] + cutRod(price, n - i - 1));
    }
    return maxCost;
    //T.C=O(2^n)