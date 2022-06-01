#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol11;

/*
Input: [1,8,6,2,5,4,8,3,7]
Output: 49
*/

tuple<vector<int>, int>
testFixture1()
{
  auto input = vector<int>{1, 8, 6, 2, 5, 4, 8, 3, 7};
  return make_tuple(input, 49);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see: " << get<1>(f) << endl;
  Solution sol;
  cout << sol.maxArea(get<0>(f)) << endl;
}

main()
{
  test1();
  return 0;
}