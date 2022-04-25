/**
 @file  MealGenerator class implementation file
 @for MealTime socket programming project
 @authors Phuc T, Narissa T
 @date 3/10/22
 @version .0
 */
#include <string>
#include <iostream>
#include "MealGenerator.h"

bool MealGenerator::isSeeded = false;

MealGenerator::MealGenerator() {

	// Add cuisines to CUISINE vector. 
	this->CUISINES.push_back("american");
	this->CUISINES.push_back("mexican");
	this->CUISINES.push_back("portuguese");
	this->CUISINES.push_back("indian");
	this->CUISINES.push_back("japanese");
	this->CUISINES.push_back("vietnamese");
	this->CUISINES.push_back("italian");
	this->CUISINES.push_back("thai");
	this->CUISINES.push_back("russian");
	this->CUISINES.push_back("russian");
	this->CUISINES.push_back("chinese");

	// Store Times of Days in const vars. 
	const string BREAKFAST = this->TIMES[0];
	const string LUNCH = this->TIMES[1];
	const string DINNER = this->TIMES[2];

	// Populate initial Meal list. 
	// Breakfast
	addMeal("Scrambled eggs", BREAKFAST, "american", {"egg", "cheese"});
	addMeal("Avocado toast", BREAKFAST, "american", {"avocado", "bread"});
	addMeal("Breakfast burritos", BREAKFAST, "american", {"egg", "avocado", "sausage"});
	addMeal("Sausage egg and cheese mcgriddle", BREAKFAST, "american", {"sausage", "egg", "cheese"});
	addMeal("Buttermilk pancakes", BREAKFAST, "american", {"potato"});
	addMeal("Chicken and waffles", BREAKFAST, "american", {"potato"});
	addMeal("Eggs benedict", BREAKFAST, "american", {"potato"});

	addMeal("Huevos Rancheros", BREAKFAST, "mexican", {"potato"});
	addMeal("Papas con Chorizo", BREAKFAST, "mexican", {"potato"});
	addMeal("Chilaquiles", BREAKFAST, "mexican", {"potato"});
	addMeal("Migas", BREAKFAST, "mexican", {"potato"});
	addMeal("Churros waffles", BREAKFAST, "mexican", {"potato"});

	addMeal("Pastel del nata", BREAKFAST, "portuguese", {"potato"});
	addMeal("portuguese baked eggs", BREAKFAST, "portuguese", {"potato"});
	addMeal("Broa de milho", BREAKFAST, "portuguese", {"potato"});
	addMeal("Bolo do Caco", BREAKFAST, "portuguese", {"potato"});

	addMeal("Persarattu Upma", BREAKFAST, "indian", {"potato"});
	addMeal("Khura", BREAKFAST, "indian", {"potato"});
	addMeal("Litti Chokha", BREAKFAST, "indian", {"potato"});
	addMeal("Muthiya", BREAKFAST, "indian", {"potato"});
	addMeal("Dhokla", BREAKFAST, "indian", {"potato"});
	addMeal("Chakuli Pitha", BREAKFAST, "indian", {"potato"});

	addMeal("Tamagoyaki (rolled omelette)", BREAKFAST, "japanese", {"potato"});
	addMeal("Omurice (omelette rice)", BREAKFAST, "japanese", {"potato"});
	addMeal("Dashi eggs with rice", BREAKFAST, "japanese", {"potato"});

	addMeal("Xoi", BREAKFAST, "vietnamese", {"potato"});
	addMeal("Banh cuon", BREAKFAST, "vietnamese", {"potato"});
	addMeal("Chao Long (rice porrage)", BREAKFAST, "vietnamese", {"potato"});

	// Lunch
	addMeal("Onigiri", LUNCH, "japanese", {"potato"});
	addMeal("Okanomiyaki", LUNCH, "japanese", {"potato"});
	addMeal("Takoyaki", LUNCH, "japanese", {"potato"});

	addMeal("Soup, salad, and breadsticks", LUNCH, "italian", {"potato"});
	addMeal("Pizza", LUNCH, "italian", {"potato"});
	addMeal("Bruschetta", LUNCH, "italian", {"potato"});

	addMeal("Grilled cheese and tomato soup", LUNCH, "american", {"potato"});
	addMeal("Philly cheesesteak", LUNCH, "american", {"potato"});
	addMeal("BLT sandwich", LUNCH, "american", {"potato"});
	addMeal("Cobb salad", LUNCH, "american", {"potato"});
	addMeal("Tater tots", LUNCH, "american", {"potato"});

	addMeal("Banh mi", LUNCH, "vietnamese", {"aaa"});
	addMeal("Banh xeo", LUNCH, "vietnamese", {"aaa"});
	addMeal("Bot chien", LUNCH, "vietnamese", {"aaa"});
	addMeal("Bun cha gio", LUNCH, "vietnamese", {"aaa"});
	addMeal("Goi cuon", LUNCH, "vietnamese", {"aaa"});

	addMeal("Butter chicken", LUNCH, "indian", {"aaa"});
	addMeal("Dal makhani", LUNCH, "indian", {"aaa"});
	addMeal("Saag paneer", LUNCH, "indian", {"aaa"});
	addMeal("Chana masala", LUNCH, "indian", {"aaa"});

	// Dinner
	addMeal("Pho", DINNER, "vietnamese", {"aaa"});
	addMeal("Cha ca", DINNER, "vietnamese", {"aaa"});
	addMeal("Cao lau", DINNER, "vietnamese", {"aaa"});
	addMeal("com hen", DINNER, "vietnamese", {"aaa"});
	addMeal("Bun bo hue", DINNER, "vietnamese", {"aaa"});

	addMeal("Pad thai", DINNER, "thai", {"aaa"});
	addMeal("Pad see ew", DINNER, "thai", {"aaa"});
	addMeal("Tom yum", DINNER, "thai", {"aaa"});
	addMeal("Thai panang curry", DINNER, "thai", {"aaa"});

	addMeal("Chicken tinga", DINNER, "mexican", {"bbb"});
	addMeal("Empanadas", DINNER, "mexican", {"bbb"});
	addMeal("Chili con carne", DINNER, "mexican", {"bbb"});
	addMeal("Tacos", DINNER, "mexican", {"bbb"});
	addMeal("Enchiladas", DINNER, "mexican", {"bbb"});

	addMeal("Pelmeni", DINNER, "russian", {"bbb"});
	addMeal("Chicken kiev", DINNER, "russian", {"bbb"});
	addMeal("Beef stroganoff", DINNER, "russian", {"bbb"});
	addMeal("Shashlyk", DINNER, "russian", {"bbb"});
	addMeal("Draniki", DINNER, "russian", {"bbb"});

	addMeal("Blini", DINNER, "russian", {"bbb"});
	addMeal("Kulich", DINNER, "russian", {"bbb"});
	addMeal("Buckwheat porridge", DINNER, "russian", {"bbb"});
	addMeal("Syrniki", DINNER, "russian", {"bbb"});
	addMeal("Ponchiki", DINNER, "russian", {"bbb"});

	addMeal("Peking duck", DINNER, "chinese", {"bbb"});
	addMeal("Xiaolong Bao", DINNER, "chinese", {"bbb"});
	addMeal("Mapo tofu", DINNER, "chinese", {"bbb"});
	addMeal("Dim sum", DINNER, "chinese", {"bbb"});
	addMeal("Biang Biang Noodles", DINNER, "chinese", {"bbb"});
	addMeal("Hot and sour soup", DINNER, "chinese", {"ccc"});

	addMeal("Cheeseburger and fries", DINNER, "american", {"ccc"});
	addMeal("Mac and cheese", DINNER, "american", {"ccc"});
	addMeal("Meatloaf", DINNER, "american", {"ccc"});
	addMeal("New england clam chowder", DINNER, "american", {"ccc"});
	addMeal("Manhattan clam chowder", DINNER, "american", {"ccc"});
	addMeal("Chili and cornbread", DINNER, "american", {"ccc"});
	addMeal("Sloppy joes", DINNER, "american", {"ccc"});

	addMeal("Arroz de pato", DINNER, "portugese", {"ccc"});
	addMeal("Cataplana", DINNER, "portugese", {"ddd", "xyz"});
	addMeal("Alcatra", DINNER, "portugese", {"ddd", "xyz"});
	addMeal("Caldo Verde", DINNER, "portugese", {"ddd", "xyz"});
	addMeal("Portuguese Tomato Rice", DINNER, "portugese", {"ddd", "xyz"});

	addMeal("Ramen", DINNER, "japanese", {"ddd", "xyz"});
	addMeal("Udon", DINNER, "japanese", {"ddd", "xyz"});
	addMeal("Yakisoba", DINNER, "japanese", {"ddd", "xyz"});
	addMeal("gyudon (beef bowl)", DINNER, "japanese", {"ddd", "xyz"});
	addMeal("Sushi", DINNER, "japanese", {"ddd", "xyz"});

	numMeals = meals.size(); // Init number of Meals. 
};

