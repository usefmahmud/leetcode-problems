class Cashier {
    unordered_map<int,int> m;
    int limit, dis;
    int count = 0;
public:
    Cashier(int n, int discount, vector<int>& products, vector<int>& prices): limit(n), dis(discount){
        for(int i = 0; i < products.size(); i++){
            m[products[i]] = prices[i];
        }
    }
    
    double getBill(vector<int> product, vector<int> amount) {
        double original = 0;
        ++count;
        for(int i = 0; i < product.size(); i++){
            original += m[product[i]] * amount[i];
        }
        if(!(count % limit)){
            return original * ((100 - dis) / 100.0);
        }
        
        return original;
    }
};

/**
 * Your Cashier object will be instantiated and called as such:
 * Cashier* obj = new Cashier(n, discount, products, prices);
 * double param_1 = obj->getBill(product,amount);
 */