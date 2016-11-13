#ifndef SUBJECT_H
#define SUBJECT_H

using namespace std;

class Subject{
    class Observer* weatherView;
    double temp;
    double press;
    double humid;
    public:
        void attach(Observer * obs){
            weatherView = obs;
        }

        void setTemp(double t){
            temp = t;
            notify();
        }

        void setPress(double p){
            press = p;
            notify();
        }

        void setHumid(double h){
            humid = h;
            notify();
        }

        void notify();

        double getTemp(){
            return temp;
        }

        double getPress(){
            return press;
        }

        double getHumid(){
            return humid;
        }
};

class Observer{
    Subject * subj;
    public:
        Observer(Subject * s){
            subj = s;
            subj->attach(this);
        }

        virtual void update() = 0;
    protected:
        Subject * getSubj(){ return subj; }
};

void Subject::notify(){
    weatherView->update();
}

class WeatherObserver : public Observer{
    public:
        WeatherObserver(Subject * s) : Observer(s){}
        void update(){
            cout << "Temperature: " << getSubj()->getTemp() << endl;
            cout << "Pressure: " << getSubj()->getPress() << endl;
            cout << "Humidity: " << getSubj()->getHumid() << endl;
        }

};



#endif