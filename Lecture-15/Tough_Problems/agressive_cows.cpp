


Algorithm LCS(X, Y):
    Input: Strings X of length n, Y of length m
    Output: Length of the Longest Common Subsequence of X and Y

    // Step 1: Create a DP table of size (n+1) x (m+1)
    Initialize a 2D array dp of size (n+1) x (m+1)

    // Step 2: Fill the DP table using the recurrence relation
    for i = 1 to n:
        for j = 1 to m:
            if X[i-1] == Y[j-1]:
                dp[i][j] = dp[i-1][j-1] + 1
            else:
                dp[i][j] = max(dp[i-1][j], dp[i][j-1])

    // Step 3: The length of the LCS is in dp[n][m]
    return dp[n][m]
