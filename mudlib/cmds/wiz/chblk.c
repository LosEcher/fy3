#include <globals.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
        object ob;
        string who, ch_name;
        
    if (!arg)
        return notify_fail("ָ���ʽ��chblk name \n");
    
        ob = LOGIN_D->find_body(arg);
        if (!ob) return notify_fail("����˲��ڣ�\n");
        if (wizardp(ob)) return notify_fail("���ܹر���ʦ��Ƶ����\n");
        ob->set("bad_chat",1);  
        tell_object(me, (string)ob->query("name")+"�Ĺ���Ƶ�����ر��ˡ�\n");
        return 1;
}
