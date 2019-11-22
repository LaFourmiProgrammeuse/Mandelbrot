#ifndef WINDOW_H
#define WINDOW_H

template <typename T> class Window
{
public:
    Window(T x_min, T x_max, T y_min, T y_max) : m_x_min(x_min), m_x_max(x_max), m_y_min(y_min), m_y_max(y_max){}

    T size(){
        return (width() * height());
    }

    T width(){
        return (m_x_max - m_x_min);
    }

    T height(){
        return (m_y_max - m_y_min);
    }

    void setXMin(T x_min){m_x_min = x_min;}
    void setYMin(T y_min){m_y_min = y_min;}
    void setXMax(T x_max){m_x_max = x_max;}
    void setYMax(T y_max){m_y_max = y_max;}

    T getXMin(){return m_x_min;}
    T getYMin(){return m_y_min;}
    T getXMax(){return m_x_max;}
    T getYMax(){return m_y_max;}

private:
    T m_x_min;
    T m_x_max;
    T m_y_min;
    T m_y_max;
};

#endif // WINDOW_H
