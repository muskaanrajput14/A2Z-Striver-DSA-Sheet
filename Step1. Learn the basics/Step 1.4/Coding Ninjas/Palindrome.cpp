// https://www.codingninjas.com/studio/problems/palindrome-number_624662?leftPanelTabValue=SUBMISSION


bool palindrome(int n)
{
    // Write your code here
    if(n<0)  return false;

    int reverse,lastDigit,original=n;
    while(n){
        lastDigit = n%10;
        reverse = (reverse*10)+lastDigit;
        n=n/10;
    }
    return reverse == original;
}