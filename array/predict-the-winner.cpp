class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        int player1=0;
        int player2=0;
        for(int i=0;i<=nums.size();i+=2){
            player1+=i;
        }
        for(int i=1;i<=nums.size();i+=2){
            player2+=i;
        }
        if(player1>=player2){
            return true;
        }
        else{
            return false;
        }
    }
};