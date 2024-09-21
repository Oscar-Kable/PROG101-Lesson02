#include <iostream>

using namespace std;

void AdventureGame()
{
	int choice1;

	cout << "You open the door to the haunted house, and are met with \n" <<
		"a large landing. There are two stair cases, one on the left \n" <<
		"and one on the right, and a large double door straight ahead. \n" <<
		"Which option will you choose?: " << endl << "Right staircase (Option 1)" <<
		endl << "Left staircase (Option 2)" << endl << "Large double doors (Option 3)" << endl;
	cin >> choice1;

	switch (choice1)
	{
	case 1: // Right staircase - Instant death
		cout << "As you walk up the right staircase you slip on a step and fall back, cracking your skull open and leaking your brains everywhere. THE END." << endl;
		break;

	case 2: // Left staircase - One correct way
		int choice2;

		cout << "You find yourself at the top of the left staircase, where two doors are closed. The door on the left is nailed shut, but "
			"luckily you are super strong! What are you going to do?: " << endl << "The door nailed shut (Option 1)" << endl << "The other door (Option 2)" << endl;
		cin >> choice2;

		switch (choice2)
		{
		case 1: // Choice ends in death
			cout << "You rip the wooden boards off the door and kick it down courageously!! Unfortunately Michael Myers "
				"was waiting behind the door and mutilates your body. The door was definitely shut for a reason. THE END.";
			break;

		case 2: // Choice ends with life
			cout << "You walk through the other door and a blinding light hits your eyes. You wake up and it's all just a dream.... THE END." << endl;
			break;

		default: // Obviously instant death
			cout << "Not a valid option!!! Your head exploded and you die insantly. THE END." << endl;
			break;
		}
		break;

	case 3: // Double doors - Instant life
		cout << "You open the door and immediately Freddy Fazbear jumps out at you. You let out a blood curdling scream as your "
			"wind pipes start hurting from the sheer volume you let out. You wake up with a wet puddle in your sheets, and as the "
			"embarrassment settles in you realise it was all a dream. THE END." << endl;
		break;

	default:
		cout << "Because you picked a non-option number, a black hole opens in front of you sucks you up, "
			"turning you into human spaghetti, THE END." << endl;
		break;
	}
}

//int main()
//{
//	AdventureGame();
//
//	return 0;
//}