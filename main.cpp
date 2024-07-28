#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <windows.h>
#include <conio.h>

using namespace std;

//This SetColor will be use in changing text colors
struct SetColor {
    int n;
    SetColor(int n) : n(n) {}
};

std::ostream& operator<<(std::ostream& os, const SetColor& sc) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), sc.n);
    return os;
}


void bestmood() {
    cout << ":3 That's fantastic! You may enjoy your day or we could do something fun!\n";
}

void goodmood() {
    cout << "^-^ Ohh, How nice. Let us boost your mood more. Ehe!\n";
}

void badmood() {
    cout << ":( Ohh.Looks like your having some tough time. Worry not things will get better. Take a deep breath, focus on the positive and know that Im here to help!\n";
}

void getUserMessage(string &userMessage) { 
    cout << SetColor(7) << "\nHi there! I'm your private notepad ready to listen to everything you want to say.\nDid you know that venting helps mental health by providing a constructive outlet for expressing emotions, reducing internalized stress, and fostering a sense of relief?\nYou can freely write your feelings down below, and my system will not record any of it.\n\n";
    cin.ignore(); 
    getline(cin, userMessage);     
}
    
void suggestRandomActivities() {
   vector<string> activities = { 
        "Take a short walk.",
        "Listen to uplifting music.",
        "Watch funny videos.",
        "Read a light-hearted book.",
        "Solve a puzzle.",
        "Play a quick online game.",
        "Practice deep breathing.",
        "Write in a journal.",
        "Cook a simple recipe.",
        "Call or text a friend.",
        "Color in a coloring book.",
        "Take a power nap.",
        "Organize a small space.",
        "Do a mindfulness meditation.",
        "Look at cute animal pictures.",
        "Try a new hobby for a few minutes.",
        "Make a cup of tea or coffee.",
        "Write down positive affirmations.",
        "Do a quick sketch or doodle.",
        "Listen to a calming podcast.",
        "Play with a pet.",
        "Take photos of nature.",
        "Browse inspirational quotes.",
        "Stretch for a few minutes.",
        "Send a kind message to someone.",
        "Plant a small indoor plant.",
        "Create a vision board.",
        "Do a quick decluttering task.",
        "Watch a sunset or sunrise.",
        "Practice gratitude journaling.",
        "Make a list of future goals.",
        "Play a musical instrument.",
        "Try a DIY craft project.",
        "Dance to your favorite song.",
        "Do a brain teaser.",
        "Write a short story.",
        "Look at old photos.",
        "Create a positive playlist.",
        "Try a short guided meditation.",
        "Play a card game.",
        "Build with LEGO or blocks.",
        "Take a hot shower.",
        "Do a quick home spa treatment.",
        "Write a letter to your future self.",
        "Do a quick drawing challenge.",
        "Plan a mini adventure for the future.",
        "Create a list of favorite quotes.",
        "Watch a funny or uplifting movie."

   };
   
   srand(time(0));
   
   cout << SetColor(7) << "Would you like a suggestion for an activity? (y/n): ";
   char answer;
   cin >> answer;
   
   if (answer == 'y','Y') {
            cout << SetColor(14) << "\nHere are some three quick activities for you to do to make your day better and productive.\n";
        for (int i = 0; i < 3; ++i) {
            int randomIndex = rand() % activities.size();
            cout << SetColor(7) << i + 1 << ". " << activities[randomIndex] << endl;
            activities.erase(activities.begin() + randomIndex); // Remove the selected activity 
        } 
    } 
    else if (answer == 'n','N') {
       cout << "\nGot it!, feel free to come back whenever you need suggestions. Have a great day!\n";
    } 
    else { cout << SetColor(3) << "Ohh no, you put the wrong option. Please enter 'y' or 'n' only.\n";
    }
    
    
}

