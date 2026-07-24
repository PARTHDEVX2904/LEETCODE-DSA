class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashSet<Character> st=new HashSet<>();
        int left=0, max=0;
        for(int i=0;i<s.length();i++){

            while(st.contains(s.charAt(i))){
                st.remove(s.charAt(left));
                left++;
            }

            int idx=i-left+1;
            max=Math.max(idx,max);

            st.add(s.charAt(i));

        }

        
        return max;
    }
}