MealGenerator::~MealGenerator() {};

bool MealGenerator::addMeal(string name, string time, string cuisine, vector<string> ingredients) {
	// Check if name of meal is not in meals already. 
	for (int i = 0; i < numMeals; i++) {
		if (name == meals.at(i).getName()) {
			return false;
		}
	}

	// Check if cuisine listed in CUISINES. If not, add to cuisines. 
	for (int i = 0; i < CUISINES.size(); i++) {
		if (cuisine == CUISINES.at(i)) {
			break;
		}
		else
			CUISINES.push_back(cuisine);
	}
	Meal dish(name, time, cuisine, ingredients);
	meals.push_back(dish);

	return true;
}

string MealGenerator::getRandomMeal() {
	// Generate random Meal using current size of Meal vector. 
	int i = randomize(numMeals);
	return meals.at(i).getName();
}

string MealGenerator::getRandomMealByTime(string time) {
	// Holds current list of Meals matching input time field. 
	vector<Meal> mealsByTime;

	// Iterate over all Meals in collection, push matches to mealsByTime. 
	for (int i = 0; i < numMeals; i++) {
		if (time == meals.at(i).getTime()) {
			mealsByTime.push_back(meals.at(i));
		}
	}
	// No Meals of that time of day stored yet.
	if (mealsByTime.size() == 0) {
		return "";
	}
	// 1 or more Meal of input time of day exists. 
	else {
		int i = randomize(mealsByTime.size()); return mealsByTime.at(i).getName();
	}
}