void suggestRandomDA() {
   vector<string> activities = {
        "I am worthy of love and kindness.",
        "I choose happiness and joy in my life.",
        "I am resilient, and I can overcome any challenge.",
        "I trust in my ability to make the right decisions for myself.",
        "I am at peace with my past and excited for my future.",
        "Every day, I am becoming a better version of myself.",
        "I am surrounded by love and positive energy.",
        "I am grateful for the gift of another day.",
        "I am confident in my abilities and value.",
        "I am a magnet for success and good fortune.",
        "I deserve all the good things that life has to offer.",
        "I am open to new opportunities and experiences.",
        "I choose to let go of things that no longer serve me.",
        "My thoughts are positive, and my life is filled with positivity.",
        "I am in control of my thoughts and emotions.",
        "I am proud of my accomplishments and celebrate my successes.",
        "I attract positive people and situations into my life.",
        "I am deserving of success, prosperity, and abundance.",
        "I am creating a life full of passion and purpose.",
        "I am worthy of respect and treat others with respect.",
        "I am a source of love and inspiration to those around me.",
        "Today, I will let go of worries and focus on the present moment.",
        "I radiate confidence, self-respect, and inner harmony.",
        "I am capable of achieving whatever I set my mind to.",
        "I am grateful for the lessons that challenges bring.",
        "I am a beacon of positivity, and I attract positivity.",
        "I release all negative thoughts and embrace positivity.",
        "I trust the journey, even when I do not understand it.",
        "I am deserving of good health, and I nourish my body and mind.",
        "I am a unique and valuable person.",
        "I am worthy of success and achieving my goals.",
        "I am surrounded by love, and I love and respect myself.",
        "I am confident in my ability to solve problems.",
        "I am becoming more and more confident with each passing day.",
        "I am a powerhouse, and my potential is limitless.",
        "I trust the process of life and let go of any resistance.",
        "I am deserving of rest and take time to care for myself.",
        "I am in charge of my thoughts and choose positivity.",
        "I am at peace with the past, present, and future.",
        "I am open to receiving the blessings the universe has in store for me.",
        "I am a beacon of light and bring positivity wherever I go.",
        "I am connected to the wisdom of the universe.",
        "I am deserving of success and prosperity.",
        "I am a loving and compassionate person.",
        "I am worthy of the love and respect I receive from others.",
        "My life is a reflection of the love and beauty within me.",
        "I am a beacon of hope and inspiration for others.",
        "I am a source of strength and courage for those around me.",
        "I attract love, joy, and abundance into my life effortlessly.",
        "I am proud of the progress I've made in my journey.",
        "I trust the universe to guide me in the right direction.",
        "I am a force for good in the world.",
        "I am surrounded by opportunities for growth and success.",
        "I am a unique and special individual with much to offer.",
        "I am deserving of love and receive it in abundance.",
        "I forgive myself for any mistakes and learn from them.",
        "I am a work in progress, and that's okay.",
        "I am capable of achieving greatness.",
        "I trust my intuition and make decisions with confidence.",
        "I am a magnet for positive energy and experiences.",
        "I am grateful for the beauty and joy in my life.",
        "I choose to focus on what I can control and let go of what I cannot.",
        "I am at peace with the past, present, and future.",
        "I am open to receiving love and support from others.",
        "I am a magnet for prosperity and abundance.",
        "I am free from the burdens of my past.",
        "I am surrounded by opportunities for success and growth.",
        "I am a vessel of love and kindness.",
        "I am a beacon of light, and my light shines brightly.",
        "I am open to receiving the blessings of each new day.",
        "I am a unique and valuable person, and I deserve to be treated with respect.",
        "I am grateful for the love that surrounds me.",
        "I am deserving of all the good things life has to offer.",
        "I am a magnet for positive experiences and opportunities.",
        "I am confident in my ability to create positive change.",
        "I am worthy of success and fulfillment in my career.",
        "I am deserving of love and acceptance.",
        "I am a beacon of positivity, and my positivity is contagious.",
        "I choose to see the good in myself and others.",
        "I am confident in my ability to overcome challenges.",
        "I am grateful for the simple joys in life.",
        "I am a source of inspiration and motivation.",
        "I am a powerful creator of my own reality.",
        "I am open to receiving love and support from others.",
        "I am a magnet for prosperity and abundance.",
        "I am free from the burdens of my past.",
        "I am surrounded by opportunities for success and growth.",
        "I am a vessel of love and kindness.",
        "I am a beacon of light, and my light shines brightly.",
        "I am open to receiving the blessings of each new day.",
        "I am a unique and valuable person, and I deserve to be treated with respect.",
        "I am grateful for the love that surrounds me.",
        "I am deserving of all the good things life has to offer.",
        "I am a magnet for positive experiences and opportunities.",
        "I am confident in my ability to create positive change.",
        "I am worthy of success and fulfillment in my career.",
        "I am at peace with my past, present, and future.",
        "I am a channel for creativity and inspiration.",
        "I am capable of achieving my dreams.",
        "I am a beautiful and worthy person, and I love myself unconditionally."
    };
   
   srand(time(0));
   
   cout << "Would you like some daily affirmations? (y/n): ";
   char answer;
   cin >> answer;
   
   if (answer == 'y','Y') {
       cout << SetColor(14) << "\nHere are three daily affirmations just for you!\n";
       for (int i = 0; i < 3; ++i) {
       int randomIndex = rand() % activities.size();
       cout << SetColor(7) << i + 1 << ". " << activities[randomIndex] << endl;
       activities.erase(activities.begin() + randomIndex); // Remove the selected activity 
       } 
    } 
    else if (answer == 'n','N') {
       cout << "\nAlright, feel free to come back whenever you need some affirmations. Have a great day!\n";
    } 
    else { cout << SetColor(3) << "Ohh no!, wrong input. Please enter 'y' or 'n' only.\n";
    }
}

