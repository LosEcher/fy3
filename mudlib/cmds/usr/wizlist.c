// wizlist.c
#include <ansi.h>
#include <mudlib.h>

inherit F_CLEAN_UP;
int level(mixed, mixed);
string wiz_rank(string hood);

int main(object me, string arg)
{
        string *list, hood = "", str;
        int j = 0;
        list = sort_array(SECURITY_D->query_wizlist(), (: level :) );
        str = MUD_NAME +"��ʦ���Ա��\n";
        str += "��������������������������������������\n";
        for(int i=0; i<sizeof(list); i++, j++) {
                if (hood!= wiz_rank(wizhood(list[i]))) {
                        hood = wiz_rank(wizhood(list[i]));
                        if (j%7) str += "\n";
                        str += hood;
                        str = replace_string(str,"(",HIG);
                        str = replace_string(str,")",": "NOR);
                        j = 0;
                }
                str += sprintf(" %s%s", list[i],
                        ( j%7==6 ) ? "\n" : ( i<sizeof(list)-1 && hood ==wizhood(list[i+1]) ) ? ", " : ""  );
        }
        str += "\n��������������������������������������\n";
        str += sprintf("Ŀǰһ����: %d����ʦ\n",sizeof(list) );
        me->start_more(str);
        return 1;
}
string wiz_rank(string hood)
{       switch(hood) {
                case "(admin)":                 
                        return HIW "�� ��  �� ��" NOR;
                 case "(sage)":                  
                        return HIR "�� ʥ  �� ��" NOR;
                case "(arch)":                  
                        return HIY "�� ����ʦ ��" NOR;
                case "(wizard)":                
                        return HIG "�� ��  ʦ ��" NOR;
                case "(apprentice)":                
                          return HIC "����ʦѧͽ��" NOR;
                case "(immortal)":              
                          return HIB "�� ��  �� ��" NOR;
        }
}
int level(mixed ob1, mixed ob2)
{
        if (wiz_level(ob1) != wiz_level(ob2))
                return wiz_level(ob1) - wiz_level(ob2);
        return ob1 < ob2?-1:1;
}
int help(object me)
{
        write("\nָ���ʽ : wizlist\n"
        "��; : �г�Ŀǰ���е���ʦ������\n"
        );
        return 1;
}
