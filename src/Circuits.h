class Circuit{
    private:
    // Circuit variables ( If any )
    public:

    class Digital{
       private:
        // Circuit variables ( If any )
        public:

        class Gates{
            private:
            // Circuit variables ( If any )
            public:

            class And{
                private:
                    int inp1;
                    int inp2;
                public:
                void getInputs(){
                    // Need to return both inputs
                }
                void input(int val1, int val2){
                    inp1 = val1;
                    inp2 = val2;
                }
                int output(){
                    return inp1 & inp2;
                }
            };
        }; 
    };
};