void displaymentalHotlines() { 
    cout << SetColor(6)<< "Here are some mental health hotlines and organizations in the Philippines:\n\n";

    cout << SetColor(6)<< "1. National Center for Mental Health (NCMH) Crisis Hotline:\n";
    cout << SetColor(7)<< "\t- Hotline: (02) 7-989-USAP (7727) or 0917-899-USAP (8727)\n";
    cout << SetColor(7)<< "\t- NCMH provides crisis intervention and emotional support.\n\n"; 

    cout << SetColor(6)<< "2. Hopeline Philippines:\n";
    cout << SetColor(7)<< "\t- Hotline: (02) 8804-HOPE (4673) or 0917-558-HOPE (4673) or 2919 (toll-free for Globe and TM subscribers)\n";
    cout << SetColor(7)<< "\t- A 24/7 suicide prevention and emotional crisis support hotline.\n\n"; 

    cout << SetColor(6)<< "3. UP Diliman Psychosocial Services (UPD PsycServ):\n";
    cout << SetColor(7)<< "\t- Hotline: 0917-150-1700\n";
    cout << SetColor(7)<< "\t- Provides crisis intervention, counseling, and psychological first aid.\n\n"; 

    cout << SetColor(6)<< "4. UST Graduate School Psychotrauma Clinic:\n";
    cout << SetColor(7)<< "\t- Hotline: (02) 406-1611 local 4012 or 0917-812-0804\n";
    cout << SetColor(7)<< "\t- Offers psychological support and debriefing.\n\n";

    cout << SetColor(6)<< "5. Philippine Mental Health Association (PMHA):\n";
    cout << SetColor(7)<< "\t- Hotline: (02) 8921-4958 or 0917-565-2036\n";
    cout << SetColor(7)<< "\t- PMHA provides mental health services, education, and advocacy.\n\n";

    cout << SetColor(6)<< "6. Crisis Line for the Mental Health and Psychosocial Support (MHPSS) of Davao City:\n";
    cout << SetColor(7)<< "\t- Hotline: 0917-977-8050 or 0939-937-5433\n";
    cout << SetColor(7)<< "\t- Offers crisis support and referral services.\n\n"; 

    cout << "Remember, seeking professional help for your mental health is a courageous step, not a sign of weakness; don't hesitate to reach out and prioritize your well-being.\n";
}

