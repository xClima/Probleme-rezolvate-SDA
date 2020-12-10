#includeiostream
#includequeue
#includestack
using namespace std;

queueint reverse(stdqueueint originalQueue);

queueint reverse(stdqueueint originalQueue){

  
 
   stackint Stack; 
    while (!originalQueue.empty()) { 
        Stack.push(originalQueue.front()); 
        originalQueue.pop(); 
    } 
    while (!Stack.empty()) { 
        originalQueue.push(Stack.top()); 
        Stack.pop(); 
    } 
    return originalQueue;
    
} 
  
        
        
    reverse(stdqueueint, stddequeint, stdallocatorint  

