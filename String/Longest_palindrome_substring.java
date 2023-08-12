// Longest Palindrome in a string (JAVA)

// Given a string s, return the longest palindromic substring in s.



class Solution
{
public
    String longestPalindrome(String s)
    {

        if (s.length() <= 1)
            return s;

        String ans = "";

        for (int i = 1; i < s.length(); i++)
        {

            // odd length:
            int low = i;
            int high = i;
            while (s.charAt(low) == s.charAt(high))
            {
                low--;
                high++;

                if (low == -1 || high == s.length())
                    break;
            }

            String palindrome = s.substring(low + 1, high);
            if (palindrome.length() > ans.length())
            {
                ans = palindrome;
            }

            // even length:
            low = i - 1;
            high = i;
            while (s.charAt(low) == s.charAt(high))
            {
                low--;
                high++;

                if (low == -1 || high == s.length())
                    break;
            }

            palindrome = s.substring(low + 1, high);
            if (palindrome.length() > ans.length())
            {
                ans = palindrome;
            }
        }

        return ans;
    }
}