void doexercise() {
    int wpchoice;
    string weightCategory, difficulty;

    cout << SetColor(6) << "\nChoose your weight category:\n";
    cout << SetColor(9) << "1. Underweight\n";
    cout << SetColor(9) << "2. Normal Weight\n";
    cout << SetColor(9) << "3. Overweight\n";
    cout << SetColor(9) << "4. Obese\n";
    cout << SetColor(7) << "Enter your choice (1-4): ";

    cin >> wpchoice;

    switch (wpchoice) {
        case 1:
            system("cls");
            difficulty = "Underweight";
            cout << SetColor(7)<< "\nYou Have Chosen Underweight as your BMI!\nEasy Exercise\nWalking\n\nDuration: 15-30 minutes\nIntensity: Low to moderate\nFrequency: 3-5 times per week\nWalking is a low-impact exercise that can be easily adjusted based on fitness level. It helps improve cardiovascular health and overall well-being.\n\nModerate Exercise:\nBodyweight Exercises\nSquats\nLunges\nPush-ups\nBodyweight rows\nPerforming bodyweight exercises can help build strength and muscle mass. Start with a small number of repetitions (e.g., 5-10) and gradually increase as strength improves. Aim for 2-3 sessions per week.\n\nHard Exercise:\nStrength Training: \n\nWeightlifting (using dumbbells, barbells, or resistance machines)\nCompound exercises like deadlifts, bench press, and squats\nEngaging in strength training is more challenging but can be beneficial for building muscle mass. It's crucial to start with lighter weights and focus on proper form. Work with a fitness professional to design a safe and effective strength training program.\n";
            break;
        case 2:
            system("cls");
            difficulty = "Normal Weight";
            cout << SetColor(7)<< "\nYou Have Chosen Normal Weight as your BMI!\nEasy Exercise\nBrisk Walking:\n\nDuration: 30 minutes\nIntensity: Moderate\nFrequency: 3-5 times per week\nBrisk walking is a simple yet effective cardiovascular exercise. It's easy to incorporate into daily life and helps maintain heart health and overall well-being.\n\nModerate Exercise:\nBodyweight Circuit:\n\nBodyweight squats\nPush-ups\nPlank\nJumping jacks\nPerform each exercise for 30 seconds with a 15-second rest between exercises. Repeat the circuit 2-3 times. This helps improve strength, endurance, and flexibility.\n\nHard Exercise:\nHigh-Intensity Interval Training (HIIT): \n\nSprinting or cycling at maximum effort for 30 seconds\nRest for 30 seconds\nRepeat for 15-20 minutes\nHIIT is a challenging cardiovascular exercise that can boost metabolism and improve cardiovascular fitness. It's important to start slowly and gradually increase intensity.\n";
            break;
        case 3:
            system("cls");
            difficulty = "Over Weight";
            cout << SetColor(7)<< "\nYou Have Chosen Overweight as your BMI!\nEasy Exercise:\nWalking:\n\nDuration: 20-30 minutes\nIntensity:\nLow to moderate\nFrequency: 3-5 times per week\nWalking is a low-impact exercise that is gentle on the joints and can be easily incorporated into daily life. It promotes cardiovascular health and helps with weight management\n\nModerate Exercise:\nSwimming: \n\nDuration: 30 minutes\nIntensity: Moderate\nFrequency: 2-3 times per week\nSwimming is a full-body workout that is easy on the joints. It provides cardiovascular benefits and helps in building muscle strength, aiding in weight loss.\n\nHard Exercise:\nInterval Training - Walking/Running: \n\nAlternate between brisk walking and jogging or running.\nExample: 1 minute brisk walk, 30 seconds jog/run.\nRepeat for 20-30 minutes.\nInterval training can be effective for weight loss by increasing the intensity of the workout. It elevates the heart rate and boosts metabolism, aiding in burning calories.\n";
            break;
        case 4:
            system("cls");
            difficulty = "Obese";
            cout << SetColor(7)<< "\nYou Have Chosen Obese as your BMI!\nEasy Exercise:\nLow-impact Aerobics: \n\nDuration: 20-30 minutes\nIntensity: Low to moderate\nFrequency: 3-5 times per week\nLow-impact aerobics, such as water aerobics or low-impact dance workouts, can be gentle on the joints while still providing cardiovascular benefits.\n\nModerate Exercise:\nStationary Cycling: \n\nDuration: 30 minutes\nIntensity: Moderate\nFrequency: 3-4 times per week\nStationary cycling is a low-impact option that helps improve cardiovascular health and burn calories. It's a good way to gradually increase intensity without putting excessive stress on the joints.\n\nHard Exercise:\nElliptical Training: \n\nDuration: 30 minutes\nIntensity: Moderate to high\nFrequency: 3-4 times per week\nUsing an elliptical machine provides a full-body workout with low impact on the joints. It challenges both the upper and lower body, aiding in weight management and cardiovascular fitness.\n";
        default:
            system("cls");
            return;
    }
}

