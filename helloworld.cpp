#include <eosiolib/eosio.hpp>

using namespace eosio;

CONTRACT helloworld: public contract {
    public:
        using contract::contract; 

        ACTION hi(name user){
            bool isTrue = has_auth(get_self()) || has_auth("wjdwlsgks123"_n);
           
            check(isTrue, "miss");            

            // == require_auth(user)
            //require_auth(user);

            // has_auth() -> true or false
            print("hello, ", user);
        }
    private :

};