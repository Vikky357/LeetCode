/*
You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point. 
Check if these points make a straight line in the XY plane.

eg:Input: coordinates = [[1,2],[2,3],[3,4],[4,5],[5,6],[6,7]]
   Output: true
   
   Input: coordinates = [[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]]
  Output: false
  */
  
  // Formula:(y2-y1)*(x3-x2)=(y3-y2)*(x2-x1) ----->[(y2-y2)/(x2-x1) = (y3-y2)/(x3-x2)]
  // To avoid Divide By Zero Error We use Cross Product of Slope equation....
  
  class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int size=coordinates.size();
        if(size==2)
            return true;
        int y=coordinates[1][1]-coordinates[0][1];
        int x=coordinates[1][0]-coordinates[0][0];
        int x1,y1;
        for(int i=2;i<size;i++)
        {
            x1=coordinates[i][0]-coordinates[i-1][0];
            y1=coordinates[i][1]-coordinates[i-1][1];
            if(x*y1 != y*x1)
                return false;
        }
        return true;
        
    }
}
