/**
 @file  MealGenerator class header file for socket programming project. Serves as Meal database.
 @authors Phuc T, Narissa T
 @date 3/10/22
 @version 2.0
 */
#pragma once
#include <vector>
#include <string>
#include <iostream>
#include "Meal.h"

using namespace std;

class MealGenerator
{
public:

		/** Creates and instance of MealGenerator. Initializes the list of meals to the
		default options in the Meal Generator.*/
	    MealGenerator();

		/** Destructor for instance of MealGenerator.*/
		~MealGenerator();

		/**Adds a Meal to the list of meals in the Meal Generator.

		@param name, the name of the meal.
		@param time, the time when the meal is eaten (breakfast, lunch, or dinner).
		@param cuisine, the type of cuisine for the meal
		@return true, if meal did not already exist in Meal Generator. Else, false. 
		*/
		bool addMeal(string, string, string, vector<string>);

		/** Returns the name of random meal from the list of meals in Meal Generator.

		@returns name, the name of the random meal.
		*/
		string getRandomMeal();

		/** Returns the name of random meal from the list of meals in Meal Generator with
		the time from the input parameter, or returns a statement saying that there were
		no meals with the time from the input parameter.

		@param time, the time when the meal is eaten (breakfast, lunch, or dinner).
		@return name, name of the random meal.
		*/
		string getRandomMealByTime(string);

		/** Returns the name of random meal from the list of meals in Meal Generator with
		the cuisine type from the input parameter, or returns a statement saying that there
		were no meals with the cuisine type from the input parameter.

		@param cuisine, the cuisine type of the meal.
		@return name, name of the random meal.
		*/
		string getRandomMealByCuisine(string);

		/** Returns the names of all meals in the in Meal Generator with names
		containing the search term entered, or returns a statement saying that
		there were no results matching the search criteria.

		@param term, the search term.
		@return names, names of matching meals.
		*/
		vector<string> searchMealsByName(string);

		/** Returns the names of all meals in the in Meal Generator with time
		matching the time entered, or returns a statement saying that
		there were no results matching the search criteria.

		@param time, the time when the meal is eaten (breakfast, lunch, or dinner).
		@return names, names of matching meals.
		*/
		vector<string> searchMealsByTime(string);

		/** Returns the names of all meals in the in Meal Generator with 
		cuisine matching the cuisine entered, or returns a statement saying that
		there were no results matching the search criteria.

		@param cuisine, the cuisine type of the meal.
		@return names, names of matching meals.
		*/
		vector<string> searchMealsByCuisine(string);

		/** Returns the names of all meals in the in Meal Generator with an ingredient
		matching the search ingredient, or returns a statement saying that
		there were no results matching the search criteria.

		@param ingredient, the search ingredient.
		@return names, names of matching meals.
		*/
		vector<string> searchMealsByIngredient(string);

		/** Returns the current TIMES vector. 

		@return TIMES, vector holding time of day selections. 
		*/
		vector<string> const getTimesOfDay();

		/** Returns the current CUISINES vector.

		@return CUISINES, vecot holding list of cuisines.
		*/
		vector<string> const getCuisines();


private:
	int numMeals;      // Holds size of Meals.  

	vector<Meal> meals; // Holds all Meals stored in the Meal Generator object.

	const vector<string> TIMES = { "breakfast", "lunch", "dinner" }; // Holds Time of Day selections. 

	vector<string> CUISINES;  // Holds list of cuisines to choose from. 


	/** Private static variable used to ensure that  the seed value for the sRand
	object is only set once.
	*/
	static bool isSeeded;

	/** getRandomMeal helper function to generate random int and seed sRand object.
	@return int, random number between 1 and size of the Meal vector.
	*/
	int randomize(int);

	/**
	 * Utility function to convert strings into all lowercase characters. 
	 * 
	 * @param s, a string input parameter
	 * @return string with all lowercase characters
	 */
	string toLowerCase(string s);
};
