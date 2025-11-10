public class pallindromeString
{
    public static void main(String args[])
    {
        String str="JAYESH";
        boolean pallindrome=true;
        int start=0;
        int end=str.length()-1;
        while(start<end)
        {
            if(str.charAt(start)!=str.charAt(end))
            {
                pallindrome=false;
                break;
            }
            start++;
            end--;
        }
    
    
        if(pallindrome)
        {
            System.out.println("pallindrome");
        }
        else
        {
            System.out.println("not a pallindrome");
        }
    }
}