#include<iostream>
#include<string>
using namespace std;
string restaurant;               //// Stores the chosen restaurant's name
string fast();                      // Function prototype for the fast food menu
string desi();
string name, location, PhoneNo;        // Customer details
int paymentMethod, confirmationChoice;      // Payment and confirmation choices
string food;                                // The chosen food item
int quantity;                                      // Quantity of the chosen item
int temp = 0;                                 // Temporary variable for storing total cost
string y;                                  // Used to store customer’s response for more items
int j, i;                                 // Loop counters



int main()
{


    string faster[16] = { "cheezious","optp","howdy","wildwings",
        "roasters","lit","newyorkers","burgerlab","nandos"
        ,"dailydehli","ranchers","kabajeesfriedchicken","alkaif","mandi" };

    string desis[16] = { "tandoori","buttkarahi","mianJee","charsitikka",
         "hotnspicy" , "sudentbiriyani","chayeKhana","bismillah","usmania",
        "jeffBBq","banuBeef","ginyaki","shinwari","balatikkahouse" };

    cout << "\t\t\t\t\t\a\033[33mWELCOME TO FOOD O TOPIA!\033[0m" << endl;               //prints the welcome msg
    cout << "\t\t\t\t\tWE'D LOVE TO SERVE YOU!" << endl;

    cout << endl;
    cout << "Which restaurant would you like to order from?" << endl;      //choosing restaurants
    cin >> restaurant;
    cout << "The restaurant you ordered is  " << restaurant << endl;


    cout << endl;

    for (i = 0;i <= 16;i++)              //Checking the Selected Restaurant
    {

        if (restaurant == faster[i])      //if it belongs to faster list it will call fast
        {

            cout << fast();

        }

    }


    for (i = 0;i <= 16;i++)
    {
        if (restaurant == desis[i])         //if it belong to desis list it will call desi
        {

            cout << desi();

        }
    }


    for (i = 0;i <= 16;i++)
    {
        if (restaurant != faster[i] || restaurant != desis[i])      //or operator: not in any list
        {
            cout << "\a\033[31mERROR OCCURED!\033[0m\nThe error that occured could be of four reasons: \n1.Recheck your spellings.\n2.The restuarant you chose is in the boycott list.\n3.Invalid data Input\n4.The restaurant you entered is out of service\n\nRefresh and Try Again" << endl;
            break;
        }


    }

}


