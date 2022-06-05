class TextEditor {
public:
     stack<char>lt,rt;
    TextEditor() {
        
    }
    
    void addText(string text) {
        for(int i=0;i<text.size();i++){
            
            lt.push(text[i]);
            
        }
        
    }
    
    int deleteText(int k) {
        int i=0;
        for( i=0;i<k;i++){
            if(lt.empty())
                return i;
            lt.pop();
            
        }
        return i;
    }
    
    string cursorLeft(int k) {
        
        for(int i=0;i<k;i++){
            if(lt.empty())
                break;
            char t=lt.top();
            lt.pop();
            rt.push(t);
            
        }
        
         string str="";
        int n=10;
        while(!lt.empty() && n>0){
            n--;
            str+=lt.top();
            lt.pop();
        }
        reverse(str.begin(),str.end());
        for(int i=0;i<str.size();i++)
            lt.push(str[i]);
        
        return str;
    }
    
    string cursorRight(int k) {
        
         
        
        for(int i=0;i<k;i++){
            if(rt.empty())
               break;
            char t=rt.top();
            rt.pop();
            lt.push(t);
            
        }
       
      string str="";
        int n=10;
        while(!lt.empty() && n>0){
            n--;
            str+=lt.top();
            lt.pop();
        }
        reverse(str.begin(),str.end());
        for(int i=0;i<str.size();i++)
            lt.push(str[i]);
        
        return str;
    }
};

/**
 * Your TextEditor object will be instantiated and called as such:
 * TextEditor* obj = new TextEditor();
 * obj->addText(text);
 * int param_2 = obj->deleteText(k);
 * string param_3 = obj->cursorLeft(k);
 * string param_4 = obj->cursorRight(k);
 */