void mealplan() {
    int mpchoice;
    string mweightCategory, level;

    cout << SetColor(12) << "Choose your weight category:\n";
    cout << SetColor(11) << "1. Underweight\n";
    cout << SetColor(11) << "2. Normal Weight\n";
    cout << SetColor(11) << "3. Overweight\n";
    cout << SetColor(11) << "4. Obese\n";
    cout << SetColor(7) << "Enter your choice (1-4): ";


    cin >> mpchoice;

    switch (mpchoice) {
        case 1:
            level = "Underweight";
            cout << SetColor(7) << "\nRecommended Meal Plan for Under Weight:\n\nBreakfast:\n2 scrambled eggs with spinach and feta cheese\n1 whole grain toast with avocado spread\n1 cup of whole milk or a dairy-free alternative\n1 medium banana or other fruit of choice\n\nMid-Morning Snack:\nGreek yogurt with honey and mixed berries\nHandful of nuts (almonds, walnuts, or a mix)\n\nLunch:\nGrilled chicken or tofu salad with a variety of colorful vegetables (e.g., mixed greens, cherry tomatoes, cucumber, bell peppers)\nQuinoa or brown rice as a base\nOlive oil and lemon dressing\nA piece of whole grain bread or a serving of sweet potatoes\n\nAfternoon Snack:\nNut butter (peanut butter, almond butter) on whole grain crackers or apple slices\nA small handful of dried fruits (raisins, apricots)\n\nDinner:\nBaked grilled salmon or another lean protein source (chicken, turkey, tofu)\nSteamed or roasted vegetables (broccoli, carrots, Brussels sprouts)\nMashed sweet potatoes or whole grain pasta\nOlive oil or butter for added calories\n\nEvening Snack:\nA smoothie with whole milk or a dairy-alternative, banana, berries, a scoop of protein powder, and a spoon of nut butter\nWhole grain crackers with cheese\n\nTips:\nIncrease sizes Gradually increase portion sizes to ensure a calorie surplus.\nHealthy fats: Include sources of healthy fats such as avocados, nuts, seeds, and olive oil.\nProtein-rich foods: Prioritize protein-rich foods like lean meats, poultry, fish, tofu, legumes, and dairy.\nFrequent meals: Aim for 5-6 smaller meals throughout the day to make it easier to consume more calories.\nStay hydrated: Drink fluids, but avoid filling up on water right before meals to ensure you have room for nutrient-dense foods.\n";
            break;
        case 2:
            level = "Normal Weight";
            cout << SetColor(7) << "\nRecommended Meal Plan for Normal Weight:\n\nDay Meal Plan:\nBreakfast:\nScrambled eggs (2 eggs) with spinach and tomatoes\nWhole grain toast (1 slice)\nGreek yogurt with berries\n\nMid-Morning Snack:\nApple slices with almond butter\n\nLunch:\nGrilled chicken breast (4-6 oz) with quinoa\nSteamed broccoli and carrots\nMixed green salad with olive oil and balsamic vinegar dressing\n\nAfternoon Snack:\nHandful of mixed nuts (almonds, walnuts, and pistachios)\n\nDinner:\nBaked salmon (6 oz) with lemon and herbs\nSweet potato wedges\nAsparagus or green beans\n\nEvening Snack (optional):\nLow-fat cottage cheese with pineapple chunks\n\nFluid Intake:\nDrink plenty of water throughout the day. Aim for at least 8 glasses (64 ounces) of water.\n\nNotes:\nPortion sizes can be adjusted based on individual calorie needs.\nInclude a variety of colorful vegetables and fruits to ensure a broad range of nutrients.\nChoose whole grains over refined grains for added fiber and nutrients.\nInclude lean protein sources like poultry, fish, and legumes.\nUse healthy fats like olive oil and nuts in moderation.\nConsider individual dietary preferences and any food allergies or intolerances.\n";
            break;
        case 3:
            level = "Over Weight";
            cout << SetColor(7) << "\nRecommended Meal Plan for Over Weighted:\n\nBreakfast:\n- Option 1: Veggie omelet made with egg whites or whole eggs, loaded with vegetables like spinach, bell peppers, and mushrooms.\n- Option 2: Greek yogurt topped with mixed berries, a sprinkle of nuts/seeds, and a drizzle of honey.\n- Option 3: Whole grain oatmeal cooked with water or low-fat milk, topped with sliced banana and a tablespoon of nut butter.\n\nSnack:/n- Option 1: A small handful of mixed nuts and seeds.\n- Option 2: Carrot sticks with hummus.\n- Option 3: A piece of fruit, such as an apple or orange.\n\nLunch:\n- Option 1: Grilled chicken breast or tofu with a side of roasted vegetables (broccoli, cauliflower, and carrots) and quinoa.\n- Option 2: Mixed green salad with grilled shrimp, cherry tomatoes, cucumber, and a light vinaigrette dressing.\n- Option 3: Whole grain wrap filled with lean turkey or chicken, mixed greens, sliced avocado, and mustard.\n\nSnack:\n- Option 1: Greek yogurt with a sprinkle of granola and sliced strawberries.\n- Option 2: Celery sticks with almond butter.\n- Option 3: A hard-boiled egg and a small handful of cherry tomatoes.\n\nDinner:\n- Option 1: Baked salmon with steamed asparagus and a side of brown rice.\n- Option 2: Grilled lean steak with roasted sweet potatoes and a side of sautéed spinach.\n- Option 3: Stir-fried tofu or lean beef with mixed vegetables (broccoli, bell peppers, snap peas) and served over quinoa or whole wheat noodles.\n\nSnack:\n- Option 1: A small handful of trail mix (unsalted nuts, dried fruits, and seeds).\n- Option 2: Sliced cucumber with a dollop of Greek yogurt and a sprinkle of herbs.\n- Option 3: A small portion of air-popped popcorn.\n\nRemember to adjust portion sizes based on your calorie needs and goals. Also, consider incorporating regular physical activity into your routine to support your weight loss efforts.\n";
            break;
        case 4:
            level = "Obese";
            cout << SetColor(7) << "\nRecommended Meal Plan for Obese:\n\nBreakfast:\n- Option 1: Vegetable and egg scramble made with egg whites or whole eggs, sautéed spinach, onions, bell peppers, and a sprinkle of low-fat cheese.\n- Option 2: Whole grain cereal with low-fat milk or yogurt, topped with sliced bananas and a tablespoon of nuts or seeds.\n- Option 3: Whole wheat toast topped with mashed avocado, sliced tomatoes, and a poached egg.\n\nSnack:\n- Option 1: Greek yogurt with a drizzle of honey and a handful of berries.\n- Option 2: Celery sticks with almond butter.\n- Option 3: A small handful of mixed nuts and dried fruits.\n\nLunch:\n- Option 1: Grilled chicken or turkey breast with a side of steamed vegetables (broccoli, cauliflower, and carrots) and quinoa.\n- Option 2: Mixed green salad with grilled salmon, cherry tomatoes, cucumber, and a light vinaigrette dressing.\n- Option 3: Whole grain wrap filled with lean turkey or chicken, mixed greens, sliced avocado, and mustard.\n\nSnack:\n- Option 1: Carrot sticks with hummus.\n- Option 2: A small portion of air-popped popcorn.\n- Option 3: A piece of fruit, such as an apple or orange.\n\nDinner:\n- Option 1: Baked chicken or fish with roasted Brussels sprouts and a side of brown rice.\n- Option 2: Grilled lean steak with roasted sweet potatoes and a side of steamed asparagus.\n- Option 3: Stir-fried tofu or lean beef with mixed vegetables (broccoli, bell peppers, snap peas) and served over quinoa or whole wheat noodles.\n\nSnack:\n- Option 1: Greek yogurt with a sprinkle of granola and sliced strawberries.\n- Option 2: Sliced cucumber with a dollop of Greek yogurt and a sprinkle of herbs.\n- Option 3: A small handful of trail mix (unsalted nuts, dried fruits, and seeds).\n\nRemember to adjust portion sizes based on your calorie needs and weight loss goals. It's also important to engage in regular physical activity and consult with a registered dietitian for personalized guidance and support.\n";
        
        default:
        return;
    }
}

