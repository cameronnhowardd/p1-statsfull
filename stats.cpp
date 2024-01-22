#include "stats.hpp"
#include "p1_library.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <cmath>
#include <iomanip>
#include <limits>


using namespace std;

//REQUIRES: v is not empty
//EFFECTS: returns a summary of the dataset as (value, frequency) pairs
//  In the returned vector-of-pairs, the inner item is a (value, frequency)
//  pair.  The outer vector contains many of these pairs.  The pairs should be
//  sorted by value.
//  {
//    {1, 2},
//    {2, 3},
//    {17, 1}
//  }
//
// This means that the value 1 occurred twice, the value 2 occurred three times,
// and the value 17 occurred once
string filename;

vector<pair<double, int> > summarize(vector<double> v) { // COME BACK
    vector<pair<double, int> > pairList;
    if (!(v.empty())) {
    sort(v);
    int counter = 0;
    for (int i = 0; i < v.size();){
        
        for (int j = i; j < v.size(); ++j){
            if(v.at(i) == v.at(j)){
                counter++;
            }
            else {
                
                break;
            }
        
        }
        pairList.push_back(make_pair(v.at(i), counter));
                //v.at(j) = v.at(i);
                i += counter;
                counter = 0;
    
    }
   }
    return pairList;
}
//EFFECTS: returns the count of the numbers in v
int count(vector<double> v) {
    int numCount = v.size();
    return numCount;
  assert(false);
}
//REQUIRES: v is not empty
//EFFECTS: returns the sum of the numbers in v
double sum(vector<double> v) {
    if(!(v.empty())){
        double currentSum = v.at(0);
        for (int i = 1; i < v.size(); ++i){
            currentSum += v.at(i);
            }
    return currentSum;
    }
  assert(false);
}
//REQUIRES: v is not empty
//EFFECTS: returns the arithmetic mean of the numbers in v
//  http://en.wikipedia.org/wiki/Arithmetic_mean
double mean(vector<double> v) {
    if(!(v.empty())){
        double sum1 = sum(v);
        double numElements = count(v);
        double mean = sum1 / numElements;
        return mean;
    }
  assert(false);
}
//REQUIRES: v is not empty
//EFFECTS: returns the sample median of the numbers in v
//  http://en.wikipedia.org/wiki/Median#The_sample_median
double median(vector<double> v) { //COME BACK
    if(!(v.empty())){
        int size = v.size();
        sort(v);
        double halfSize = size % 2;
        if (halfSize == 1) {
            int median1 = (v.at((v.size())/2.0)); // whats the issue with size
            return median1; 
        }
        
        else if (halfSize == 0) {
            double half1 = v.size()/2.0;
            double half2 = v.size()/2.0 - 1.0;

            double median2 = (v.at(half1) + v.at(half2)) / 2.0;
            return median2;
                }
        }
        

  assert(false);
}
//REQUIRES:    v is not empty
//EFFECTS: returns the mode of the numbers in v
//  http://en.wikipedia.org/wiki/Mode_(statistics)
//  Example: mode({1,2,3}) = 1
//  Example: mode({1,1,2,2}) = 1
//  Example: mode({2,2,1,1}) = 1
//  Example: mode({1,2,1,2}) = 1
//  Example: mode({1,2,1,2,2}) = 2
//  In the event of a tie, return the smallest value (as in the 
//  above examples)
//HINT 1: use the sort() function provided in p1_library.h
//HINT 2: use a nested loop
//HINT 3: use a variable to remember the most frequent number seen so far
double mode(vector<double> v) {
    if (!(v.empty())) {
    sort(v);
    
    double currentMode = v.at(0); // v.ati
    int frequency = 0; // counter
    double mode;
    for (int i = 0; i < v.size(); i++){
        int counter = 0;
        for (int j = 0; j < v.size(); ++j){
            if(v.at(i) == v.at(j))
                counter++;
        }
        if (counter > frequency) {
            frequency = counter;
            currentMode = v.at(i);
            mode = currentMode;
            return mode;
            }
    }
    }
    assert(false);
}

//REQUIRES: v is not empty
//EFFECTS: returns the min number in v
double min(vector<double> v) { // gets 1 on glbstatus, actual is 0. 
if (!(v.empty())){
   double minVal = v.at(0);
    for (int i = 1; i < v.size(); i++){
        if (v.at(i) < minVal){
            minVal = v.at(i);
        }
    }
    return minVal;
}
  assert(false);
}
//REQUIRES: v is not empty
//EFFECTS: returns the max number in v
double max(vector<double> v) {// gets 1 on qflag, actual value is 2. gets 0 on glbstatus, actual is 1
    sort(v);
    double maxVal = v.at(v.size()-1);
    return maxVal;
    
  assert(false);
}
//REQUIRES: v contains at least 2 elements
//EFFECTS: returns the corrected sample standard deviation of the numbers in v
//  http://en.wikipedia.org/wiki/Standard_deviation#Corrected_sample_standard_deviation
double stdev(vector<double> v) { 
    if (!(v.size() < 2)){
        int numElements = count(v);
        double mean1 = mean(v);
        double sumSquare = 0;
        double oneOverCt = 1.0/(numElements-1);
        for (int i = 0; i < v.size(); ++i) {
            sumSquare += pow((v.at(i) - mean1), 2);
        }

        double standardDev = sqrt(oneOverCt * sumSquare);
        return standardDev;
    }

  assert(false);
}
//REQUIRES: v is not empty
//          p is between 0 and 1, inclusive
//EFFECTS: returns the percentile p of the numbers in v like Microsoft Excel.
//  Refer to the Appendix in the spec for the formula to use.
//  NOTE: the definition in the wiki article uses indexing from 1.  You will
//  need to adapt it to use indexing from 0.
double percentile(vector<double> v, double p) { // gets 2 on qflag 75th, actual is 1. gets 1 on qflag 100th, actual is 2. gets 1 on glbstatus 0th, actual is 0. gets 0 on glbstatus 100th, actual is 1.
    sort(v);
    if (p == 1) {
        return v.at(v.size()-1);
    }

    if (p == 0) {
        return v.at(0);
    }
    double n;
    n = (p * (count(v) - 1)) + 1;
    double fractpart = 0;
    double intpart = 0;
    fractpart = modf(n , &intpart);
    double percentile1 = v.at(intpart-1) + (fractpart) * ((v.at(intpart) - v.at(intpart-1)));
    return percentile1;

    
  assert(false);
}