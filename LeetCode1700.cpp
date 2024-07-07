class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int total_curcular_sandwiche_choices = 0, total_square_sandwiche_choices = 0;

        for(int x : students) {
            if(x) total_square_sandwiche_choices++;
            else total_curcular_sandwiche_choices++;
        }

        for(int x : sandwiches) {
            if(x) {
                if(total_square_sandwiche_choices) {
                    total_square_sandwiche_choices--;
                } else {
                    return total_curcular_sandwiche_choices;
                }
            } else {
                if(total_curcular_sandwiche_choices) {
                    total_curcular_sandwiche_choices--;
                } else {
                    return total_square_sandwiche_choices;
                }
            }
        }

        return 0;
    }
};
