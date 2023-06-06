#ifndef GAME_TERMINAL_HPP_
#define GAME_TERMINAL_HPP_


namespace Game{
    class Terminal{
    private:
        int row;
        int column;
        void get_size();
    public:
        Terminal();
        void print();
    };
};

#endif //GAME_TERMINAL_HPP_
