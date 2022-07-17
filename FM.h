struct market {
    struct sell* b;
    struct buy* s;
};
struct sell {
    double price;
    int amount;
};
struct buy {
    double price;
    int amount;
};
struct paper {
    double price;
    char* code;
    struct market m;
};

void create_file();
void charge_data();
void market();
