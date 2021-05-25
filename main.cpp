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
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: amp
//  action 1: distorts sound
amp.distort();
//  action 2: mutes sound
amp.mute();
//  action 3: adds chorus
 amp.addChorus();
//  2)
//  Noun: cloud
//  action 1: creates rain
cloud.rain();

//  action 2: creates snow
cloud.snow();
//  action 3: evaporates
cloud.evaporate(); 
//  3)
//  Noun: disc golfer
//  action 1: throws disc
discGolfer.throw();
//  action 2: runs
discGolfer.run();
//  action 3: putts
 discGolfer.putt();
//  4)
//  Noun: guitar player
//  action 1: plays guitar
guitarPlayer.playGuitar();
//  action 2: shreds
guitarPlayer.shred();
//  action 3: loses pick
 guitarPlayer.losePick();
//  5)
//  Noun: boss
//  action 1: hires person
boss.hirePerson();
//  action 2: fires person
boss.firePerson();
//  action 3: quits job
 boss.quitJob();
//  6)
//  Noun: bird
//  action 1: caws
bird.caws();
//  action 2: chirps
bird.chirps();
//  action 3: fly
 bird.fly();
//  7)
//  Noun: activist
//  action 1: rallies
activist.rally();
//  action 2: blocks traffic
activist.blockTraffic();
//  action 3: start revolution
 activist.startRevolution();
//  8)
//  Noun: sound person
//  action 1: arrives late
soundPerson.arriveLate();
//  action 2: complain
soundPerson.complain();
//  action 3: mixes sound
 soundPerson.mix();
//  9)
//  Noun: singer
//  action 1: sings
singer.sing();
//  action 2: smokes
singer.smoke();
//  action 3: doesn't carry amps
 singer.doNotCarryAmp();
//  10)
//  Noun: medieval warrior
//  action 1: beheads person
medievalWarrior.beheadPerson();
//  action 2: pledge loyalty
medievalWarrior.pledgeLoyalty();
//  action 3: honor anchestors
medievalWarrior.honorAnchestors();
 


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
