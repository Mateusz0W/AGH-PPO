#ifndef SNOWCANNON_H
#define SNOWCANNON_H


class SnowCannon{
    private:
        int ID;
        bool STATE;
        double CAPACITY;
        double CONSUMPTION;
        double WATER;

    public:
        void SetID(int id);
	    void SetState(bool state);
	    void SetCapacity(double capacity);
	    void SetConsumption(double consumption);
	    void SetWater(double water); //water
        void Presentation();
        void Make(double amount);
        void Start();
        void Reload(double water);
        void Stop();
};
#endif