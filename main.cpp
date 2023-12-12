#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void displayWorkoutPlan() {
    int wpchoice;
    string weightCategory, difficulty;

    cout << "\nChoose your weight category:\n";
    cout << "1. Underweight\n";
    cout << "2. Normal Weight\n";
    cout << "3. Overweight\n";
    cout << "4. Obese\n";
    cout << "Enter your choice (1-4): ";

    cin >> wpchoice;

    switch (wpchoice) {
        case 1:
            system("cls");
            difficulty = "Underweight";
            cout << "\nYou Have Chosen Underweight as your BMI!\nEasy Exercise\nWalking\n\nDuration: 15-30 minutes\nIntensity: Low to moderate\nFrequency: 3-5 times per week\nWalking is a low-impact exercise that can be easily adjusted based on fitness level. It helps improve cardiovascular health and overall well-being.\n\nModerate Exercise:\nBodyweight Exercises\n\nSquats\nLunges\nPush-ups\nBodyweight rows\nPerforming bodyweight exercises can help build strength and muscle mass. Start with a small number of repetitions (e.g., 5-10) and gradually increase as strength improves. Aim for 2-3 sessions per week.\n\nHard Exercise:\nStrength Training: \n\nWeightlifting (using dumbbells, barbells, or resistance machines)\nCompound exercises like deadlifts, bench press, and squats\nEngaging in strength training is more challenging but can be beneficial for building muscle mass. It's crucial to start with lighter weights and focus on proper form. Work with a fitness professional to design a safe and effective strength training program.\n";
            break;
        case 2:
            system("cls");
            difficulty = "Normal Weight";
            cout << "\nYou Have Chosen Normal Weight as your BMI!\nEasy Exercise\nBrisk Walking:\n\nDuration: 30 minutes\nIntensity: Moderate\nFrequency: 3-5 times per week\nBrisk walking is a simple yet effective cardiovascular exercise. It's easy to incorporate into daily life and helps maintain heart health and overall well-being.\n\nModerate Exercise:\nBodyweight Circuit:\n\nBodyweight squats\nPush-ups\nPlank\nJumping jacks\nPerform each exercise for 30 seconds with a 15-second rest between exercises. Repeat the circuit 2-3 times. This helps improve strength, endurance, and flexibility.\n\nHard Exercise:\nHigh-Intensity Interval Training (HIIT): \n\nSprinting or cycling at maximum effort for 30 seconds\nRest for 30 seconds\nRepeat for 15-20 minutes\nHIIT is a challenging cardiovascular exercise that can boost metabolism and improve cardiovascular fitness. It's important to start slowly and gradually increase intensity.\n";
            break;
        case 3:
            system("cls");
            difficulty = "Over Weight";
            cout << "\nYou Have Chosen Overweight as your BMI!\nEasy Exercise:\nWalking:\n\nDuration: 20-30 minutes\nIntensity:\nLow to moderate\nFrequency: 3-5 times per week\nWalking is a low-impact exercise that is gentle on the joints and can be easily incorporated into daily life. It promotes cardiovascular health and helps with weight management\n\nModerate Exercise:\nSwimming: \n\nDuration: 30 minutes\nIntensity: Moderate\nFrequency: 2-3 times per week\nSwimming is a full-body workout that is easy on the joints. It provides cardiovascular benefits and helps in building muscle strength, aiding in weight loss.\n\nHard Exercise:\nInterval Training - Walking/Running: \n\nAlternate between brisk walking and jogging or running.\nExample: 1 minute brisk walk, 30 seconds jog/run.\nRepeat for 20-30 minutes.\nInterval training can be effective for weight loss by increasing the intensity of the workout. It elevates the heart rate and boosts metabolism, aiding in burning calories.\n";
            break;
        case 4:
            system("cls");
            difficulty = "Obese";
            cout << "\nYou Have Chosen Obese as your BMI!\nEasy Exercise:\nLow-impact Aerobics: \n\nDuration: 20-30 minutes\nIntensity: Low to moderate\nFrequency: 3-5 times per week\nLow-impact aerobics, such as water aerobics or low-impact dance workouts, can be gentle on the joints while still providing cardiovascular benefits.\n\nModerate Exercise:\nStationary Cycling: \n\nDuration: 30 minutes\nIntensity: Moderate\nFrequency: 3-4 times per week\nStationary cycling is a low-impact option that helps improve cardiovascular health and burn calories. It's a good way to gradually increase intensity without putting excessive stress on the joints.\n\nHard Exercise:\nElliptical Training: \n\nDuration: 30 minutes\nIntensity: Moderate to high\nFrequency: 3-4 times per week\nUsing an elliptical machine provides a full-body workout with low impact on the joints. It challenges both the upper and lower body, aiding in weight management and cardiovascular fitness.\n";
        default:
            system("cls");
            cout << "Invalid choice.\n";
            return;
    }
}
    
