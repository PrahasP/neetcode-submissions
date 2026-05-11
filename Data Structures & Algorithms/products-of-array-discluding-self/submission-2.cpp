class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> products;
        int product = 1;

        for(int i = 0; i < nums.size(); i++){
            products.push_back(product);
            product *= nums[i];
        }

        int rightProduct = 1;

        for(int j = nums.size() - 1; j >= 0; j--){
            products[j] *= rightProduct;
            rightProduct *= nums[j];
        }

        return products;
    }
};
