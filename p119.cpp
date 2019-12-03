#include<bits/stdc++.h>
using namespace std;

  struct rumon{
   string group_name;
   int amount;
   int person_number;
   int gain;
   };

int main()
{
    int t;
    int cc=0;
  while(scanf("%d",&t)!=EOF){
        rumon group[10];
    for(int i=0;i<t;i++){
        cin>>group[i].group_name;
        group[i].amount=0;
        group[i].gain=0;
    }
    string giver;
    for(int i=0;i<t;i++){
            int amountt,person_num,l=0;
        cin>>giver>>amountt>>person_num;
           for( l=0;l<t;l++){
            if(giver == group[l].group_name){
                group[l].amount=amountt;
                group[l].person_number=person_num;
                break;
            }
           }
             if(group[l].amount==0 && group[l].person_number==0) group[l].amount=0;
             else if(group[l].amount>0 && group[l].person_number==0) group[l].amount=group[l].amount;
           else{
            group[l].amount = group[l].amount - (group[l].amount % group[l].person_number);
           }
            int perhead_money;
            if(group[l].person_number == 0) perhead_money = 0;
            else perhead_money = group[l].amount/group[l].person_number;
            int f=0;
            for(int j=0;j<group[l].person_number;j++){
                    f=1;
                string taker_name;
                cin>>taker_name;
                for(int k=0;k<t;k++){
                    if(taker_name == group[k].group_name){
                        group[k].gain = group[k].gain + perhead_money;
                    }
                }
            }
            if(f==0)
            group[l].gain=group[l].gain + group[l].amount;
    }
    if(cc!=0) cout<<'\n';
    for(int i=0;i<t;i++){
        int gain_or_loss = group[i].gain - group[i].amount;
        cout<<group[i].group_name<<" "<<gain_or_loss<<'\n';

    }
    cc++;
  }
  return 0;
}
