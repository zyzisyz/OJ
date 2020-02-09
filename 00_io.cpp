/*************************************************************************
	> File Name: 00_io.cpp
	> Author: Yang Zhang 
	> Mail: zyziszy@foxmail.com 
	> Created Time: Sat 11 Jan 2020 07:52:04 AM CST
 ************************************************************************/

#include<iostream>
#include<iomanip>
#include<cstdio>

using namespace std;

#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)


int main(void){
	float x=10.0/3;
	printf("%.4f\n", x);
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<x<<endl;
	cout<<INT_MAX<<endl;
	cout<<INT_MIN<<endl;
}
