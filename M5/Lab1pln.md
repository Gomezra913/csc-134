# Plan: The Cabin in the Woods

## Story
You arrive at a remote, dilapidated cabin for a weekend getaway. Something feels very wrong. 
You can try to find a way inside, discover what is hiding in the basement, or just turn around and escape while you still can.

## Story map
main_menu
  1 -> choice_front_door
         1 -> choice_back_door
         2 -> choice_go_home
  2 -> choice_back_door
         1 -> search_the_basement
         2 -> choice_go_home
  3 -> choice_go_home
  4 -> quit

## Functions
- choice_back_door     (starter, I fill it in)
- choice_go_home       (starter, ending 1: you leave safely)
- search_the_basement  (new)
- encounter_the_thing  (new, ending 2: you meet a terrible fate)