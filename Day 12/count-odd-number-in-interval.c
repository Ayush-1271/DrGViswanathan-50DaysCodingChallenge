int countOdds(int low, int high){
    return (high - low) / 2 + (low % 2 == 1 || high % 2 == 1 ? 1 : 0);
}
/**
Formula used::
    - if both even::
        (high - low)/2
    - if both odd or one is odd:
        ((high - low)/2) + 1
**/
