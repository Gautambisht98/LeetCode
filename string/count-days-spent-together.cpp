class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        string start = max(arriveAlice, arriveBob);
        string end = min(leaveAlice, leaveBob);

        if (start > end)
            return 0;

        int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int m1 = stoi(start.substr(0, 2));
        int d1 = stoi(start.substr(3, 2));

        int total1 = d1;

        for (int i = 0; i < m1 - 1; i++) {
            total1 += days[i];
        }

        int m2 = stoi(end.substr(0, 2));
        int d2 = stoi(end.substr(3, 2));

        int total2 = d2;

        for (int i = 0; i < m2 - 1; i++) {
            total2 += days[i];
        }

        return total2 - total1 + 1;
    }
};