class Solution {
    /**
     * @return: The same instance of this class every time
     */
    private static final Solution instance = new Solution();
    
    public static Solution getInstance() {
        return instance;
    }
    
    private Solution () {
        
    }
};
