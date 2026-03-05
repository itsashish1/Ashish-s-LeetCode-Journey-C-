// Flood Fill
// An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.
// You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].
// To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus the same for those pixels, and so on. Replace the color of all of the aforementioned pixels with color.
// Return the modified image after performing the flood fill.

#include &lt;vector&gt;

using namespace std;

class Solution {
public:
    vector&lt;vector&lt;int&gt;&gt; floodFill(vector&lt;vector&lt;int&gt;&gt;&amp; image, int sr, int sc, int color) {
        int original = image[sr][sc];
        if(original == color) return image;
        dfs(image, sr, sc, original, color);
        return image;
    }
private:
    void dfs(vector&lt;vector&lt;int&gt;&gt;&amp; image, int r, int c, int original, int color) {
        if(r &lt; 0 || r &gt;= image.size() || c &lt; 0 || c &gt;= image[0].size() || image[r][c] != original) return;
        image[r][c] = color;
        dfs(image, r+1, c, original, color);
        dfs(image, r-1, c, original, color);
        dfs(image, r, c+1, original, color);
        dfs(image, r, c-1, original, color);
    }
};