//a murder mystery where the killers could be 1) the husband 2) the butler 3)the pool boy
//needs three branch points where the user makes a choice

#include <iostream>
int main() {

//First Choice defined
int choice1 = 0;
int choice2 = 0;
int belief = 0;

//Intro Story
std::cout << "On a night, like any other night, in southern Palm Springs; the local King Pig was throwing his mid-summer ball.\n";
std::cout << "He and his husband welcomed all of there friends: Mr. Twink, the shop keeper. Mr. Muscle Bear, the pool boy; Mr. Otter, the dancer from the club and Mr. Twunk, the tennis coach.\n";
std::cout << "The music was raging, drinks were flowing, and the lights were strobing as the six of them danced into the night, not minding the storm brewing outside.\n";
std::cout << "As they battened down the hatches, the lightning flashed and the thunder rolled. AND SUDDENLY.....\n";
std::cout << "The lights go out, a gay man shrieks and when the lights return King Pig laid dead on the floor. Another gay man shrieks, and his husband faints to the floor.\n";
std::cout << "Mr. Otter calls you, Police Detective Cock Cruise-oh to solve the case. What do you do first?\n";
std::cout << "1) Question the husband\n";
std::cout << "2) Question the pool boy\n";
std::cout << "3) Question the shop keeper\n";
std::cout << "4) Question the tennis coach\n";
std::cout << "5) Question the dancer\n";
std::cin >> choice1;

//options based on choice
if (choice1 == 1) {

  std::cout << "(Cop) Are you the husband?" << "    " << "(Husband) I am.\n";
  std::cout << "(Cop) Where were you when the murder took place?\n";
  std::cout << "(Husband) I was grinding on Mr. Otter the dancer.\n";
  std::cout << "(Mr. Otter) That's true. I had him by the waist he couldn't have done it!!\n";
  std::cout << "Do you believe them?\n";
  std::cout << "1) Yes\n";
  std::cout << "2) No\n";
  std::cin >> choice2;

if (choice2 == 1) {

  std::cout << "I believe you for now\n";

}
else {
  std::cout << "you sit on a thrown of lies, Sir.\n";
}


}
else if (choice1 == 2) {
  std::cout << "(Cop) You the pool boy? Where were you?" << "  " << "(PB) Splish, splash, I was taking a bath!\n";
  std::cout << "On a scale from 1 to 5, how much do you believe him?\n";
  std::cin >> belief;

  while (belief < 5) {

    std::cout << "LIES, LIES, LIES!! I DON'T BELIEVE YOU!!\n";
    std::cout << "It's the truth I swear!!\n";
    std::cout << "(Do you believe him now? (1-5))\n";
    std::cin >> belief;
  }
  std::cout << "Alright.....I believe you.\n";
}
}
