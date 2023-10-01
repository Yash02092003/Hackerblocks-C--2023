 stack<int> ast;
        for(int i = 0 ; i < asteroids.size() ; i++){
            if(ast.empty() or asteroids[i] > 0){
                ast.push(asteroids[i]);
            }
            else{
                int flag = 0;
                while(!ast.empty() and ast.top() > 0){
                    int temp = asteroids[i] + ast.top();
                    if(temp < 0){
                        ast.pop();
                        if(ast.empty()){
                            ast.push(asteroids[i]);
                            flag = 1;
                            break;
                        }
                    }
                    else if(temp == 0){
                        ast.pop();
                        flag = 1;
                        break;
                    }
                    else{
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0){
                    ast.push(asteroids[i]);
                }
            }
        }
        vector<int> ans;
        while(!ast.empty()){
            ans.push_back(ast.top());
            ast.pop();
        }
        reverse(ans.begin() , ans.end());
        return ans;