void useragreement() {
    cout << SetColor(7) << "By accessing and utilizing SmilePal, the user acknowledges their understanding and acceptance of the terms outlined in this User Agreement. While SmilePal is designed to provide valuable tools and support for mental health well-being, users must recognize that it is not a substitute for professional medical or mental health advice, diagnosis, or treatment. The app, including its developers, is not responsible for any injuries, health problems, or adverse reactions that may arise from the use of its tools and resources. Users are urged to exercise caution, listen to their bodies, and be aware of their physical and mental limits. It is crucial for users to input accurate and honest information and to seek professional advice if needed. SmilePal prioritizes user confidentiality, but users should use discretion when inputting and sharing information. The App and its developers shall not be held liable for any damages arising from the use of SmilePal. Users are encouraged to review the terms periodically, as they may be updated without prior notice. If you do not agree to these terms, please refrain from using SmilePal.";
}

int main() {
    int mood;
    string message;
    
    do{
        system ("cls");
        cout << SetColor(7) << "How are you feeling right now on a scale of 1-5??\n";
        cin >> mood;

        if (mood >= 1 && mood <= 5) {
            switch (mood) {
                case 1:
                case 2:
                    badmood();
                    break;
                case 3:
                case 4:
                    goodmood();
                    break;
                case 5:
                    bestmood();
                    break;
                default:
                    cout << "Oops! Invalid rating.\n";
                    break;
            }

            // Main menu
            cout << SetColor(14) << "\nWhat do you want to do to make yourself feel better?\n";
            cout << SetColor(11) << "1 - Vent\n";
            cout << SetColor(11) << "2 - Do some quick activities\n";
            cout << SetColor(11) << "3 - Read daily affirmations\n";
            cout << SetColor(11) << "4 - Seek professional help\n";
            cout << SetColor(11) << "5 - Do some exercise\n";
            cout << SetColor(11) << "6 - Follow a meal plan\n";
            cout << SetColor(11) << "7 - I don't wanna do anything about it\n";
            cout << SetColor(11) << "8 - User Agreement\n\n";
            cout << SetColor(14) << "Enter your choice (1-8): ";

            int choice;
            cin >> choice;

            switch (choice) {
                case 1:
                    system ("cls");
                    getUserMessage(message);
                    cout << "\n\nI appreciate you opening up and sharing your feelings.\nIt takes strength to express yourself. Keep moving forward and always take your time to recover.";
                    cout << SetColor(8) << "\n\n*if you are done, press any key to continue*";
                    getch();
                    break;
                case 2:
                    system ("cls");
                    suggestRandomActivities();
                    cout << SetColor(8) << "\n\n*if you are done doing the activities, press any key to continue*";
                    getch();
                    break;
                case 3:
                    system ("cls");
                    suggestRandomDA();
                    cout << SetColor(8) << "\n\n*if you are done reading your affirmations, press any key to continue*";
                    getch();
                    break;
                case 4:
                    system ("cls");
                    displaymentalHotlines();
                    cout << SetColor(8) << "\n\n*if you are done, press any key to continue*";
                    getch();
                    break;
                case 5:
                    system ("cls");
                    doexercise();
                    cout << SetColor(8) << "\n\n*if you are done exercising, press any key to continue*";
                    getch();
                    break; 
                case 6:
                    system ("cls");
                    mealplan();
                    cout << SetColor(8) << "\n\n*if you are done with your meal plan, press any key to continue*";
                    getch();
                    break;
                case 7:
                    cout << SetColor(7) << "It's okay, we get tired sometimes. Have a good rest :> \n\n";
                return 0;
                break;
                case 8:
                    system ("cls");
                    useragreement();
                    cout << SetColor(8) << "\n\n*if you are done reading, press any key to continue*";
                    getch();
                    break;
                default:
                    cout << "Invalid choice. Exiting.\n";
                    break;
            }
        } 
        else {
            cout << "Invalid mood rating. Exiting.\n";
        }
    } while (mood !=8);
    return 0;
}