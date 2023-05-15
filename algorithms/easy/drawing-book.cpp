/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 */
int floor(int numberToInt){
    return numberToInt;
}

int pageCount(int book_numb_pages, int page_to_turn_to) {
    int total_turns_in_the_book = ceil(book_numb_pages/2); 
    int normal_turns_to_page = floor(page_to_turn_to/2);
    int inverse_turns_to_page = total_turns_in_the_book - normal_turns_to_page;

    int minimum_turns = (normal_turns_to_page > inverse_turns_to_page) 
        ? (inverse_turns_to_page) : (normal_turns_to_page);

    return minimum_turns;
}
