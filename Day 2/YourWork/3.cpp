#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int,pair<string, double> >student_data;
    student_data = {91, {"Maria", 3.60}}; 

    cout << "ID: " << student_data.first << "\n";
    cout << "Name: " << student_data.second.first << "\n";
    cout << "CGPA: " << student_data.second.second << "\n";
    
    return 0;
}