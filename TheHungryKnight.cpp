//Hello, my name is Merdan Garlyyev, and I am taking CS231 this semester. My program called "TheHungryKnight.cpp". My program greets the Knight and his 
//convoy. It also gives to the Knight different food options from which he can choose. After the Knight orders food the total charge of expenses 
//(tax inclusive) will be provided to him. Due date for this project is Jan 29th, 2023

#include <iostream>

using namespace std;

int main(){
	// Lines 11-13 serve as intro between the owner of the place and the Knight
	cout <<"Hello, dear visitors. I am Mr. Brown, and I am owner of this place. I am happy to see you at my finest Inn and Tavern at San Francisco, CA." << endl;
	cout <<"Hello Mr. Brown. I am the Knight of this city. My convoy and I are very hungry and would like to have a bite at your place." << endl;
	cout <<"Perfect. I will assist you today, dear Knight" << endl;
	
	//I ask user to give name to the Knight
	string firstName;
	cout <<"What is your name dear Sir Knight: ";
	cin >> firstName;
	
	//I ask user to give the main characterstic of the Knight
	string characteristic;
	cout <<"What is your main characteristic: ";
	cin >> characteristic;
	
	//Line 26 puts name and characteristic into single line
	cout <<"Nice to meet you Sir " << firstName << " the " << characteristic << endl;
	
	//Here I tell user that I have specific foods and a drink in my tavern
	cout <<"Sir " << firstName << " the " << characteristic << ", I can offer you these foods and a drink: " << endl;
	
	// Lines 32-45 shows the foods and drink options that the owner of Tavern has. I stored the foods and a drink in appropriate variables
	string food_opt1 = "Kebab";
	cout << food_opt1 << endl;
	
	string food_opt2 = "Lasagna";
	cout << food_opt2 << endl;
	
	string food_opt3 = "Mac and cheese";
	cout << food_opt3 << endl;
	
	string food_opt4 = "Chicken pasta";
	cout << food_opt4 << endl;
	
	string alc_drink = "Vodka";
	cout << alc_drink << endl;
		
	//In lines 48-66 I ask the user how many items of each food and a drink he needs for his party
	int amount_of_food1;
	cout <<"How many of " << food_opt1 << " will your party require us to prepare, Sir " << firstName << " the " << characteristic << ":\n";
	cin >> amount_of_food1;
	
	int amount_of_food2;
	cout <<"How many of " << food_opt2 << " will your party require us to prepare, Sir " << firstName << " the " << characteristic << ":\n";
	cin >> amount_of_food2;
	
	int amount_of_food3;
	cout <<"How many of " << food_opt3 << " will your party require us to prepare, Sir " << firstName << " the " << characteristic << ":\n";
	cin >> amount_of_food3;
	
	int amount_of_food4;
	cout <<"How many of " << food_opt4 << " will your party require us to prepare, Sir " << firstName << " the " << characteristic << ":\n";
	cin >> amount_of_food4;
	
	int amount_of_alc_drink;
	cout <<"How many of " << alc_drink << " will your party require us to prepare, Sir " << firstName << " the " << characteristic << ":\n";
	cin >> amount_of_alc_drink;
	
	//In Lines 69-73 I stored the costs of each product 
	int opt1_cost = 10;
	int opt2_cost = 49;
	int opt3_cost = 17;
	int opt4_cost = 19;
	int alc_cost = 15;

	//JUST FOR MYSELF. Another way how to present lines 80-85
	//int subtotal = opt1_cost * amount_of_food1 + opt2_cost * amount_of_food2 + opt3_cost * amount_of_food3 + opt4_cost * amount_of_food4 + alc_cost * amount_of_alc_drink ;
	//cout << "Subtotal price: " << subtotal << " silver pieces." << endl;
	
	//The lines 80-85 show how I added the number of ordered items with the cost of an item. So, by that I got Subtotal price
	int subtotal = opt1_cost * amount_of_food1;
	subtotal += opt2_cost * amount_of_food2;
	subtotal += opt3_cost * amount_of_food3;
	subtotal += opt4_cost * amount_of_food4;
	subtotal += alc_cost * amount_of_alc_drink;
	cout << "Subtotal price: " << subtotal << " silver pieces." << endl;
	
	//lines 88-90 show how I added taxes to the subtotal cost. By doing so I got the total cost including taxes
	float taxes = 1.05;
	float total_cost = subtotal * taxes;
	cout << "The total cost including taxes: " << total_cost << " silver pieces." << endl;
	
	//Final phrase of the program
	cout <<"Thank you for coming and have a great day!" << endl;
	
}

