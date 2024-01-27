        sort(arr, arr + n);
      int curWeight = 0;
      double finalvalue = 0.0;

      for (int i = 0; i < n; i++) {

         if (curWeight + arr[i].weight <= W) {
            curWeight += arr[i].weight;
            finalvalue += arr[i].value;
         } 
         else {
            int remain = W - curWeight;
            finalvalue += (arr[i].value / double (arr[i].weight)) * double (remain);
            break;
         }
      }

      return finalvalue;
    //TC=O(Nlog(N))