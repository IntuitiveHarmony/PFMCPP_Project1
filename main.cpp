#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        dog
//  action 1:    the dog sits
dog.sit();
//  action 2:    the dog barks
dog.bark();
//  action 3:    the dog wags its tail
dog.wagTail();

//  2)
//  Noun:        tree
//  action 1:    the tree grows
tree.grow();
//  action 2:    the tree sheds leaves
tree.shedLeaves();
//  action 3:    the tree buds new leaves
tree.bud();

//  3)
//  Noun:        computer
//  action 1:    the computer logs data
computer.logData();
//  action 2:    the computer deletes data
computer.deleteData();
//  action 3:    the computer crashes :(
computer.crash();

//  4)
//  Noun:        jason    
//  action 1:    jason eats
jason.eat();
//  action 2:    jason sleeps 
jason.sleep();
//  action 3:    jason codes
jason.code();

//  5)
//  Noun:        cloud
//  action 1:    the cloud drifts
cloud.drift();
//  action 2:    the cloud grows
cloud.grow();
//  action 3:    the cloud rains
cloud.rain();

//  6)
//  Noun:        guitar
//  action 1:    the guitar walks
guitar.walk();
//  action 2:    the guitar shreds
guitar.shred();
//  action 3:    the guitar gently weeps
guitar.gentlyWeep();

//  7)
//  Noun:        rock
//  action 1:    the rock tumbles
rock.tumble();
//  action 2:    the rock rolls
rock.roll();
//  action 3:    the rock sits motionless
rock.sitMotionless();

//  8)
//  Noun:        killer whale   
//  action 1:    the killer whale swims fast
killerWhale.swimFast();
//  action 2:    the killer whale dives deep 
killerWhale.diveDeep();
//  action 3:    the killer whale holds its breath
killerWhale.holdBreath();

//  9)
//  Noun:        fox
//  action 1:    the fox jumps
fox.jump();
//  action 2:    the fox runs
fox.run();
//  action 3:    the fox leaps
fox.leap();

//  10)
//  Noun:        door   
//  action 1:    the door opens
door.open();
//  action 2:    the door closes
door.close();
//  action 3:    the door locks
door.lock();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
