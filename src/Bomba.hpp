
class Bomba : public ObjetoDeJogo 
{
    public:
        Bomba(std::string name, const Sprite &s, int posL, int posC) : ObjetoDeJogo(name, s, posL, posC), timer(3) {}

        void explodir();

    private:
        int timer;
}