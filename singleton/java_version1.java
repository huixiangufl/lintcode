class Solution {
    /**
     * @return: The same instance of this class every time
     */
    // attention: final variable cannot be reassigned to other variable
    private static Solution instance = null;
    
    public static Solution getInstance() {
        // write your code here
        if (instance == null) {
            instance = new Solution();
        }
        return instance;
    }
    
    private Solution () {
        
    }
};
