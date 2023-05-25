string catAndMouse(int catA_position, int catB_position, int mouse_position) {
    int catA_distance_to_mouse = abs(catA_position - mouse_position);
    int catB_distance_to_mouse = abs(catB_position - mouse_position);
    string what_cat_reach_first = "";
    // the cat with the lower distance to the mouse
    
    if(catA_distance_to_mouse == catB_distance_to_mouse){
        what_cat_reach_first = "Mouse C";
    }
    else if (catA_distance_to_mouse < catB_distance_to_mouse) {
        what_cat_reach_first = "Cat A";
    }
    else {
        what_cat_reach_first = "Cat B";
    }
    
    return what_cat_reach_first;
}