void displayMealPlan() {
    int mpchoice;
    string mweightCategory, level;

    cout << "Choose your weight category:\n";
    cout << "1. Underweight\n";
    cout << "2. Normal Weight\n";
    cout << "3. Overweight\n";
    cout << "4. Obese\n";
    cout << "Enter your choice (1-4): ";

    cin >> mpchoice;

    switch (mpchoice) {
        case 1:
            level = "Underweight";
            cout << "\nRecommended Meal Plan for Under Weight:\n\nBreakfast:\n2 scrambled eggs with spinach and feta cheese\n1 whole grain toast with avocado spread\n1 cup of whole milk or a dairy-free alternative\n1 medium banana or other fruit of choice\n\nMid-Morning Snack:\nGreek yogurt with honey and mixed berries\nHandful of nuts (almonds, walnuts, or a mix)\n\nLunch:\nGrilled chicken or tofu salad with a variety of colorful vegetables (e.g., mixed greens, cherry tomatoes, cucumber, bell peppers)\nQuinoa or brown rice as a base\nOlive oil and lemon dressing\nA piece of whole grain bread or a serving of sweet potatoes\n\nAfternoon Snack:\nNut butter (peanut butter, almond butter) on whole grain crackers or apple slices\nA small handful of dried fruits (raisins, apricots)\n\nDinner:\nBaked grilled salmon or another lean protein source (chicken, turkey, tofu)\nSteamed or roasted vegetables (broccoli, carrots, Brussels sprouts)\nMashed sweet potatoes or whole grain pasta\nOlive oil or butter for added calories\n\nEvening Snack:\nA smoothie with whole milk or a dairy-alternative, banana, berries, a scoop of protein powder, and a spoon of nut butter\nWhole grain crackers with cheese\n\nTips:\nIncrease sizes Gradually increase portion sizes to ensure a calorie surplus.\nHealthy fats: Include sources of healthy fats such as avocados, nuts, seeds, and olive oil.\nProtein-rich foods: Prioritize protein-rich foods like lean meats, poultry, fish, tofu, legumes, and dairy.\nFrequent meals: Aim for 5-6 smaller meals throughout the day to make it easier to consume more calories.\nStay hydrated: Drink fluids, but avoid filling up on water right before meals to ensure you have room for nutrient-dense foods.\n";
            break;
        case 2:
            level = "Normal Weight";
            cout << "\nRecommended Meal Plan for Normal Weight:\n\nDay Meal Plan:\nBreakfast:\nScrambled eggs (2 eggs) with spinach and tomatoes\nWhole grain toast (1 slice)\nGreek yogurt with berries\n\nMid-Morning Snack:\nApple slices with almond butter\n\nLunch:\nGrilled chicken breast (4-6 oz) with quinoa\nSteamed broccoli and carrots\nMixed green salad with olive oil and balsamic vinegar dressing\n\nAfternoon Snack:\nHandful of mixed nuts (almonds, walnuts, and pistachios)\n\nDinner:\nBaked salmon (6 oz) with lemon and herbs\nSweet potato wedges\nAsparagus or green beans\n\nEvening Snack (optional):\nLow-fat cottage cheese with pineapple chunks\n\nFluid Intake:\nDrink plenty of water throughout the day. Aim for at least 8 glasses (64 ounces) of water.\n\nNotes:\nPortion sizes can be adjusted based on individual calorie needs.\nInclude a variety of colorful vegetables and fruits to ensure a broad range of nutrients.\nChoose whole grains over refined grains for added fiber and nutrients.\nInclude lean protein sources like poultry, fish, and legumes.\nUse healthy fats like olive oil and nuts in moderation.\nConsider individual dietary preferences and any food allergies or intolerances.";
            break;
        case 3:
            level = "Over Weight";
            cout << "\nRecommended Meal Plan for Over Weighted:\n\nBreakfast:\n- Option 1: Veggie omelet made with egg whites or whole eggs, loaded with vegetables like spinach, bell peppers, and mushrooms.\n- Option 2: Greek yogurt topped with mixed berries, a sprinkle of nuts/seeds, and a drizzle of honey.\n- Option 3: Whole grain oatmeal cooked with water or low-fat milk, topped with sliced banana and a tablespoon of nut butter.\n\nSnack:/n- Option 1: A small handful of mixed nuts and seeds.\n- Option 2: Carrot sticks with hummus.\n- Option 3: A piece of fruit, such as an apple or orange.\n\nLunch:\n- Option 1: Grilled chicken breast or tofu with a side of roasted vegetables (broccoli, cauliflower, and carrots) and quinoa.\n- Option 2: Mixed green salad with grilled shrimp, cherry tomatoes, cucumber, and a light vinaigrette dressing.\n- Option 3: Whole grain wrap filled with lean turkey or chicken, mixed greens, sliced avocado, and mustard.\n\nSnack:\n- Option 1: Greek yogurt with a sprinkle of granola and sliced strawberries.\n- Option 2: Celery sticks with almond butter.\n- Option 3: A hard-boiled egg and a small handful of cherry tomatoes.\n\nDinner:\n- Option 1: Baked salmon with steamed asparagus and a side of brown rice.\n- Option 2: Grilled lean steak with roasted sweet potatoes and a side of sautéed spinach.\n- Option 3: Stir-fried tofu or lean beef with mixed vegetables (broccoli, bell peppers, snap peas) and served over quinoa or whole wheat noodles.\n\nSnack:\n- Option 1: A small handful of trail mix (unsalted nuts, dried fruits, and seeds).\n- Option 2: Sliced cucumber with a dollop of Greek yogurt and a sprinkle of herbs.\n- Option 3: A small portion of air-popped popcorn.\n\nRemember to adjust portion sizes based on your calorie needs and goals. Also, consider incorporating regular physical activity into your routine to support your weight loss efforts.\n";
            break;
        case 4:
            level = "Obese";
            cout << "\nRecommended Meal Plan for Obese:\n\nBreakfast:\n- Option 1: Vegetable and egg scramble made with egg whites or whole eggs, sautéed spinach, onions, bell peppers, and a sprinkle of low-fat cheese.\n- Option 2: Whole grain cereal with low-fat milk or yogurt, topped with sliced bananas and a tablespoon of nuts or seeds.\n- Option 3: Whole wheat toast topped with mashed avocado, sliced tomatoes, and a poached egg.\n\nSnack:\n- Option 1: Greek yogurt with a drizzle of honey and a handful of berries.\n- Option 2: Celery sticks with almond butter.\n- Option 3: A small handful of mixed nuts and dried fruits.\n\nLunch:\n- Option 1: Grilled chicken or turkey breast with a side of steamed vegetables (broccoli, cauliflower, and carrots) and quinoa.\n- Option 2: Mixed green salad with grilled salmon, cherry tomatoes, cucumber, and a light vinaigrette dressing.\n- Option 3: Whole grain wrap filled with lean turkey or chicken, mixed greens, sliced avocado, and mustard.\n\nSnack:\n- Option 1: Carrot sticks with hummus.\n- Option 2: A small portion of air-popped popcorn.\n- Option 3: A piece of fruit, such as an apple or orange.\n\nDinner:\n- Option 1: Baked chicken or fish with roasted Brussels sprouts and a side of brown rice.\n- Option 2: Grilled lean steak with roasted sweet potatoes and a side of steamed asparagus.\n- Option 3: Stir-fried tofu or lean beef with mixed vegetables (broccoli, bell peppers, snap peas) and served over quinoa or whole wheat noodles.\n\nSnack:\n- Option 1: Greek yogurt with a sprinkle of granola and sliced strawberries.\n- Option 2: Sliced cucumber with a dollop of Greek yogurt and a sprinkle of herbs.\n- Option 3: A small handful of trail mix (unsalted nuts, dried fruits, and seeds).\n\nRemember to adjust portion sizes based on your calorie needs and weight loss goals. It's also important to engage in regular physical activity and consult with a registered dietitian for personalized guidance and support.\n";
        
        default:
            cout << "Invalid choice.\n";
            return;
    }
    
    }

