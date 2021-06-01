int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
            int bestSum = 1000000000, sum = 0;
            if(B==0)
            return 0;

            for (int i = 0; i < A.size() - 2; i++) {

                int ptr1 = i + 1, ptr2 = A.size() - 1;
                while (ptr1 < ptr2) {
                    sum = A[i] + A[ptr1] + A[ptr2];
                    if (abs(B - sum) < abs(B - bestSum)) {
                        bestSum = sum;
                    }
                    if (sum > B) {
                        ptr2--;
                    } else {
                        ptr1++;
                    }
                }
            }
return bestSum;
}
