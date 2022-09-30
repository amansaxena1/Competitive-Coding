public Stack characterCheck(Stack inStrStack1, Stack inStrStack2){
    Stack outStrStack = new Stack(inStrStack2,getMaxSize());
    Stack tempStrStack = new Stack(inStrStack1,getMaxSize());
    while(!inStrStack1.isEmpty()){
        String value = inStrStack1.pop();
        tempStrStack.push(value);
    }
    while(!tempStrStack.isEmpty()){
        String str1 = tempStrStack.pop();
        String str2 = inStrStack2.pop();
        if(str1.equals(str2)){
            int count = 0;
            for(int index=0;index<str1.length();index++){
                if(str1.substring(index,index+1).equals(str2)){
                    count = count+1;
                }
            }
            outStrStack.push(str1+":"+count);
        }
        else{
            outStrStack.push(str1+":"+str2);
        }
    }
    return outStrStack;
}