#include "stats.hpp"
#include "p1_library.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <cmath>
#include <iomanip>
#include <limits>
// main.cpp



using namespace std;
int main () {
    string filename;
    string column_name;
    cout << "enter a filename" << endl;
    cin >> filename;
    cout << "enter a column name" << endl;
    cin >> column_name;
    cout << "reading column " << column_name << " from " << filename << endl;
    vector<double> v = extract_column(filename, column_name);
    
    
    
    vector<double> v2;
     for( int i = 0; i < v.size(); ++i) {
        v2.push_back(v.at(i));
    }
    vector<pair<double, int> > sumData = summarize(v2);

   

    cout << "Summary (value: frequency)" << endl;
    for (int i = 0; i < sumData.size(); ++i) {
        cout << sumData.at(i).first << ": " << sumData.at(i).second << endl;
    }

    cout << endl;

    double count1 = count(v);

    cout << "count = " << count1 << endl;
    
    double sum1 = sum(v);

    cout << "sum = " << sum1 << endl;

    double mean1 = mean(v);

    cout << "mean = " << mean1 << endl;

    double stdev1 = stdev(v);

    cout << "stdev = " << stdev1 << endl;

    double median1 = median(v);

    cout << "median = " << median1 << endl;

    double mode1 = mode(v);

    cout<< "mode = " << mode1 << endl;

    double min1 = min(v);

    cout << "min = " << min1 << endl;

    double max1 = max(v);

    cout << "max = " << max1 << endl;

    double perc0 = percentile(v, 0);
    double perc25 = percentile(v, 0.25);
    double perc50 = percentile(v, 0.5);
    double perc75 = percentile(v, 0.75);
    double perc100 = percentile(v,1);

    cout << "  " << "0th percentile = " << perc0 << endl;
    cout << " " << "25th percentile = " << perc25 << endl;
    cout << " " << "50th percentile = " << perc50 << endl;
    cout << " " << "75th percentile = " << perc75 << endl;
    cout << "100th percentile = " << perc100 << endl;












}
