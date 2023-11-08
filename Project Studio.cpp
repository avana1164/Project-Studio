#include <iostream>

int main();
void rotate_motor(int effort, bool open);
int main(){
    bool quit = false; //if the user wants to stop using the device
    bool button_pressed = false; //if the button pressed, the pill dispenser lid will open
    bool open = false;
    int heart_rate{}; //will track the heart rate
    int critical_value{150}; //is a value that will be set and will determine if the heart rate is abnormal
    int effort{10}; //amount of effort for machine to open and close pill dispenser
    char user_input{};
    while(!quit){
        std::cout << "Do you want to open the button? (type \'Y\' for yes)" << std::endl;
        std::cin >> user_input;
        if(user_input == 'Y'){
            rotate_motor(effort, open); 
        } 

        if(heart_rate > 100 || heart_rate < 50 || heart_rate == critical_value){
            //make LED glow
        }

        std::cout << heart_rate << std::endl;
        //randomize heart rate between 60 and 70 every iteration
        //occassionally make heart rate abnormal
    }
    return 0;
}

void rotate_motor(int effort, bool &open){
    if(open){
        //close lid with given effort value
        open = false;
    } else {
        //open lid with given effort value
        open = true;
    }
}
