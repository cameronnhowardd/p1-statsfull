/* stats_tests.cpp
 *
 * Unit tests for the simple statistics library
 *
 * EECS 280 Project 1
 *
 * Protip #1: Write tests for the functions BEFORE you implement them!  For
 * example, write tests for median() first, and then write median().  It sounds
 * like a pain, but it helps make sure that you are never under the illusion
 * that your code works when it's actually full of bugs.
 *
 * Protip #2: Instead of putting all your tests in main(),  put each test case
 * in a function!
 */


#include "stats.hpp"
#include <iostream>
#include <cassert>
#include <vector>
#include <cmath>
using namespace std;

void test_sum_small_data_set();

// Add prototypes for you test functions here.
void test_summarize_small_data_set();
void test_sum_small_data_set();
void test_count_small_data_set();
void test_sum_large_data_set();
void test_count_large_data_set();
void test_mean_small_data_set();
void test_median_small_data_set();
//void test_mean_large_data_set();
//void test_median_large_data_set();
void test_mode_small_data_set();
void test_min_small_data_set();
//void test_mode_large_data_set();
void test_min_large_data_set();
void test_max_small_data_set();
void test_stdev_small_data_set();
void test_max_large_data_set();
void test_stdev_large_data_set();
void test_percentile_small_data_set();
void test_percentile_large_data_set();
int main() {
  test_sum_small_data_set();
  test_summarize_small_data_set();
  test_percentile_small_data_set(); //
  test_stdev_small_data_set();
  test_sum_small_data_set(); //
  test_count_small_data_set(); //
  test_sum_large_data_set(); //
  test_count_large_data_set(); //
  test_mean_small_data_set(); //
  test_median_small_data_set();//
  test_mode_small_data_set(); //
  test_min_small_data_set(); //
  test_min_large_data_set();//
  test_max_small_data_set(); ////
  test_percentile_small_data_set(); //
  test_summarize_small_data_set();
  return 0;
  // Call your test functions here

  return 0;
}

void test_sum_small_data_set() {
  cout << "test_sum_small_data_set" << endl;

  vector<double> data;
  data.push_back(1);
  data.push_back(2);
  data.push_back(3);

  assert(sum(data) == 6);

  cout << "PASS!" << endl;
}


// Add the test function implementations here.

void test_summarize_small_data_set(){
cout << "summarize_small_data_set" << endl;
vector<pair<double, int> > pairList1 = {{1, 2}, {2, 1}, {3, 1}, {9, 3}};
vector<double> data;
data.push_back(1);
data.push_back(3);
data.push_back(9);
data.push_back(1);
data.push_back(9);
data.push_back(9);
data.push_back(2);
assert(summarize(data) == pairList1);
cout << "PASS!" << endl; 
}

void test_sum_large_data_set() {
  cout << "sum_large_data_set" << endl;
  vector<double> data;
  data.push_back(1);
  data.push_back(3);
  data.push_back(9);
  data.push_back(1);
  data.push_back(9);
  data.push_back(9);
  data.push_back(2);
  data.push_back(1);
  data.push_back(3);
  data.push_back(9);
  data.push_back(1);
  data.push_back(9);
  data.push_back(9);
  data.push_back(2);
  data.push_back(1);
  data.push_back(3);
  data.push_back(9);
  data.push_back(1);
  data.push_back(9);
  data.push_back(9);
  data.push_back(2);
  assert(sum(data) == 102);
  cout << "PASS!" << endl;
}

void test_count_large_data_set() {
  cout << "test_count_large_data_set" << endl;
  vector<double> data;
  data.push_back(1);
  data.push_back(3);
  data.push_back(9);
  data.push_back(1);
  data.push_back(9);
  data.push_back(9);
  data.push_back(2);
  data.push_back(1);
  data.push_back(3);
  data.push_back(9);
  data.push_back(1);
  data.push_back(9);
  data.push_back(9);
  data.push_back(2);
  data.push_back(1);
  data.push_back(3);
  data.push_back(9);
  data.push_back(1);
  data.push_back(9);
  data.push_back(9);
  data.push_back(2);
  assert(count(data) == 21);
  cout << "PASS!" << endl;
}

