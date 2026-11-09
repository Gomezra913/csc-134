# Plan: The Mask

## Story
You are faced with a mysterious house and must make a choice. You can approach the front door, sneak around to the back door, or turn around and go home. Depending on your choices, you might find a strange mask on your bed, get kidnapped in the dark, lose everything trying to go back, or safely escape to live a normal life.

## Story map
main_menu
  1 -> choice_front_door
         1 -> (Enter the mansion)
         2 -> (Sneak around back)
         2 -> (go home)
         3 -> quit
  2 -> choice_back_door (kidnapped ending)
  3 -> choice_go_home
         1 -> think_about (Ending 1)
         2 -> normal_life (Ending 2)
  4 -> quit
  1-> choice_front_door
       you observe -> you get called out -> kidnapped 
       slip out -> get home and find your mask that was left behind 
       quite


## Functions
- choice_front_door  (starter, filled in)
- choice_back_door   (starter, filled in, ending)
- choice_go_home     (starter, filled in)
- think_about        (new, ending)
- normal_life        (new, ending)