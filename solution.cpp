#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <set>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol11;
using namespace std;

/*takeaways
  - use two pointers to achieve time complexity O(n)
  - start from the max width of the container
    and then shrink it
  - shrink the side that is shorter as we try to
    find the max area
*/

int Solution::maxArea(const vector<int> &height)
{
  int n = height.size();
  int l = 0, r = n - 1, maxArea = 0;
  while (r > l)
  {
    /* a container can only hold water up to the minmum height
       of these two lines
    */
    auto h = min(height[r], height[l]);
    maxArea = max((r - l) * h, maxArea);
    /* we are reducing the width of the container
       - need a taller height to have a chance
         to get a larger area
    */
    if (height[l] < height[r])
      l++;
    else
      r--;
  }

  return maxArea;
}
