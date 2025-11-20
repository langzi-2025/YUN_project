#ifndef PID_HPP
#define PID_HPP



class PID_{
public:
    PID_(float kp, float ki, float kd,float max, float min)
    {
        this->kp = kp;
        this->ki = ki;
        this->kd = kd;
        this->max = max;
        this->min = min;
    };
    void calc(void);
    void set_error(float a)
    {
        this->error = a;
    }
    float get_output(void)
    {
        return this->output;
    }

private:
    float kp = 0;
    float ki = 0;
    float kd = 0;
    float error = 0;
    float prev_error = 0;
    float integral = 0;
    float derivative = 0;
    float output = 0;
    float max = 0;
    float min = 0;
};

#endif // PID_HPP

