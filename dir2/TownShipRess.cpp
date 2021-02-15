#include<iostream>
using namespace std;
int wheat=0,corn=0,carrot=0,sugarcane=0,cotton=0,strawberry=0,tomato=0,pine=0,potato=0,cacao=0,rubber=0,silk=0;
int egg=0,wool=0,milk=0;

void getIngredientCount(int itemcode,int count){
	switch(itemcode){
	//Case 1-5: BAKERY
	case 1:
		//Bread
		wheat+=count*2;
		break;
	
	case 2:
		//Cookie
		wheat+=count*2;
		egg+=count*2;
		
		break;	
	
	case 3:
		//Bagel
		wheat+=count*2;
		egg+=count*3;
		sugarcane+=count;
		break;
	
	case 4:
		//Pizza
		wheat+=count*2;
		milk+=count*2;
		tomato+=count;
		break;
	
	case 5:
		//Potato Bread
		wheat+=count*2;
		potato+=count*2;
		egg+=count*4;
		break;			
		
	//Case 11-14: FAST FOOD RESTAURANT
	case 11:
		//Milkshake
		milk+=count*2;
		strawberry+=count;
		break;
	
	case 12:
		//Cheeseburger
		wheat+=count*4;
		milk+=count*2;
		tomato+=count;
		break;	
	
	case 13:
		//Sandwich
		wheat+=count*2;
		milk+=count*3;
		strawberry+=count;
		break;
		
	case 14:
		//French Fries
		potato+=count*2;
		milk+=count;
		tomato+=count*2;
		break;		
	
	
	//Case 21-23: SUGAR FACTORY	
	case 21:
		//Sugar
		sugarcane+=count;
		break;
	
	case 22:
		//Syrup
		sugarcane+=count*2;
		break;
		
	case 23:
		//Caramel
		sugarcane+=count*3;
		break;
	
	//Case 31-34:DAIRY FACTORY	
	case 31:
		//Cream
		milk+=count;
		break;
		
	case 32:
		//Cheese
		milk+=count*2;
		break;
		
	case 33:
		//Butter
		milk+=count*3;
		break;
	
	case 34:
		//Yogurt
		milk+=count*4;
		break;	
	
	//Case 41-43: Textile factory
	case 41:
		//Cotton Fabric
		cotton+=count*2;
		break;
	
	case 42:
		//Yarn
		wool+=count*2;
		break;
		
	case 43:
		//Silk fabric
		silk+=count*2;
		break;	
		
	//Case 51-54: Tailor Shop
	case 51:
		//Shirt
		cotton+=count*2;
		break;
	
	case 52:
		//Sweater
		wool+=count*2;
		break;
		
	case 53:
		//Coat
		cotton+=count*2;
		wool+=count*2;
		break;
	
	case 54:
		//Hat
		cotton+=count*2;
		silk+=count*2;
		break;		
	
	//Case 61-64:ICECREAM FACTORY
	case 61:
		//Ice cream
		sugarcane+=count;
		milk+=count;
		milk+=count;
		break;	
	
	case 62:
		//Popsicle
		sugarcane+=count;
		strawberry+=count*2;
		break;
	
	case 63:
		//Frozen yogurt
		milk+=count;
		milk+=count*4;
		break;	 				
	
	case 64:
		//Eskimo pie
		sugarcane+=count*2;	
		cacao+=count;
		pine+=count;
		break;
	
	//Cases 71-74: Snack factory
	case 71:
		//Popcorn
		corn+=count*2;	
		break;
	
	case 72:
		//Cornchips
		corn+=count*3;	
		break;
	
	case 73:
		//Granola
		wheat+=count*2;
		strawberry+=count*2;
		break;
	
	case 74:
		//Potato chips
		potato+=count*2;
		break;
		
	//Cases 81-83: Pastry factory
	case 81:
		//Muffin
		wheat+=count*3;
		egg+=count*4;
		sugarcane+=count;
		break;
	
	case 82:
		//Brownie
		cacao+=count*2;
		sugarcane+=count*2;
		milk+=count*3;
		break;
	
	case 83:
		//Cupcake
		egg+=count*5;
		sugarcane+=count*1;
		milk+=count*1;
		break;
	
	//Cases 91-93:Paper factory
	case 91:
		//Paper
		pine+=count;
		break;
	
	case 92:
		//Paper towel
		pine+=count*2;
		break;	
			
					
	default:
		break;	
	}
		
}
int main(){
	int sugar,caramel,syrup;
	int cream,cheese,butter,yogurt;
	int bread,cookie,bagel,pizza,potatobread;
	int milkshake,cheeseburger,sandwich,frenchfries;
	int fabric,yarn,silkfabric,shirt,sweater,coat,hat;
	int icecream,popsicle,frozenyogurt,eskimopie;
	int popcorn,cornchips,granola,potatochips;
	int muffin,brownie,cupcake;
	int paper,papertowel;
	
	cout<<"Enter order for bread,cookie,bagel,pizza,potatobread"<<endl;
	cin>>bread;
	cin>>cookie;
	cin>>bagel;
	cin>>pizza;
	cin>>potatobread;
		
	getIngredientCount(1,bread);
	getIngredientCount(2,cookie);
	getIngredientCount(3,bagel);
	getIngredientCount(4,pizza);
	getIngredientCount(4,potatobread);
									
	cout<<"Enter order for milkshake,cheeseburger,sandwich,frenchfries"<<endl;
	cin>>milkshake;
	cin>>cheeseburger;
	cin>>sandwich;
	cin>>frenchfries;
	
	getIngredientCount(11,milkshake);
	getIngredientCount(12,cheeseburger);
	getIngredientCount(13,sandwich);
	getIngredientCount(14,frenchfries);
	
	
	
	cout<<"Enter order for sugar,syrup,caramel"<<endl;
	cin>>sugar;
	cin>>syrup;
	cin>>caramel;
	
	getIngredientCount(21,sugar);
	getIngredientCount(22,syrup);
	getIngredientCount(23,caramel);
	
	
	
	cout<<"Enter order for cream,cheese,butter,yogurt"<<endl;
	cin>>cream;
	cin>>cheese;
	cin>>butter;
	cin>>yogurt;
	
	getIngredientCount(31,cream);
	getIngredientCount(32,cheese);
	getIngredientCount(33,butter);
	getIngredientCount(34,yogurt);
									
									
	cout<<"Enter order for fabric,yarn,silkfabric"<<endl;
	cin>>fabric;
	cin>>yarn;
	cin>>silkfabric;
	
	getIngredientCount(41,fabric);
	getIngredientCount(42,yarn);
	getIngredientCount(43,silkfabric);
	
								
	
	cout<<"Enter order for shirt,sweater,coat,hat"<<endl;
	cin>>shirt;
	cin>>sweater;
	cin>>coat;
	cin>>hat;							
	
	getIngredientCount(51,shirt);
	getIngredientCount(52,sweater);
	getIngredientCount(53,coat);
	getIngredientCount(54,hat);
																	
	
	cout<<"Enter order for icecream,popsicle,frozenyogurt,eskimopie"<<endl;
	cin>>icecream;
	cin>>popsicle;
	cin>>frozenyogurt;
	cin>>eskimopie;
		
	getIngredientCount(61,icecream);
	getIngredientCount(62,popsicle);
	getIngredientCount(63,frozenyogurt);
	getIngredientCount(64,eskimopie);
	
	cout<<"Enter order for popcorn,cornchips,granola,potatochips"<<endl;
	cin>>popcorn;
	cin>>cornchips;
	cin>>granola;
	cin>>potatochips;
		
	getIngredientCount(71,popcorn);
	getIngredientCount(72,cornchips);
	getIngredientCount(73,granola);
	getIngredientCount(74,potatochips);
	
	cout<<"Enter order for muffin,brownie,cupcake"<<endl;
	cin>>muffin;
	cin>>brownie;
	cin>>cupcake;
		
	getIngredientCount(81,muffin);
	getIngredientCount(82,brownie);
	getIngredientCount(83,cupcake);
	
	
	cout<<"Enter order for paper,papertowel"<<endl;
	cin>>paper;
	cin>>papertowel;
	
	getIngredientCount(91,paper);
	getIngredientCount(92,papertowel);
	
		
	cout<<"Total wheat count: "<<wheat<<endl;
	cout<<"Total corn count: "<<corn<<endl;
	cout<<"Total carrot count: "<<carrot<<endl;
	cout<<"Total sugarcane count: "<<sugarcane<<endl;
	cout<<"Total cotton count: "<<cotton<<endl;
	cout<<"Total strawberry count: "<<strawberry<<endl;
	cout<<"Total tomato count: "<<tomato<<endl;
	cout<<"Total pine count: "<<pine<<endl;
	cout<<"Total silk count: "<<silk<<endl;
	cout<<"Total potato count: "<<potato<<endl;
	cout<<"Total cacao count: "<<cacao<<endl;
	cout<<"Total rubber count: "<<rubber<<endl;
	
	cout<<"Total egg count: "<<egg<<endl;
	cout<<"Total milk count: "<<milk<<endl;
	cout<<"Total wool count: "<<wool<<endl;
	return 0;
}
