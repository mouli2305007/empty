class Solution {
    public String reverseWords(String s) {
        s=s.trim().replaceAll(" +"," ");
        String words[]=s.split(" ");
        String reverse="";
        for(int i=words.length-1;i>=0;i--){
            reverse+=words[i]+" ";
            
        }
        return reverse.trim();
        
        
    }
}