#include "Trip.h"


double Trip::Distance(string from, string to) {
    double start = -1, end = -1;
    for (Station st : Stations) {
        if (st.Station_Name == from) {
            start = st.DistanceFromStart;
        }
        if (st.Station_Name == to) {
            end = st.DistanceFromStart;
            break;
        }
    }
    if (start != -1 && end != -1) {
        return end - start;
    }
    else {
        return -1;
    }
}