void displayUserAgreement() { 
        cout << "Terms of Use\n\nPlease be aware that our program does not guarantee a 100% achievement of your desired outcome. Your commitment and effort are essential for reaching your goals. Users must agree to exercise caution and thoroughly review the code to avoid any potential harm. Individuals with health issues or disabilities should be mindful of their limitations during exercises to prevent overexertion. Each user should assess their own capacity for work. The program offers accessible exercises that can be completed in your free time, respecting your schedule. While we cannot guarantee that all exercises can be performed, each exercise requires only 20 minutes or less. Users should also be conscious of their dietary choices and avoid any allergens. It is essential to prioritize your health and refrain from consuming foods that may pose a risk. With these considerations, we wish you an enjoyable journey toward shaping a healthier lifestyle." << endl;
        return;
    }

int main() {
    
    int mainChoice, age;
    string name;
    char gender;
    double weight, height, bmi;

    do {
        system("cls");

        cout << "Hi, Welcome to Fitpal! Let's tart your fitness journey.\n\n";
        cout << "Display menu\n";
        cout << "1. Users Profile\n";
        cout << "2. Workout Plan\n";
        cout << "3. Meal Plan\n";
        cout << "4. User Agreement\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";

        cin >> mainChoice;

        switch (mainChoice) {
            case 1:
                system("cls");
            
                // user information
                
                cin.ignore();

                cout << "Enter your name: ";

                getline(cin, name);


                cout << "Enter your age: ";

                cin >> age;


                cout << "Enter your gender (M/F): ";

                cin >> gender;


                cout << "Enter your weight (kg): ";

                cin >> weight;


                cout << "Enter your height (m): ";

                cin >> height;


                

                bmi = weight / (height * height);


                // BMI

                cout << "\n\nHello " << name ;
				cout << ". Your calculated  BMI is: " << bmi << endl;


                // Show results

                if (bmi < 18.5) {

                    cout << "You are very underweight and possibly malnourished. Please proceed to the other options to look for you recommended workout plan and meal plan." << endl;
                    cout << "\n\npress any key to continue" << endl; 
                    getch();

                } else if (bmi >= 18.5 && bmi <= 24.9) {

                    cout << "You have a healthy (normal) weight range for young and middle-aged adults. Please proceed to the other options to look for you recommended workout plan and meal plan." << endl;
                    cout << "\n\npress any key to continue" << endl;
                    getch();

                } else if (bmi >= 25.0 && bmi <= 29.9) {
                    
                    cout << "You are overweight. Please proceed to the other options to look for you recommended workout plan and meal plan." << endl;
                    cout << "\n\npress any key to continue" << endl;
                    getch();

                } else {

                    cout << "You are obese. Please proceed to the other options to look for you recommended workout plan and meal plan." << endl;
                    cout << "\n\npress any key to continue" << endl;
                    getch();
                }

                break;

                
            case 2:
                system("cls");
                displayWorkoutPlan();
                getch();
                break;
            case 3:
                system("cls");
			    displayMealPlan();
                getch();
			    break;
            case 4:
                system("cls");
                displayUserAgreement();
                getch();
                break;
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter 1 to 3.\n";
        }
    } while (mainChoice != 4);

    return 0;
}

   
