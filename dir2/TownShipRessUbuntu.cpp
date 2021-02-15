#include<iostream>
#include<string>
using namespace std;
int wheat=0,corn=0,carrot=0,sugarcane=0,cotton=0,strawberry=0,tomato=0,pine=0,potato=0,cacao=0,rubbertree=0,silk=0;
int egg=0,wool=0,milk=0;
int peach=0,plum=0,watermelon=0;

void getIngredientCount(int itemcode,int count){
	switch(itemcode){
	//Case 1-5: BAKERY
	case 1:
		//Bread
		wheat+=count*2;
		break;
	
	case 2:
		//Cookie
		getIngredientCount(1,count);
		egg+=count*2;
		
		break;	
	
	case 3:
		//Bagel
		getIngredientCount(1,count);
		egg+=count*3;
		getIngredientCount(21,count);
		break;
	
	case 4:
		//Pizza
		getIngredientCount(1,count);
		getIngredientCount(32,count);
		tomato+=count;
		break;
	
	case 5:
		//Potato Bread
		getIngredientCount(1,count);
		potato+=count*2;
		egg+=count*4;
		break;			
		
	//Case 11-14: FAST FOOD RESTAURANT
	case 11:
		//Milkshake
		getIngredientCount(32,count);
		strawberry+=count;
		break;
	
	case 12:
		//Cheeseburger
		wheat+=count*4;
		getIngredientCount(32,count);
		tomato+=count;
		break;	
	
	case 13:
		//Sandwich
		getIngredientCount(1,count);
		getIngredientCount(33,count);
		strawberry+=count;
		break;
		
	case 14:
		//French Fries
		potato+=count*2;
		getIngredientCount(31,count);
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
		getIngredientCount(41,count);
		break;
	
	case 52:
		//Sweater
		getIngredientCount(42,count);
		break;
		
	case 53:
		//Coat
		getIngredientCount(41,count);
		getIngredientCount(42,count);
		break;
	
	case 54:
		//Hat
		getIngredientCount(41,count);
		getIngredientCount(43,count);
		break;
	
	case 55:
		//Dress
		getIngredientCount(42,count);
		getIngredientCount(43,count);
		break;			
	
	//Case 61-64:ICECREAM FACTORY
	case 61:
		//Ice cream
		getIngredientCount(21,count);
		getIngredientCount(31,count);
		getIngredientCount(31,count);
		break;	
	
	case 62:
		//Popsicle
		getIngredientCount(21,count);
		strawberry+=count*2;
		break;
	
	case 63:
		//Frozen yogurt
		getIngredientCount(31,count);
		getIngredientCount(34,count);
		break;	 				
	
	case 64:
		//Eskimo pie
		getIngredientCount(22,count);	
		cacao+=count;
		getIngredientCount(91,count);
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
		getIngredientCount(1,count);
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
		getIngredientCount(21,count);
		break;
	
	case 82:
		//Brownie
		cacao+=count*2;
		getIngredientCount(22,count);
		getIngredientCount(33,count);
		break;
	
	case 83:
		//Cupcake
		egg+=count*5;
		getIngredientCount(21,count);
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
	
	case 93:
		//Wallpaper
		getIngredientCount(92,count);
		getIngredientCount(101,count);
		break;			
	
	//Cases 101-103: Rubber factory
	case 101:
		//Rubber
		rubbertree+=count;
		break;				
	
	case 102:
		//Plastic
		rubbertree+=count*2;
		break;
		
	//Cases 111-114: Jam Factory
	case 111:
		//Strawberry jam
		strawberry+=count*3;
		break;
	
	case 112:
		//Peach marmalade
		peach+=count*3;
		break;
	
	case 113:
		//Watermelon jam
		watermelon+=count*3;
		break;
	
	case 114:
		//Plum jam
		plum+=count*3;
		break;	
	
	default:
		break;	
	}
		
}
int main(){
	
	int count,itemcode,size;
	
	cout<<"WELCOME! !! !!!"<<endl<<endl;
	cout<<"BAKERY"<<endl;
	cout<<"Bread(1) Cookie(2) Bagel(3) Pizza(4) Potato Bread(5)"<<endl;
	cout<<"\nFAST FOOD RESTAURANT"<<endl;
	cout<<"Milkshake(11) Cheeseburger(12) Sandwich(13) Frenchfries(14)"<<endl;
	cout<<"\nSUGAR FACTORY"<<endl;
	cout<<"Sugar(21) Syrup(22) Caramel(23)"<<endl;
	cout<<"\nDAIRY"<<endl;
	cout<<"Cream(31) Cheese(32) Butter(33) Yogurt(34)"<<endl;
	cout<<"\nTEXTILE FACTORY"<<endl;
	cout<<"Cotton fabric(41) Yarn(42) Silk fabric(43)"<<endl;
	cout<<"\nTAILOR SHOP"<<endl;
	cout<<"Shirt(51) Sweater(52) Coat(53) Hat(54) Dress(55)"<<endl;
	cout<<"\nICECREAM FACTORY"<<endl;
	cout<<"Icecream(61) Popsicle(62) Frozen yogurt(63) Eskimo pie(64)"<<endl;
	cout<<"\nSNACK FACTORY"<<endl;
	cout<<"Popcorn(71) Cornchips(72) Granola(73) Potato chips(74)"<<endl;
	cout<<"\nPASTRY FACTORY"<<endl;
	cout<<"Muffin(81) Brownie(82) Cupcake(83)"<<endl;
	cout<<"\nPAPER FACTORY"<<endl;
	cout<<"Paper(91) Paper towel(92) Wallpaper(93)"<<endl;
	cout<<"\nRUBBER FACTORY"<<endl;
	cout<<"Rubber(101) Plastic(102)"<<endl;
	cout<<"\nJAM FACTORY"<<endl;
	cout<<"Strawberry Jam(111) Peach Marmalade(112) Watermelon Jam(113) Plum Jam(114)"<<endl<<endl;
	cout<<"How many kinds of items do you need?:"<<endl;
	cin>>count;
	while(count>0){
		cout<<"Enter item and size: "<<endl;
		cin>>itemcode;
		cin>>size;
		getIngredientCount(itemcode,size);
		--count;
	}
		
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
	cout<<"Total rubbertree count: "<<rubbertree<<endl;
	
	cout<<"Total egg count: "<<egg<<endl;
	cout<<"Total milk count: "<<milk<<endl;
	cout<<"Total wool count: "<<wool<<endl;
	
	cout<<"Total peach count: "<<peach<<endl;
	cout<<"Total watermelon count: "<<watermelon<<endl;
	cout<<"Total plum count: "<<plum<<endl;
	
	return 0;
}
