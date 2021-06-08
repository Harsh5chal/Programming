vector<int> Solution::maxone(vector<int> &arr, int m) {
    int n=arr.size();
    // Left and right indexes of current window
    int wL = 0, wR = 0;

    // Left index and size of the widest window
    int bestL = 0, bestWindow = 0;

    // Count of zeroes in current window
    int zeroCount = 0;

    // While right boundary of current window doesn't cross
    // right end
    while (wR < n)
    {
        // If zero count of current window is less than m,
        // widen the window toward right
        if (zeroCount <= m)
        {
            if (arr[wR] == 0)
              zeroCount++;
            wR++;
        }
        // If zero count of current window is more than m,
        // reduce the window from left
        if (zeroCount > m)
        {
            if (arr[wL] == 0)
              zeroCount--;
            wL++;
        }
        // Updqate widest window if this window size is more
        if (wR-wL > bestWindow)
        {
            bestWindow = wR-wL;
            bestL = wL;
        }
    }
    vector<int> best;
    // Print positions of zeroes in the widest window
    for (int i=0; i<bestWindow; i++)
    {
        best.push_back(bestL+i);
    }
    return best;
}