string MealGenerator::getRandomMealByCuisine(string cuisine) {
	// Holds current list of Meals with matching input cuisine field.
	vector<Meal> mealsByCuisine;  

	// Iterate over all Meals in collection, push matches to mealsByCuisine. 
    for (int i = 0; i < numMeals; i++) {
        if (cuisine == meals.at(i).getCuisine()) {
            mealsByCuisine.push_back(meals.at(i));
        }
    }

	// No Meals of that cuisine type stored yet.
    if (mealsByCuisine.size() == 0) {
        return "";   
    }
	// 1 or more Meal of input cuisine exists. 
    else { 
        int i = randomize(mealsByCuisine.size()); 
		return mealsByCuisine.at(i).getName();
    }
}

vector<string> MealGenerator::searchMealsByName(string term) {
	// Holds list of Meals with matching input cuisine field.
	vector<string> mealsByName;  
	// Holds lowercase version of meal name.
	string lowerName;

	// Iterate over all Meals in collection, push matches to mealsByName. 
    for (int i = 0; i < numMeals; i++) {
		lowerName = toLowerCase(meals.at(i).getName());
        if (lowerName.find(term) != -1) {
            mealsByName.push_back(meals.at(i).getName());
        }
    }
	return mealsByName;
}

vector<string> MealGenerator::searchMealsByTime(string time) {
	// Holds list of Meals with matching input time field.
	vector<string> mealsByTime;  

	// Iterate over all Meals in collection, push matches to mealsByTime. 
    for (int i = 0; i < numMeals; i++) {
        if (time == meals.at(i).getTime()) {
            mealsByTime.push_back(meals.at(i).getName());
        }
    }
	return mealsByTime;
}

vector<string> MealGenerator::searchMealsByCuisine(string cuisine) {
	// Holds list of Meals with matching input cuisine field.
	vector<string> mealsByCuisine;  

	// Iterate over all Meals in collection, push matches to mealsByCuisine. 
    for (int i = 0; i < numMeals; i++) {
        if (cuisine == meals.at(i).getCuisine()) {
            mealsByCuisine.push_back(meals.at(i).getName());
        }
    }
	return mealsByCuisine;
}

vector<string> MealGenerator::searchMealsByIngredient(string ingredient) {
	// Holds list of Meals with matching input ingredient field.
	vector<string> mealsByIngredient;

	// Iterate over all Meals in collection, push matches to mealsByIngredient. 
   	for (int i = 0; i < numMeals; i++) {
		for (int j = 0; j < meals.at(i).getIngredients().size(); j++) {
			if (ingredient == meals.at(i).getIngredients().at(j)) {
				mealsByIngredient.push_back(meals.at(i).getName());
				break;
			}
		}
    }
	return mealsByIngredient;
}

vector<string> const MealGenerator::getTimesOfDay()
{ return this->TIMES;}

vector<string> const MealGenerator::getCuisines()
{ return this->CUISINES;}


int MealGenerator::randomize(int options) {
	if (!isSeeded) {
		srand(time(NULL));
		isSeeded = true;
	}
	return (rand() % options);
}

string MealGenerator::toLowerCase(string s) {
    string result = "";
    for (char i : s) {
        result += tolower(i);
    }
    return result;
}
