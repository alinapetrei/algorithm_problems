#pragma once
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solutions {
public:
	void printArray(int array[], int n);

	/* 
		Find a pair with the given sum in an array
		Given an unsorted integer array, find a pair with the given sum in it. 
	*/
	void findPairBruteForce(int array[], int n, int target);
	void findPairSortingArray(int array[], int n, int target);
	void findPairUsingMap(int array[], int n, int target);
};