//
// Created by Julien Metzelard on 15/10/2025.
//

#ifndef INC_3A_TP_ALGO_TAS_H
#define INC_3A_TP_ALGO_TAS_H

template <typename T>
class Tas_Max {
    T top_value;
    Tas_Max left_Tas;
    Tas_Max right_Tas;
    public:
    Tas_Max() {
        top_value = NULL;
        left_Tas = NULL;
        right_Tas = NULL;

    }
    void push(T data) {
        if (top_value == NULL) top_value = data;
        else {
            if (data > top_value) {
                if (left_Tas.find_max() > right_Tas.find_max().find_max()) {
                    right_Tas.push(top_value);
                }
                else {
                    left_Tas.push(top_value);
                }
                top_value = data;
            }

        }
    }

    T find_max() {
        return top_value;
    }
    T pop_max() {

    }

};
#endif //INC_3A_TP_ALGO_TAS_H