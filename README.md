### SpaceShip shooter ###

* 2d space exploring game
* from the beginning the game is simple and slow although with time it becomes 
more and more difficult.
* Main menu to choose the difficulties of the game ( Simple - Extreme ), start 
and exit options.
* Game can be saved ( so can be start from the same point ) and paused.
* Side panel displays amount of charge left for the current weapon. 
* Side panel also displays life span left ( can be refilled ) and number of 
lives ( can be gained, some number at the beginning )
* Number of different type of weapons available ( some can be added permanently 
to the user's spaceship and so can be refilled but some ( very powerfull ) only 
temporarily and can't be refilled )
* Weapons possessed can be checked and chosen through control panel. Control 
panel displays currently active weapon.
* User's spaceship can be upgraded ( added new weapons, tempprary helper, 
protection field ).
          
* Enemies:              
  * different types of spacesgips( with different speed and behaviour some of 
them can shoot back and along a fancy trajectory ) ( Some starships will be 
bosses )             
  * cruise missiles ( can move in along different trjectories )
  * asteroids and meteors.
  * some other movable obstacles...
  * enmies also have particular amount of life, which depends on the enemie's 
type and game's difficulty ( not shown )
* The user's ship can:
  * move left - right, back and forward.
  * from the beginning it possesses a very simple weapon ( never expired ) and a
countabe number of missiles ( can be refilled ) which are stronger and move 
faster than main weapon but they can be fired in sequence only with a delay.
  * set laser beams' directions in accordance with the ship's direction
* Background: background-pic ( deep space ), side asteroids ( static, thier 
appearance is different from non static asteroids ), other static objects and 
non static visible very small particles ( can't be interated with ). 
```          
  Classes:
  
     Game:
     
      Descript: keep manage the entire game
      Inhreit: QGraphicsView 
      Attributes:
        - health
        - score
        - timer
        - scene
        - player ( user )
        - enemy
      Methods:
        - startGame();
        - pauseGame();
        - quitGame();
        - createEnemies();
        
     SpaceShip:
      Descript: describe ships, will be inherited by player's and  enemies' spaceships
      Inherit: QObject, QGraphicsItem
      Attributes:
        - lifeSpan  // amount of life possessed
      Methods:
        - getLifeSpan();
        + move();
        + fire();
        
     Palyer's SpaceShip:
      Descript: Describe ship controlled by player
      Inherit: SpaceShip
      Attributes:
      Methods:
        - fire();
        - move();
        
     AssaultSpaceShip (Enemy)
      Descript: Describe one of the enemies' ships
      Inherit: SpaceShip
      Attributes:
      Methods:
        - fire();
        - move();
        
     Weapon:
      Descript: describe games weapons
      Inherit: QObject, QGraphicsPixmapItem
      Attributes:
        - distanceTravelled
        - maxRange
      Methods:
        - getMaxRange();
        - setMaxRange();
        - getDistaneTravelled();
        - setDistanceTravelled();
        - move();
        
     Button:
      Descript: buttons for the main menu
      Inherit: QGraphicsRectItem
      Attributes:
        - text // text on the buttons
      Methods:
        - onMousePressed()
        - onMouseHoverEventEntered();
        - onMouseHoverEventLeave();
        - clicked();
```
