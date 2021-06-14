struct meeting {
    int s;
    int e;
    int pos; 
}; 

static bool comparator(meeting m1, meeting m2) 
{ 
    if (m1.e < m2.e){return true;} 
    else if(m1.e > m2.e){return false;} 
    //If finishing times are equal then the meeting which occurs first while traversing is pushed first
    else{
    if(m1.pos < m2.pos)return true; 
    return false; }
} 
    
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
          meeting meet[n]; 
    for(int i = 0;i<n;i++) {
        meet[i].s = start[i], meet[i].e = end[i], meet[i].pos = i+1; 
    }
    
    sort(meet, meet+n, comparator); 
    
    //First meeting can be performed so we start counting from
    int end_limit = meet[0].e;
    int count = 1;
    
    for(int i = 1;i<n;i++) {
//If starting time of new meeting is greater than finishing time of the previous meeting,then this meeting can be performed
        if(meet[i].s >end_limit) {
            end_limit = meet[i].e; //Update the ending time
            count++;
        }
    }

      return count;
    }
