/**
 @file  Meal class header file
 @for MealTime socket programming project
 @authors Phuc T, Narissa T
 @date 2/12/22
 @version 1.0
 */
#pragma once
#include <string>
#include <vector>

using namespace std;

class Meal
{
private:
	string name;
	string cuisine;
	string time;
	vector<string> ingredients;

public:
	Meal();

	~Meal();

	/*
	Parameterized constructor for Meal class.
	Parameters: the name of the meal
	            the time when the meal is eaten (breakfast, lunch, or dinner)
				the type of cuisine for the meal            
	*/
	Meal(string name, string cuisine, string time, vector<string> ingredients);

	/*
	Function:   getName
	Returns:    the cuisine type for the meal.
	*/
	string getName();
	
	/*
	Function:   getCuisine
	Returns:    the cuisine type for the meal.
	*/
	string getCuisine();

	/*
	Function:   getTime
	Returns:    the cuisine type for the meal.
	*/
	string getTime();

	/*
	Function:   getIngredients
	Returns:    the ingredients for the meal.
	*/
	vector<string> getIngredients();

};