void test_count_small_data_set(){
  cout << "count_small_data_set" << endl;
  vector<double> count_data;
  count_data.push_back(1);
  count_data.push_back(3);
  count_data.push_back(9);
  count_data.push_back(1);
  count_data.push_back(9);
  count_data.push_back(9);
  count_data.push_back(2);
  assert(count(count_data) == 7);

  cout << "PASS!" << endl;
}





void test_mean_small_data_set(){
  cout <<  "test_mean_small_data_set" << endl;
   vector<double> data;
    data.push_back(1);
    data.push_back(2);
    data.push_back(3);

    assert(mean(data) == 2);

    cout << "PASS!" << endl;
}

void test_median_small_data_set(){
  cout <<  "test_median_small_data_set" << endl;
   vector<double> data;
    data.push_back(1);
    data.push_back(2);
    data.push_back(2);
    data.push_back(3);
    data.push_back(-1);
    data.push_back(5);

    assert(median(data) == 2);

    cout << "PASS!" << endl;
}


void test_mode_small_data_set() {
  cout <<  "test_mode_small_data_set" << endl;
   vector<double> data;
    data.push_back(1);
    data.push_back(2);
    data.push_back(3);

    assert(mode(data) == 1);

    cout << "PASS!" << endl;
}


void test_min_small_data_set() {
  cout <<  "test_min_small_data_set" << endl;
   vector<double> data;
    data.push_back(1);
    data.push_back(2);
    data.push_back(3);

    assert(min(data) == 1);

    cout << "PASS!" << endl;
}

void test_min_large_data_set(){
  cout << "test_min_large_data_set" << endl;
  vector<double> data;
  data.push_back(1);
  data.push_back(3);
  data.push_back(9);
  data.push_back(1);
  data.push_back(9);
  data.push_back(9);
  data.push_back(2);
  data.push_back(1);
  data.push_back(3);
  data.push_back(9);
  data.push_back(1);
  data.push_back(9);
  data.push_back(9);
  data.push_back(2);
  data.push_back(1);
  data.push_back(3);
  data.push_back(9);
  data.push_back(1);
  data.push_back(9);
  data.push_back(9);
  data.push_back(2);
  data.push_back(1);

  assert(min(data) == 1);
  cout << "PASS!" << endl;
}

void test_max_small_data_set() {
  cout <<  "test_max_small_data_set" << endl;
   vector<double> data;
    data.push_back(1);
    data.push_back(2);
    data.push_back(3);

    assert(max(data) == 3);

    cout << "PASS!" << endl;
}

void test_max_large_data_set(){
  cout << "test_max_large_data_set" << endl;
    vector<double> data;
    data.push_back(1);
    data.push_back(3);
    data.push_back(9);
    data.push_back(1);
    data.push_back(9);
    data.push_back(9);
    data.push_back(2);
    data.push_back(1);
    data.push_back(3);
    data.push_back(9);
    data.push_back(1);
    data.push_back(9);
    data.push_back(9);
    data.push_back(2);
    data.push_back(1);
    data.push_back(3);
    data.push_back(9);
    data.push_back(1);
    data.push_back(9);
    data.push_back(9);
    data.push_back(2);
    data.push_back(1);

    assert(max(data) == 9);
    cout << "PASS!" << endl;
}

void test_stdev_small_data_set(){
  cout <<  "test_stdev_small_data_set" << endl;
   vector<double> data;
    data.push_back(1);
    data.push_back(2);
    data.push_back(3);
    const double epsilon = 0.00001;
    if (abs(stdev(data) - 1) < epsilon) {
      cout << "PASS!" << endl;
    
}
    else {
        cout << "FAIL!" << endl;
      }
}


void test_percentile_small_data_set() {
  cout <<  "test_percentile_small_data_set" << endl;
   vector<double> data;
   double p1;
   p1 = .5;
    data.push_back(1);
    data.push_back(2);
    data.push_back(3);

    assert(percentile(data, p1) == 2);

    cout << "PASS!" << endl;

}


