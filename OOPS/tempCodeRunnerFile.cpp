Hero(Hero &temp){
        char *ch=new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;
        this->health=temp.health;
        this->level=temp.level;
        cout<<"Name : "<<name<<endl;
        cout<<"Health : "<<health<<endl;
        cout<<"Level : "<<level<<endl;
    }