string desi()
{
    cout << endl;
    cout << "\t\t\t\a\033[33mDESI MENU\033[0m" << endl;
    cout << "\t\t\t---------" << endl;



    string desiMenu[50][3] =
    {
        {"\033[32mMAIN_COURSES(RS.1500)\033[0m", "\t\t\t", ""},
        {"------------------------", "\t\t\t", ""},
        {"Chicken_Karahi", "\t\t\t", "A classic chicken dish cooked in rich spices and tomatoes."},
        {"Mutton_Karahi", "\t\t\t", "Tender mutton pieces cooked in a flavorful karahi masala."},
        {"Beef_Karahi", "\t\t\t", "Juicy beef pieces in a traditional karahi style."},
        {"Boneless_Handi", "\t\t\t", "Creamy boneless chicken handi, full of spices."},
        {"----------------", "\t\t\t", ""},
        {"\033[32mBBQ (RS.1200)\033[0m", "\t\t\t", ""},
        {"----------------", "\t\t\t", ""},
        {"Chicken_Tikka", "\t\t\t", "Charcoal-grilled chicken leg, marinated in spicy yogurt."},
        {"Malai_Boti", "\t\t\t", "Creamy and juicy chicken skewers."},
        {"Seekh_Kebabs", "\t\t\t", "Ground chicken or beef kebabs with spicy herbs."},
        {"Reshmi_Kebabs", "\t\t\t", "Soft and juicy chicken kebabs with mild spices."},
        {"----------------", "\t\t\t", ""},
        {"\033[32mRICE_DELIGHTS (RS.1000)\033[0m", "\t\t\t", ""},
        {"----------------", "\t\t\t", ""},
        {"Chicken_Biryani", "\t\t\t", "Fragrant rice with spiced chicken."},
        {"Mutton_Pulao", "\t\t\t", "Mildly spiced rice cooked with tender mutton."},
        {"Beef_Yakhni_Pulao","\t\t", "Rice cooked in aromatic beef stock."},
        {"Zarda", "\t\t\t\t", "Traditional sweet yellow rice with nuts and raisins."},
        {"----------------", "\t\t\t", ""},
        {"\033[32mDESI_WRAPS (RS.800)\033[0m", "\t\t\t", ""},
        {"----------------", "\t\t\t", ""},
        {"Seekh_Kebab_Rolls", "\t\t", "Kebabs wrapped in naan with chutney."},
        {"Malai_Boti_Wrap", "\t\t\t", "Creamy chicken boti wrapped in fresh naan."},
        {"----------------", "\t\t\t", ""},
        {"\033[32mBEVERAGES (RS.200)\033[0m", "\t\t\t", ""},
         {"----------------", "\t\t\t", ""},
        {"Lassi", "\t\t\t\t", "Sweet or salted yogurt drink."},
        {"Mint_Lemonade", "\t\t\t", "Refreshing mint-flavored lemonade."},
        {"Soft_Drinks", "\t\t\t", "Chilled fizzy drinks."},
        {"Kashmiri-Chai", "\t\t\t", "Rich and creamy pink tea."}
    };




    for (i = 0;i < 34;i++)
    {
        for (j = 0;j < 3;j++)
        {
            cout << desiMenu[i][j];

        }

        cout << endl;
        cout << endl;


    }

    cout << "PLease Write what you would like to have? " << endl;
    cin >> food;


    for (i = 0;i < 34;i++)
    {
        for (j = 0;j < 3;j++)
        {
            if (food == desiMenu[i][j])
            {


                if (i >= 2 && i <= 6)
                {
                    cout << "enter quantity" << endl;
                    cin >> quantity;                                                //input the quantity u want to order
                    quantity = quantity * 1500;                                          //quantity times food for bill
                    cout << "your  current bill is " << quantity << endl;
                    cout << "would you like something else ?(yes/no) " << endl;   //ask if the user want sth else?
                    cin >> y;
                }

                else if (i >= 8 && i <= 13)
                {
                    cout << "enter quantity" << endl;
                    cin >> quantity;
                    quantity = quantity * 1200;
                    cout << "your  current bill is " << quantity << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

                else if (i >= 15 && i <= 20)
                {
                    cout << "enter quantity" << endl;
                    cin >> quantity;
                    quantity = quantity * 1000;
                    cout << "your  current bill is " << quantity << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

                else if (i >= 22 && i <= 25)
                {
                    cout << "enter quantity" << endl;
                    cin >> quantity;
                    quantity = quantity * 800;
                    cout << "your  current bill is " << quantity << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;


                }

                else if (i >= 27 && i <= 31)
                {
                    cout << "enter quantity" << endl;
                    cin >> quantity;
                    quantity = quantity * 200;
                    cout << "your  current bill is " << quantity << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }


            }


        }

    }





   

    if (y == "yes" || y == "no")
    {
        do
        {
            temp = quantity;
            if (y == "yes")
            {
                cout << "please Write what you would like to have? " << endl;  //what uer wants to eat?

                cin >> food;                                                 //user telling his/her choice
                for (i = 0;i < 40;i++)                                     //in menu array, there are 40 rows so checking one by one
                {
                    for (j = 0;j < 3;j++)                                  //there are 3 columns
                    {
                        if (food == desiMenu[i][j])                       //if food is present in desi menu
                        {

                            if (i >= 2 && i <= 6)                         //in the range of 2 to 6 burgers price would be... eg 1500
                            {


                                
                                cout << "enter quantity" << endl;         //how many food items to be added?
                                cin >> quantity;
                                quantity = (quantity * 1500) + temp;                        //multipyilng quantity of food with price of food
                                cout << "your  current bill is " << quantity << endl;  //calculating bill
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }


                            else if (i >= 8 && i <= 13)
                            {
                               
                                cout << "enter quantity" << endl;
                                cin >> quantity;
                                quantity = (quantity * 1200) + temp;
                                cout << "your  current bill is " << quantity << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }

                            else if (i >= 15 && i <= 20)
                            {
                                //q = t;
                                cout << "enter quantity" << endl;
                                cin >> quantity;
                                quantity = (quantity * 1000) + temp;
                                cout << "your  current bill is " << quantity << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }

                            else if (i >= 22 && i <= 25)
                            {
                                cout << "enter quantity" << endl;
                                cin >> quantity;
                                quantity = (quantity * 800) + temp;
                                cout << "your  current bill is " << quantity << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }
                            else if (i >= 27 && i <= 31)
                            {
                                cout << "enter quantity" << endl;
                                cin >> quantity;
                                quantity = (quantity * 200) + temp;
                                cout << "your  current bill is " << quantity << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;
                            }

                        }

                    }


                }

            }



        } while (y == "yes");


    }

    if (y == "yes" || y == "no")                          //enter users details
    {


        // Collect user details
        cout << "Please give your following details!" << endl;

        cout << "Enter your Full Name: ";                        //FILE HANDLING: save these details for next time if the same person orders
        cin.ignore();
        getline(cin, name);

        cout << "Enter your Location: ";
        getline(cin, location);

        cout << "Enter Your Phone No: ";
        getline(cin, PhoneNo);

        // Collect payment method
        cout << "Payment Method: \n1. Credit Card \n2. Cash on Delivery" << endl;
        cin >> paymentMethod;                                           // User chooses payment method (1 or 2)
        cin.ignore();

        switch (paymentMethod) {
        case 1:  // If Credit Card selected                   
            cout << "Please Pay Online!" << endl;            //for onilne
            break;                                          // Exiting the switch statement after handling credit card payment
        case 2:  // If Cash on Delivery selected
            cout << "Your Order is Placed!" << endl;
            break;
        default:
            cout << "\a\033[31mInvalid Payment Method!\033[m" << endl;
        }

        // Ask for order confirmation method
        cout << "Please Confirm Your Order: \n1. Call \n2. Message" << endl;
        cin >> confirmationChoice;
        cin.ignore();

        switch (confirmationChoice) {
        case 1:
            cout << "We will call you to confirm your order!" << endl;
            break;
        case 2:
            cout << "You will receive a message to confirm your order!" << endl;
            break;
        default:
            cout << "\a\033[31mInvalid choice for order confirmation!\033[0m" << endl;
        }

        cout << endl;
        cout << "Your Reciept: " << endl;
        cout << "Total Bill:  " << quantity << endl;
        cout << "Users name: " << name << endl;
        cout << "Users address " << location << endl;

        cout << endl;

        cout << "\a\033[33m\tThank you for your order! Please wait while we prepare your food. We'll be there shortly to deliver it to you!\033[0m" << endl;

        cout << "\a\033[33m\tThanks for Choosing us!\033[0m" << endl;  // Thank the user 
        
    }
    else
    {


        cout << "\a\033[31mInvalid Input\033[0m";
    }
    return 0;
}



string fast()
{

    cout << "\t\t\t\a\033[33mMENU\033[0m" << endl;
    cout << "\t\t\t----" << endl;

    string n;

    string mennu[100][3] =                   // 2D array holding the menu items and their descriptions and prices
    {
        {"\a\033[33mMAIN:\033[0m " , "\t\t\t\t\t\t","      "},
        {"----------","\t\t\t\t\t","----------"},
        {"\033[32mBURGERS (RS.1199)\033[0m" ,"\t\t\t\t" "OUR SPECIALS" },
        {"----------","\t\t\t\t\t","----------"},
        {"Doom_Damyiaki","\t\t\t\t\t", "A bold fusion of crispy chicken,\n\t\t\t\t\t\ttangy teriyaki glaze, \n\t\t\t\t\t\ttand creamy avocado slaw."},
        {"Midnight_Crave","\t\t\t\t\t","A late-night indulgence with a double beef patty,\n\t\t\t\t\t\tcaramelized onions,and smoked cheddar."},
        {"Alchemy_Starve","\t\t\t\t\t","A magical mix of a lamb patty,\n\t\t\t\t\t\tgoat cheese, \n\t\t\t\t\t\tand roasted red pepper relish. " },
        {"Fiery_Fireworks","\t\t\t\t\t","A spicy explosion of grilled beef patty,\n\t\t\t\t\t\tfiery jalapeños,\n\t\t\t\t\t\tand smoked paprika cheese. " },
        {"Galactic_Melt","\t\t\t\t\t","An out-of-this-world combination of beef patty,\n\t\t\t\t\t\trocket leaves,and tangy plum chutney." },
        {"Garden_Jewel(Vegetarian)","\t\t\t","A vibrant veggie patty made with fresh ingredients,\n\t\t\t\t\t\tgrilled zucchini,and and basil pesto drizzle"},
        {"----------","\t\t\t\t\t\t","----------"},
        {"\033[32mDEALS: \033[0m" , "\t\t\t\t\t\t","      "},
        {"----------","\t\t\t\t\t\t","----------"},
        {"DEAL.1(Rs.2999):","\t\t\t\t","Fiery fireworks *2\n\t\t\t\t\t\tAlchemy Starve * 2\n\t\t\t\t\t\tFries, 1.5l drinks."},
        {"DEAL.2(Rs.2999):","\t\t\t\t","Garden Jewel *2\n\t\t\t\t\t\tDoom Damyiaki * 2\n\t\t\t\t\t\tNuggets, Onion Rings."},
        {"----------","\t\t\t\t\t","----------"},
        {"\033[32mPIZZA (RS.2199)\033[0m" ,"\t\t\t\t\t" "OUR SPECIALS" },
        {"----------","\t\t\t\t\t","----------"},
        {"Margherita_Classic","\t\t\t\t","A timeless favorite with mozzarella,\n\t\t\t\t\t\tfresh basil and tomato sauce."},
        {"Pepperoni_Feast","\t\t\t\t\t","Loaded with crispy pepperoni slices,\n\t\t\t\t\t\tand gooey mozzarella."},
        {"Chicken_Tikka_Treat","\t\t\t\t","Topped with spiced chicken tikka, onions, \n\t\t\t\t\t\tand green chilies for a desi twist."},
        {"Veggie_Delight","\t\t\t\t\t","A mix of fresh bell peppers, mushrooms, olives, \n\t\t\t\t\t\tand sweet corn on a cheesy base."},
        {"----------","\t\t\t\t\t","----------"},
        {"\033[32mEXTRAS(Rs.800):\033[0m" , "\t\t\t\t\t\t","      "},
        {"Garlic_Bread"},
        {"Sweet_Bun"},
        {"Cheese_Sticks"},
        {"Russian_salad"},
        {"Pizza_Fries"},
        {"Nuggets_with_sauces."},
        {"Macroni"},
        {"----------","\t\t\t\t\t","          "},
        {"\033[32mBEVERAGES(Rs.300):\033[0m" , "\t\t\t\t\t\t","      "},
        {"Mint_Margarita"}
        ,{"Piña_Colada"},
        {"Coffee"},
        {"Tea"},
    };


                                             

    for (i = 0;i < 40;i++)                          //loop for checking the menu items
    {
        for (j = 0;j < 3;j++)                      //loop for checking the columns in the arrays
        {
            cout << mennu[i][j];                   //displaying 2D arrays

        }

        cout << endl;                             //moving to the next line after each item
        cout << endl;


    }


    cout << "PLease Write what you would like to have? " << endl;
    cin >> n;

    for (i = 0;i < 40;i++)
    {
        for (j = 0;j < 3;j++)
        {
            if (n == mennu[i][j])
            {
                if (i >= 4 && i <= 10)
                {
                    cout << "enter quantity" << endl;
                    cin >> quantity;
                    quantity = quantity * 1199;
                    cout << "your  current bill is " << quantity << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;

                }

                else if (i >= 13 && i <= 14)
                {
                    cout << "enter quantity" << endl;
                    cin >> quantity;
                    quantity = quantity * 2999;
                    cout << "your  current bill is " << quantity << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

                else if (i >= 18 && i <= 21)                        // If the item is a pizza (prices: 2199)
                {
                    cout << "enter quantity" << endl;
                    cin >> quantity;
                    quantity = quantity * 2199;
                    cout << "your  current bill is " << quantity << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

                else if (i >= 24 && i <= 31)                       // If the item is an extra (prices: 800)
                {
                    cout << "enter quantity" << endl;
                    cin >> quantity;
                    quantity = quantity * 800;
                    cout << "your  current bill is " << quantity << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

                else if (i >= 33 && i <= 36)
                {
                    cout << "enter quantity" << endl;
                    cin >> quantity;
                    quantity = quantity * 300;
                    cout << "your  current bill is " << quantity << endl;
                    cout << "would you like something else ?(yes/no) " << endl;
                    cin >> y;
                }

            }

        }



    }


   

    if (y == "yes" || y == "no")
    {

       


        do
        {
                                                         //Store the bill in the variable 't'
            if (y == "yes")                            //check if the user wants to order sth else?
            {
                temp = quantity;
                cout << " pLease Write what you would like to have? " << endl;

                cin >> n;
                for (i = 0;i < 40;i++)            // Loop for menu items to chk if the selected item matches the user input? 
                {
                    for (j = 0;j < 3;j++)
                    {
                        if (n == mennu[i][j])
                        {
                            if (i >= 4 && i <= 10)
                            {


                                cout << "enter quantity" << endl;
                                cin >> quantity;
                                quantity = (quantity * 1199) + temp;                     //calculating the total cost price also the previous value(stored in t) is also added in the next bill
                                cout << "your  current bill is " << quantity << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;



                            }


                            else if (i >= 13 && i <= 14)
                            {

                                cout << "enter quantity" << endl;
                                cin >> quantity;
                                quantity = (quantity * 2999) + temp;
                                cout << "your  current bill is " << quantity << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }

                            else if (i >= 18 && i <= 21)
                            {

                                cout << "enter quantity" << endl;
                                cin >> quantity;
                                quantity = (quantity * 2199) + temp;
                                cout << "your  current bill is " << quantity << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }

                            else if (i >= 24 && i <= 31)
                            {
                                cout << "enter quantity" << endl;
                                cin >> quantity;
                                quantity = (quantity * 800) + temp;
                                cout << "your  current bill is " << quantity << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;

                            }

                            else if (i >= 33 && i <= 36)
                            {
                                cout << "enter quantity" << endl;
                                cin >> quantity;
                                quantity = (quantity * 300) + temp;
                                cout << "your  current bill is " << quantity << endl;
                                cout << "would you like something else ?(yes/no) " << endl;
                                cin >> y;
                            }
                        }

                    }


                }
            }


        } while (y == "yes");                        //if yes then ask 


        if (y == "yes" || y == "no")                //if user enters yes or no then take users info
        {
            // Collect user details
            cout << "Please give your following details!" << endl;

            cout << "Enter your Full Name: ";
            cin.ignore();
            getline(cin, name);//string manipulator

            cout << "Enter your Address: ";
            getline(cin, location);

            // Collect payment method
            cout << "Payment Method: \n1. Credit Card \n2. Cash on Delivery" << endl;
            cin >> paymentMethod;  // User chooses payment method (1 or 2)


            switch (paymentMethod) {
            case 1:  // If Credit Card selected
                cout << "Please Pay Online!" << endl;
                break;
            case 2:  // If Cash on Delivery selected
                cout << "keep the money ready!" << endl;
                break;
            default:
                cout << "\a\033[31mInvalid Payment Method!\033[0m" << endl;
            }

            // Ask for order confirmation method
            cout << "Please Confirm Your Order: \n1. Call \n2. Message" << endl;
            cin.ignore();
            cin >> confirmationChoice;


            switch (confirmationChoice) {
            case 1:
                cout << "We will call you to confirm your order!" << endl;
                break;
            case 2:
                cout << "You will receive a message to confirm your order!" << endl;
                break;
            default:
                cout << "\a\033[31mInvalid choice for order confirmation!\033[0m" << endl;
            }

            cout << endl;
            cout << "Your Reciept: " << endl;
            cout << "Total Bill:  " << quantity << endl;
            cout << "Users name: " << name << endl;
            cout << "Users address " << location << endl;
           
            cout << endl;

            cout << "\a\033[33m\tThank you for your order! Please wait while we prepare your food. We'll be there shortly to deliver it to you!\033[0m" << endl;

            cout << "\a\033[33m\tThanks for Choosing us!\033[0m" << endl;  // Thank the user 
            return 0;
        }
        else
        {


            cout << "\a\033[31mInvalid Input\033[0m";                 //the info added might be wrong
        }
        return 0;

    }
}